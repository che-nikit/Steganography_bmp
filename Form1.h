#pragma once
#include "iostream";

namespace My12 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;
	/// <summary>
	/// Сводка для Form1
	///
	/// Внимание! При изменении имени этого класса необходимо также изменить
	///          свойство имени файла ресурсов ("Resource File Name") для средства компиляции управляемого ресурса,
	///          связанного со всеми файлами с расширением .resx, от которых зависит данный класс. В противном случае,
	///          конструкторы не смогут правильно работать с локализованными
	///          ресурсами, сопоставленными данной форме.
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  textBox1;
	protected: 
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;

	private: System::Windows::Forms::OpenFileDialog^  openFileDialog3;
	private: System::Windows::Forms::SaveFileDialog^  saveFileDialog1;
	private: System::Windows::Forms::SaveFileDialog^  saveFileDialog2;

	private:
		/// <summary>
		/// Требуется переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Обязательный метод для поддержки конструктора - не изменяйте
		/// содержимое данного метода при помощи редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->openFileDialog3 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->saveFileDialog2 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(146, 53);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(249, 26);
			this->textBox1->TabIndex = 0;
			this->textBox1->Click += gcnew System::EventHandler(this, &Form1::textBox1_Click);
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(146, 91);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(249, 26);
			this->textBox2->TabIndex = 1;
			this->textBox2->Click += gcnew System::EventHandler(this, &Form1::textBox2_Click);
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox3->Location = System::Drawing::Point(146, 129);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(249, 26);
			this->textBox3->TabIndex = 2;
			this->textBox3->Click += gcnew System::EventHandler(this, &Form1::textBox3_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(14, 61);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(120, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Входное изображение";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(14, 99);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(128, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Выходное изображение";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(14, 137);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(92, 13);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Текстовый файл";
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Checked = true;
			this->radioButton1->Location = System::Drawing::Point(17, 21);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(97, 17);
			this->radioButton1->TabIndex = 6;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Закодировать";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton1_CheckedChanged);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(146, 21);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(103, 17);
			this->radioButton2->TabIndex = 7;
			this->radioButton2->Text = L"Раскодировать";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton2_CheckedChanged);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(18, 176);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(376, 33);
			this->button1->TabIndex = 8;
			this->button1->Text = L"Выполнить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// openFileDialog3
			// 
			this->openFileDialog3->FileName = L"openFileDialog3";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(429, 225);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Name = L"Form1";
			this->Text = L"Стеганография";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	

void MarshalString ( String ^ s, string& os ) 
{
   using namespace Runtime::InteropServices;
   const char* chars = 
	  (const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
   os = chars;
   Marshal::FreeHGlobal(IntPtr((void*)chars));

}


private: System::Void textBox1_Click(System::Object^  sender, System::EventArgs^  e) 
{
	if (textBox1 ->Text->Length == 0)
	{
		 openFileDialog1->InitialDirectory = ".\\";
		 openFileDialog1->Filter = "Bmp (*.bmp)|*.bmp";

		 if(openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		 {
			 textBox1->Text = openFileDialog1->FileName;
		 }
	}
}

private: System::Void textBox2_Click(System::Object^  sender, System::EventArgs^  e)
		 {
			 if (textBox2 ->Text->Length == 0)
			{
				 saveFileDialog1->InitialDirectory = ".\\";
				 saveFileDialog1->Filter = "Bmp (*.bmp)|*.bmp";

				 if(saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
				 {
					 textBox2->Text = saveFileDialog1->FileName;
				 }
			}
		 }
private: System::Void textBox3_Click(System::Object^  sender, System::EventArgs^  e)
		 {
			 if(radioButton2->Checked==false)
			 {
				 if (textBox3 ->Text->Length == 0)
				{
					 openFileDialog3->InitialDirectory = ".\\";
					 openFileDialog3->Filter = "Text (*.txt)|*.txt";

					 if(openFileDialog3->ShowDialog() == System::Windows::Forms::DialogResult::OK)
					 {
						 textBox3->Text = openFileDialog3->FileName;
					 }
				}
			 }
			 else
			 {
					if (textBox3 ->Text->Length == 0)
					{
						 saveFileDialog2->InitialDirectory = ".\\";
						 saveFileDialog2->Filter = "Text (*.txt)|*.txt";

						 if(saveFileDialog2->ShowDialog() == System::Windows::Forms::DialogResult::OK)
						 {
							 textBox3->Text = saveFileDialog2->FileName;
						 }
					}
			 }

		 }
private: System::Void radioButton1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) 
		 {
			 if(radioButton1 ->Checked == true)
			 {
				 textBox1->Enabled = true;
				 textBox2->Enabled = true;
				 textBox3->Enabled = true;
			 }
		 }
private: System::Void radioButton2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) 
		 {
			if(radioButton2 ->Checked == true)
			 {
				 textBox1->Enabled = true;
				 textBox2->Enabled = false;
				 textBox3->Enabled = true;
			 }
		 }

private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
{
	string f1,f2,f3;
	char argv1[255],argv2[255],argv3[255],argv4[255],argv0[255];
	int h[54] = {}, bt, bw, bh, fl = 0;
	int t, ct = 0, bbf = 0, dbf = 0, obf[8];
	char o, h1, h2, *n[3] = {};
	FILE *f[3] = {};
	fpos_t p;

	int argc;

	if(radioButton1->Checked == true)
	{
		argc = 5;

		strcpy(argv0,"Stenography LSB");
		MarshalString(textBox1->Text,f1);
		MarshalString(textBox2->Text,f2);
		MarshalString(textBox3->Text,f3);
		strcpy(argv1,"-w");
		strcpy(argv2,f1.c_str());
		strcpy(argv4,f2.c_str());
		strcpy(argv3,f3.c_str());
	}
	else
	{
		argc = 4;
		strcpy(argv0,"Stenography LSB");
		MarshalString(textBox1->Text,f1);
		MarshalString(textBox3->Text,f3);
		strcpy(argv1,"-r");
		strcpy(argv2,f1.c_str());
		strcpy(argv3,f3.c_str());
	}
	

	
	o = (argv1[0] == '-') ? argv1[1] : argv1[0];
	
	switch(o)
	{
		case 'r':
			t = 2;
		break;
		case 'w':
			t = 3;
			break;
	}
	
	if(argc == 5)//если W
	{
		n[0] = argv2;
		n[1] = argv3;
		n[2] = argv4;
	}
	if(argc == 4)//если R
	{
		n[0] = argv2;
		n[1] = argv3;
	}

	
	if((f[0] = fopen(n[0], "rb")) == NULL){
		MessageBox::Show("Ошибка: файл не открыт");
		return ;}
	
	fread((char *)&h1, 1, 1, f[0]);
	fread((char *)&h2, 1, 1, f[0]);
	
	if(h1 != 'B' || h2 != 'M'){ 
		fclose(f[0]); 
		return ;}
	
	fseek(f[0], 18, SEEK_SET);
	fread((int *)&bw, 4, 1, f[0]);
	fread((int *)&bh, 4, 1, f[0]);
	bt = ((bw * bh * 3) / 8) - 32;
	
	switch(t)
	{
		case 2:
			if(n[0] == n[1]){
 
				return ;}
			if((f[1] = fopen(n[1], "wb")) == NULL){
				MessageBox::Show("Ошибка: файл не создан!"); 
				return ;}
			
			rewind(f[0]);
			fseek(f[0], 54, SEEK_SET);
			
			while(!feof(f[0]))
			{				
				dbf = 0;
				
				for(int i = 0; i <= 7; i++) obf[i] = fgetc(f[0]);
				for(int i = 7; i >= 0; i--){dbf += (obf[i] & 1); if(i > 0) dbf <<= 1;}
				
				if(dbf == '*')
				{
					ct++;
					fgetpos(f[0], &p);
					bbf = dbf;
					
					while(ct > 0 && ct < 4)
					{
						dbf = 0;
						for(int i = 0; i <= 7; i++) obf[i] = fgetc(f[0]);
						for(int i = 7; i >= 0; i--){dbf += (obf[i] & 1); if(i > 0) dbf <<= 1;}
						
						switch(ct)
						{
							case 1: ct = (dbf == '^') ? ct + 1 : 0; break;
							case 2: ct = (dbf == '&') ? ct + 1 : 0; break;
							case 3: ct = (dbf == '%') ? ct + 1 : 0; break;
						}
					}
					
					dbf = (ct == 0) ? bbf : dbf;
					fsetpos(f[0], &p);
				}
				
				if(dbf == EOF || ct == 4) break;
				else fputc(dbf, f[1]);
			}
			
			MessageBox::Show("Сообщение считано!");
			break;
		case 3:
			if(n[0] == n[1] || n[0] == n[2] || n[1] == n[2])
			{
				return ;}
			if((f[1] = fopen(n[1], "rb")) == NULL)
			{
				return ;
			}
			
			while(!feof(f[1]))
			{
				fgetc(f[1]); 
				fl++;
			}
			if(fl > bt)
			{
				System::String ^mess = gcnew String("ОШИБКА: Размер входного сообщения превышает допустимый на ");
				mess = mess->Concat(mess,Convert::ToString(fl - bt),"байт ( ",Convert::ToString((fl - bt) / 1024),"+ килобайт).");
				//mess =  mess->Concat(mess,);
				//mess = mess->Concat(mess,);
				//mess = mess->Concat(mess,);

				MessageBox::Show(mess); 
				return ;}
			if((f[2] = fopen(n[2], "wb")) == NULL){
				return ;}
			
			rewind(f[0]);
			rewind(f[1]);
			fread(h, 54, 1, f[0]);
			fwrite(h, 54, 1, f[2]);
			
			while(!feof(f[1]))
			{
				dbf = fgetc(f[1]);
				if(dbf == EOF) break;
				
				for(int i = 0; i < 8; i++)
				{
					bbf = fgetc(f[0]);
					bbf &= 0xFE;
					bbf |= (int)((dbf >> i) & 1);
					fputc(bbf, f[2]);		
				}
			}
			
			while(ct < 4)
			{
				switch(ct)
				{
					case 0: o = '*'; break;
					case 1: o = '^'; break;
					case 2: o = '&'; break;
					case 3: o = '%'; break;
				}
				
				for(int i = 0; i < 8; i++)
				{
					bbf = fgetc(f[0]);
					bbf &= 0xFE;
					bbf |= (int)((o >> i) & 1);
					fputc(bbf, f[2]);
				}
				
				ct++;
			}
			
			while(!feof(f[0]))
			{
				bbf = fgetc(f[0]);
				if(bbf == EOF) break;
				fputc(bbf, f[2]);
			}
						
			MessageBox::Show("Сообщение закодировано!");
			break;
	}
	
	for(int i = 0; i < t; i++) fclose(f[i]);
	

}
};
}

