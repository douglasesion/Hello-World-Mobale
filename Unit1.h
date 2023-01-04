//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.Layouts.hpp>
#include <FMX.StdCtrls.hpp>
#include <FMX.Types.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TLabel *Label1;
	TGridPanelLayout *Z;
	TImageControl *ImageControl1;
	TImageControl *ImageControl2;
	TImageControl *ImageControl3;
	TImageControl *ImageControl4;
	void __fastcall ImageControl1Change(TObject *Sender);
	void __fastcall ImageControl2Change(TObject *Sender);
	void __fastcall ImageControl3Change(TObject *Sender);
	void __fastcall ImageControl4Change(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
