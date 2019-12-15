using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace IntelligenceTest
{
    public partial class authorization : Form
    {
        public authorization()
        {
            InitializeComponent();
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            DBapi.connectionString = @"Data Source=DESKTOP-7KE32OM\SQLEXPRESS;Initial Catalog=IntelligenceTestDB;Integrated Security=True;Connect Timeout=3;Encrypt=False;TrustServerCertificate=False;ApplicationIntent=ReadWrite;MultiSubnetFailover=False";
        }


        private void Button1_Click(object sender, EventArgs e)
        {
            AuthorizationForTheTeachers authorizationForTheTeacher = new AuthorizationForTheTeachers();
            authorizationForTheTeacher.Show();
            this.Hide();
        }

      
        private void Nomer_groupTB_KeyPress(object sender, KeyPressEventArgs e)
        {
            e.Handled = !char.IsDigit(e.KeyChar) && !char.IsControl(e.KeyChar);
        }

        private void Log_in_Click_1(object sender, EventArgs e)
        {
            
                string fam = famTB.Text;
                string name = nameTB.Text;
                string otc = otcTB.Text;
                int nomer_kursa=0;
                int nomer_group=0;
            try
            {
                nomer_kursa = Convert.ToInt32(nomer_kursTB.Text);
                nomer_group = Convert.ToInt32(nomer_groupTB.Text);
            }catch(Exception ex)
            {
                nomer_group = nomer_kursa = 0;
            }
                int id;
                id = DBapi.GetIdStudent(new Student(fam, name, otc, nomer_kursa, nomer_group));
                if (id == 0)
                {
                    MessageBox.Show("Проверьте правильность введенных данных");
                    return;
                }
                IntelligenceTestingForm itf = new IntelligenceTestingForm(id);
                itf.Show();
                Hide();        
        }

        private void Button2_Click(object sender, EventArgs e)
        {
           
            Help.ShowHelp(this, $"C:/Users/Андрей/Desktop/Курсач Литвинович/HELP.chm");
            
        }
    }
}
