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
    public partial class IntelligenceTestingForm : Form
    {
        public int id;
        public Test test;
        public int CurrentQuestionNumber;
        public double NumberOfCorrectAnswers=0;
        public int Time = 1800;//Время прохождения теста в секундах 

        Timer timer = new Timer();
        public int timerCounter = 0; //счётчик для таймера

        public IntelligenceTestingForm(int id)
        {
            this.id = id;


            InitializeComponent();

            Answer1.Enabled = false;
            Answer2.Enabled = false;
            Answer3.Enabled = false;
            Answer4.Enabled = false;
            Answer5.Enabled = false;

            timer.Interval = 1000; //интервал между срабатываниями 1000 миллисекунд
            timer.Tick += new EventHandler(timer_Tick); //подписываемся на события Tick 

            label6.Text = "Номер вопроса №" + Convert.ToString(CurrentQuestionNumber);
            label7.Text = "Кол-во правильных ответов - " + NumberOfCorrectAnswers;
        }

        string ConvertToTime(int time)
        {
            return Convert.ToString(time / 60) + ":" + Convert.ToString(time % 60);
        }
        void timer_Tick(object sender, EventArgs e)
        {
            //В текстбокс выводим значение timerCounter увеличенное на 1
            ++timerCounter;

            this.label8.Text = "Оставшейся время "+  ConvertToTime(Time - timerCounter);

            if (timerCounter == Time)
            {
                MessageBox.Show(" Время закончилось(( \n Кол-во правильных ответов " + NumberOfCorrectAnswers + " из 30. \n Ваш балл - " + Math.Round((NumberOfCorrectAnswers / 30d) * 10d, 1) + " \n Ваш результат будет занесен в базу данных.");
                DBapi.AddResult(id, Math.Round((NumberOfCorrectAnswers / 30d) * 10d, 1));
                DBapi.CalculateAverageScore(id);
                Application.Exit();

            }
        }

        public void SetAnswersAndQuestion()
        {
            Answer1.Text = test.Questions[CurrentQuestionNumber].answer[0];
            Answer2.Text = test.Questions[CurrentQuestionNumber].answer[1];
            Answer3.Text = test.Questions[CurrentQuestionNumber].answer[2];
            Answer4.Text = test.Questions[CurrentQuestionNumber].answer[3];
            Answer5.Text = test.Questions[CurrentQuestionNumber].answer[4];

            MainTextBox.Text = test.Questions[CurrentQuestionNumber].question;
        }

        
        private void StartTest_Click(object sender, EventArgs e)
        {
            test = new Test();
            this.StartTest.Enabled = false;
            
            Answer1.Enabled = true;
            Answer2.Enabled = true;
            Answer3.Enabled = true;
            Answer4.Enabled = true;
            Answer5.Enabled = true;

            test.ShuffleQuestion();
            SetAnswersAndQuestion();
            timer.Start();

            

        }

        public void EndTest()
        {
            if(CurrentQuestionNumber == 29)
            {
                MessageBox.Show(" Тест завершен. \n Кол-во правильных ответов " + NumberOfCorrectAnswers + " из 30. \n Ваш балл - "+Math.Round((NumberOfCorrectAnswers/30d)*10d,1)+" \n Ваш результат будет занесен в базу данных.");
                DBapi.AddResult(id, Math.Round((NumberOfCorrectAnswers / 30d) * 10d, 1));
                DBapi.CalculateAverageScore(id);
                Application.Exit();
                
            }
        }

        public void GiveAnAnswer(int NumberOfAnswer)
        {
            if (test.CheakAnswer(CurrentQuestionNumber,NumberOfAnswer) == true)
            {
                NumberOfCorrectAnswers++;                
            }
            CurrentQuestionNumber++;
            SetAnswersAndQuestion();          
            label6.Text = "Номер вопроса №"+Convert.ToString(CurrentQuestionNumber+1);
            label7.Text = "Кол-во правильных ответов - " + NumberOfCorrectAnswers;
            EndTest();
            
            
        }
                            
        private void Answer1_Click(object sender, EventArgs e)
        {
            GiveAnAnswer(0);
        }

        private void Answer2_Click(object sender, EventArgs e)
        {
            GiveAnAnswer(1);
        }

        private void Answer3_Click(object sender, EventArgs e)
        {
            GiveAnAnswer(2);
        }

        private void Answer4_Click(object sender, EventArgs e)
        {
            GiveAnAnswer(3);
        }

        private void Answer5_Click(object sender, EventArgs e)
        {
            GiveAnAnswer(4);
        }

        private void IntelligenceTestingForm_FormClosed(object sender, FormClosedEventArgs e)
        {
            Application.Exit();
        }

        private void IntelligenceTestingForm_Load(object sender, EventArgs e)
        {

        }
    }
}
