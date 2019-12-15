namespace IntelligenceTest
{
    partial class authorization
    {
        /// <summary>
        /// Обязательная переменная конструктора.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Освободить все используемые ресурсы.
        /// </summary>
        /// <param name="disposing">истинно, если управляемый ресурс должен быть удален; иначе ложно.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Код, автоматически созданный конструктором форм Windows

        /// <summary>
        /// Требуемый метод для поддержки конструктора — не изменяйте 
        /// содержимое этого метода с помощью редактора кода.
        /// </summary>
        private void InitializeComponent()
        {
            this.famTB = new System.Windows.Forms.TextBox();
            this.nameTB = new System.Windows.Forms.TextBox();
            this.label1 = new System.Windows.Forms.Label();
            this.label2 = new System.Windows.Forms.Label();
            this.label3 = new System.Windows.Forms.Label();
            this.label4 = new System.Windows.Forms.Label();
            this.label5 = new System.Windows.Forms.Label();
            this.otcTB = new System.Windows.Forms.TextBox();
            this.nomer_groupTB = new System.Windows.Forms.TextBox();
            this.nomer_kursTB = new System.Windows.Forms.TextBox();
            this.button1 = new System.Windows.Forms.Button();
            this.Log_in = new System.Windows.Forms.Button();
            this.helpProvider1 = new System.Windows.Forms.HelpProvider();
            this.button2 = new System.Windows.Forms.Button();
            this.SuspendLayout();
            // 
            // famTB
            // 
            this.famTB.Location = new System.Drawing.Point(12, 25);
            this.famTB.Name = "famTB";
            this.famTB.Size = new System.Drawing.Size(177, 20);
            this.famTB.TabIndex = 0;
            // 
            // nameTB
            // 
            this.nameTB.Location = new System.Drawing.Point(12, 64);
            this.nameTB.Name = "nameTB";
            this.nameTB.Size = new System.Drawing.Size(177, 20);
            this.nameTB.TabIndex = 1;
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Location = new System.Drawing.Point(9, 48);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(29, 13);
            this.label1.TabIndex = 2;
            this.label1.Text = "Имя";
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Location = new System.Drawing.Point(9, 9);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(56, 13);
            this.label2.TabIndex = 3;
            this.label2.Text = "Фамилия";
            // 
            // label3
            // 
            this.label3.AutoSize = true;
            this.label3.Location = new System.Drawing.Point(13, 87);
            this.label3.Name = "label3";
            this.label3.Size = new System.Drawing.Size(54, 13);
            this.label3.TabIndex = 5;
            this.label3.Text = "Отчество";
            // 
            // label4
            // 
            this.label4.AutoSize = true;
            this.label4.Location = new System.Drawing.Point(9, 167);
            this.label4.Name = "label4";
            this.label4.Size = new System.Drawing.Size(51, 13);
            this.label4.TabIndex = 6;
            this.label4.Text = "№ Курса";
            // 
            // label5
            // 
            this.label5.AutoSize = true;
            this.label5.Location = new System.Drawing.Point(9, 128);
            this.label5.Name = "label5";
            this.label5.Size = new System.Drawing.Size(58, 13);
            this.label5.TabIndex = 7;
            this.label5.Text = "№ Группы";
            // 
            // otcTB
            // 
            this.otcTB.Location = new System.Drawing.Point(12, 103);
            this.otcTB.Name = "otcTB";
            this.otcTB.Size = new System.Drawing.Size(177, 20);
            this.otcTB.TabIndex = 8;
            // 
            // nomer_groupTB
            // 
            this.nomer_groupTB.Location = new System.Drawing.Point(12, 144);
            this.nomer_groupTB.Name = "nomer_groupTB";
            this.nomer_groupTB.Size = new System.Drawing.Size(177, 20);
            this.nomer_groupTB.TabIndex = 9;
            this.nomer_groupTB.KeyPress += new System.Windows.Forms.KeyPressEventHandler(this.Nomer_groupTB_KeyPress);
            // 
            // nomer_kursTB
            // 
            this.nomer_kursTB.Location = new System.Drawing.Point(12, 183);
            this.nomer_kursTB.Name = "nomer_kursTB";
            this.nomer_kursTB.Size = new System.Drawing.Size(177, 20);
            this.nomer_kursTB.TabIndex = 10;
            this.nomer_kursTB.KeyPress += new System.Windows.Forms.KeyPressEventHandler(this.Nomer_groupTB_KeyPress);
            // 
            // button1
            // 
            this.button1.Location = new System.Drawing.Point(12, 238);
            this.button1.Name = "button1";
            this.button1.Size = new System.Drawing.Size(177, 43);
            this.button1.TabIndex = 11;
            this.button1.Text = "Авторизация для\r\n преподавателя\r\n";
            this.button1.UseVisualStyleBackColor = true;
            this.button1.Click += new System.EventHandler(this.Button1_Click);
            // 
            // Log_in
            // 
            this.Log_in.Location = new System.Drawing.Point(12, 209);
            this.Log_in.Name = "Log_in";
            this.Log_in.Size = new System.Drawing.Size(177, 23);
            this.Log_in.TabIndex = 12;
            this.Log_in.Text = "Авторизоваться";
            this.Log_in.UseVisualStyleBackColor = true;
            this.Log_in.Click += new System.EventHandler(this.Log_in_Click_1);
            // 
            // helpProvider1
            // 
            this.helpProvider1.HelpNamespace = "C:\\Users\\Андрей\\Desktop\\Курсач Литвинович\\HELP.chm";
            // 
            // button2
            // 
            this.button2.Location = new System.Drawing.Point(12, 287);
            this.button2.Name = "button2";
            this.button2.Size = new System.Drawing.Size(177, 23);
            this.button2.TabIndex = 13;
            this.button2.Text = "Справка";
            this.button2.UseVisualStyleBackColor = true;
            this.button2.Click += new System.EventHandler(this.Button2_Click);
            // 
            // authorization
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(198, 328);
            this.Controls.Add(this.button2);
            this.Controls.Add(this.Log_in);
            this.Controls.Add(this.button1);
            this.Controls.Add(this.nomer_kursTB);
            this.Controls.Add(this.nomer_groupTB);
            this.Controls.Add(this.otcTB);
            this.Controls.Add(this.label5);
            this.Controls.Add(this.label4);
            this.Controls.Add(this.label3);
            this.Controls.Add(this.label2);
            this.Controls.Add(this.label1);
            this.Controls.Add(this.nameTB);
            this.Controls.Add(this.famTB);
            this.Name = "authorization";
            this.Text = "Авторизация";
            this.Load += new System.EventHandler(this.Form1_Load);
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.TextBox famTB;
        private System.Windows.Forms.TextBox nameTB;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.Label label3;
        private System.Windows.Forms.Label label4;
        private System.Windows.Forms.Label label5;
        private System.Windows.Forms.TextBox otcTB;
        private System.Windows.Forms.TextBox nomer_groupTB;
        private System.Windows.Forms.TextBox nomer_kursTB;
        private System.Windows.Forms.Button button1;
        private System.Windows.Forms.Button Log_in;
        public System.Windows.Forms.HelpProvider helpProvider1;
        private System.Windows.Forms.Button button2;
    }
}

