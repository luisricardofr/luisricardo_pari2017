/*File generated automatically in luis-K55VJ by luis on Qua Dez  6 12:08:42 WET 2017*/
#ifdef __cplusplus
extern "C" {
#endif
/* callbacks.c */
gboolean on_drawingarea1_expose_event (GtkWidget * widget, GdkEvent * event, gpointer user_data);
gboolean pari_UpdateImageAreas (gpointer data);
/* hello.c */
int main (int argc, char *argv[]);
/* myf.c */
complexo AddComplex (complexo z1, complexo z2);
int AddN (int a, int b);
int ChangeBaudRate (int fd, int new_baud);
void ChildALARMhandler (int signo);
int ChildMain (void);
int ChildMain2 (int ppid);
int ChildMain3 (void);
void ChildUSR1handler (int signo);
void ChildUSR2handler (int signo);
void Chronograph (int dura);
void CompareDelays (long myusecs);
vStat *CountLetters (char *str);
char *CreateRandomVowelString (int size);
int DivN (int a, int b);
char *GenerateRandomString (int length);
void GetCharsAndPrintAlphas (void);
int GetSharedMem ();
void InterceptCTRL_C (int a);
void InterleaveStrings (char *str1, char *str2);
void MessageFromChild (char *str);
void MessageFromParent (char *str);
complexo MulComplex (complexo z1, complexo z2);
int MulN (int a, int b);
void MyInits ();
int OpenPort (char *port_name, char *text);
void ParentALARMhandler (int signo);
int ParentMain (void);
int ParentMain2 (int pid_child);
int ParentMain3 (void);
void ParentUSR1handler (int signo);
void ParentUSR2handler (int signo);
int PerformOperation (int (*oper) (int, int), int a, int b);
void PrintColorVowels (char *str);
void PrintColorVowels2 (char *str);
void PrintComplex (complexo z);
void PrintLetterStatus (vStat * vs);
void PrintTempo (tempo * t);
void PrintTimeSince1970 ();
void ReadAllUpToX (void);
int ReadPortUntilChar (int fd);
void ReverseString (char *str);
void ReverseString2 (char *str);
tempo *SegundosParaTempo (int segs);
tempo SegundosParaTempo_ (int segs);
int SubN (int a, int b);
void SwapValues (int *a, int *b);
void SwapValues_ (int a, int b);
int TempoParaSegundos (tempo * t);
void TestAmillionSins ();
void goodbye (int xxx);
int isprime (int n);
int isvowel (char ch);
GdkPixbuf *pari_ConvertOpenCv2Gtk (IplImage * image, int dst_w, int dst_h);
void pari_PerformImageAcquisition (CvCapture * capt);
void pari_ProcessUserOperations (IplImage * src, IplImage * dst);
void pari_RefreshDrawingArea (char *widgetName, IplImage * img);
CvCapture *pari_StartImageAcquisition ();
void pari_delete_event (GtkWidget * window, GdkEvent * event, gpointer data);
long tictoc (int mode);
void vive (int xxx);
void vive2 (int xxx);
void vive3 (int xxx);
/* pcolor.c */
void HighLightText (void);
void PrintRedLine (void);
void ResetTextColors (void);
void textcolor (int attr, int fg, int bg);
#ifdef __cplusplus
}
#endif
