using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Data.SqlClient;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace IntelligenceTest
{
    public partial class AuthorizationForTheTeachers : Form
    {
        public AuthorizationForTheTeachers()
        {
            InitializeComponent();
        }

        private void AuthorizationForTheTeacher_Load(object sender, EventArgs e)
        {
                      
        }

        private void AuthorizationForTheTeacher_FormClosed(object sender, FormClosedEventArgs e)
        {
            Application.Exit();
        }

        private void Button1_Click(object sender, EventArgs e)
        {
            int id;
            string name = Name.Text;
            string surname = Surname.Text;
            string otc = Otc.Text;
            string password = Password.Text;

            DBapi.OpenConnection();
            SqlCommand command = new SqlCommand("select id from Преподователи Where" +
                " Имя ='" + name + "'" +
                " and Фамилия='" + surname + 
                "' and Отчество='" + otc + "' and Пароль=" +
                "'" + password + "'", DBapi.Connection);          
            id = DBapi.GetIdTeacher(name,surname,otc,password);
            if (id == 0)
            {
                MessageBox.Show("Проверьте правильность введенных данных");
                return;
            }
            Statistics statistics = new Statistics();
            statistics.Show();
            this.Hide();
            DBapi.CloseConnection();
        }
    }
}
