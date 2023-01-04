//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit2.h"
#include "Unit3.h"
#include "Unit4.h"
#include "Unit5.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
#pragma resource ("*.iPhone4in.fmx", _PLAT_IOS)
#pragma resource ("*.NmXhdpiPh.fmx", _PLAT_ANDROID)
#pragma resource ("*.iPad.fmx", _PLAT_IOS)
#pragma resource ("*.XLgXhdpiTb.fmx", _PLAT_ANDROID)
#pragma resource ("*.Surface.fmx", _PLAT_MSWINDOWS)
#pragma resource ("*.iPhone55in.fmx", _PLAT_IOS)

TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::ImageControl1Change(TObject *Sender)
{
Form2 -> Show();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::ImageControl2Change(TObject *Sender)
{
  Form3 -> Show();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::ImageControl3Change(TObject *Sender)
{
    Form4 -> Show();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::ImageControl4Change(TObject *Sender)
{
    Form5 -> Show();
}
//---------------------------------------------------------------------------
