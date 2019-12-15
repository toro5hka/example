using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace IntelligenceTest
{
    public class Student
    {
        public string fam;
        public string name;
        public string otc;
        public int nomer_kurs;
        public int nomer_group;
        public string midl_ball;

        public Student(string fam, string name, string otc, int nomer_kurs, int nomer_group)
        {
            this.fam = fam;
            this.name = name;
            this.otc = otc;
            this.nomer_kurs = nomer_kurs;
            this.nomer_group = nomer_group;           
        }
    }
}
