using System;
using System.Collections.Generic;
using System.Data.SqlClient;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace IntelligenceTest
{
    public class DBapi
    {
        public static SqlConnection Connection = null;
        public static string connectionString = null;

        public string ConnectionString { get => connectionString; set => connectionString = value; }

        public static void OpenConnection()
        {
            if (connectionString == null)
            {
                return;
            }
            try
            {
                Connection = new SqlConnection(connectionString);
                Connection.Open();
            }
            catch (Exception e)
            {
                Console.WriteLine(e.ToString());
                return;
            }
        }

        public static void CloseConnection()
        {
            if (Connection == null)
            {
                return;
            }

            try
            {
                Connection.Close();
            }
            catch (Exception e)
            {
                Console.WriteLine(e.ToString());
                return;
            }
        }

        public static int GetIdTeacher(string name, string surname, string otc, string password)
        {
            OpenConnection();

            SqlCommand command = new SqlCommand("select id from Преподователи Where Имя ='" + name + "' and Фамилия='" + surname + "' and Отчество='" + otc + "' and Пароль='" + password + "'", DBapi.Connection);
            int id;
            SqlDataReader sqlDataReader = command.ExecuteReader();
            try
            {
                sqlDataReader.Read();
                id = sqlDataReader.GetInt32(0);
                sqlDataReader.Close();
                CloseConnection();
            }
            catch (Exception e)
            {
                return 0;
            }

            return id;
        }


        public static int GetIdStudent(Student student)
        {
            OpenConnection();

            SqlCommand sqlCommand = new SqlCommand(@"select id from Учащейся where
            Фамилия='"+student.fam+ "' and " +
            "Имя='" + student.name + "' and "  +
            "Отчество='" + student.otc + "' and " +
            "[Номер курса]='" + student.nomer_kurs + "' and " +
            "[Номер группы]='" + student.nomer_group + "'",  
            DBapi.Connection);
            int id;
            SqlDataReader sqlDataReader = sqlCommand.ExecuteReader();
            try
            {
                sqlDataReader.Read();
                id = sqlDataReader.GetInt32(0);
                sqlDataReader.Close();
                CloseConnection();
            }catch (Exception e)
            {            
                return 0;
            }

            return id;
        }

        public static void AddResult(int id, double mark)
        {
            OpenConnection();
            string SQLMark = mark.ToString();
            try
            {
                StringBuilder someString = new StringBuilder(Convert.ToString(mark));
                someString[1] = '.';
                string SQLmark = someString.ToString();
                SqlCommand command1 = new SqlCommand("INSERT INTO [Результаты тестов] (Балл,id_учащегося) VALUES ('" + SQLmark + "','" + id + "')", Connection);
                command1.ExecuteNonQuery();
            }
            catch(Exception e)
            {
                SqlCommand command = new SqlCommand("INSERT INTO [Результаты тестов] (Балл,id_учащегося) VALUES ('" + mark + "','" + id + "')", Connection);
                command.ExecuteNonQuery();
            }
            CloseConnection();
        }

        public static void CalculateAverageScore(int id)
        {
            OpenConnection();
            SqlCommand command = new SqlCommand("update Учащейся set [Средний балл]=(select round(avg([Результаты тестов].Балл),1) from [Результаты тестов] where id_учащегося='"+id+"') where Учащейся.id='"+id+"'", Connection);
            command.ExecuteNonQuery();
            CloseConnection();
        }
    }
}
