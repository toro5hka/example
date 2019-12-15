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
    public partial class Statistics : Form
    {
        public Statistics()
        {
            InitializeComponent();
        }

        private void Statistics_Load(object sender, EventArgs e)
        {
            DBapi.OpenConnection();

            SqlCommand command = new SqlCommand("select * from Учащейся",DBapi.Connection);

            SqlDataReader reader = command.ExecuteReader();

            List<string[]> data = new List<string[]>();

            while (reader.Read())
            {
                data.Add(new string[7]);

                data[data.Count - 1][0] = reader[0].ToString();
                data[data.Count - 1][1] = reader[1].ToString();
                data[data.Count - 1][2] = reader[2].ToString();
                data[data.Count - 1][3] = reader[3].ToString();
                data[data.Count - 1][4] = reader[4].ToString();
                data[data.Count - 1][5] = reader[5].ToString();
                data[data.Count - 1][6] = reader[6].ToString();
            }

            reader.Close();

            foreach (string[] s in data)
                dataGridView1.Rows.Add(s);

            DBapi.CloseConnection();

            ////////////////////////////////
            ///

            DBapi.OpenConnection();

            SqlCommand command2 = new SqlCommand("select Балл,id_учащегося from [Результаты тестов]", DBapi.Connection);

            SqlDataReader reader2 = command2.ExecuteReader();

            List<string[]> data2 = new List<string[]>();

            while (reader2.Read())
            {
                data2.Add(new string[2]);

                data2[data2.Count - 1][0] = reader2[0].ToString();
                data2[data2.Count - 1][1] = reader2[1].ToString();
            }

            reader2.Close();

            foreach (string[] s in data2)
                dataGridView2.Rows.Add(s);

            DBapi.CloseConnection();
        }

        private void Statistics_FormClosed(object sender, FormClosedEventArgs e)
        {
            Application.Exit();
        }
    }
}
