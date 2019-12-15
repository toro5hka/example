using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace IntelligenceTest
{
    public class Question
    {
        public string question;
        public string[] answer;
        public int CorrectAnswerNumber;

        public Question(string question, string[] answer, int correctAnswerNumber)
        {
            this.question = question;
            this.answer = answer;
            CorrectAnswerNumber = correctAnswerNumber;
        }
    }
}
