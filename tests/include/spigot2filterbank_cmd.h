#ifndef __spigot2filterbank_cmd__
#define __spigot2filterbank_cmd__
/*****
  command line parser interface -- generated by clig 
  (http://wsd.iitb.fhg.de/~geg/clighome/)

  The command line parser `clig':
  (C) 1995-2004 Harald Kirsch (clig@geggus.net)
*****/

typedef struct s_Cmdline {
  /***** -o: Output file name (optional; for a single output file) */
  char outfileP;
  char* outfile;
  int outfileC;
  /***** -nohdr: Output just raw data.  No headers are output */
  char nohdrP;
  /***** -stdout: Send the data to STDOUT instead of files */
  char stdoutP;
  /***** -floats: Output data as 32-bit floats instead of 8-bit unsigned chars */
  char floatsP;
  /***** -zerolags: Dump the raw spigot zerolags in 32-bit floats format to a file */
  char zerolagsP;
  /***** -skip: Number of spectra to skip from the initial value */
  char skipP;
  int skip;
  int skipC;
  /***** -numout: Number of spectra to output (default is all) */
  char numoutP;
  int numout;
  int numoutC;
  /***** -downsamp: Number of spectra to average on output */
  char downsampP;
  int downsamp;
  int downsampC;
  /***** -lokill: Number of  low-freq channels to ignore */
  char lokillP;
  int lokill;
  int lokillC;
  /***** -hikill: Number of high-freq channels to ignore */
  char hikillP;
  int hikill;
  int hikillC;
  /***** uninterpreted command line parameters */
  int argc;
  /*@null*/char **argv;
  /***** the whole command line concatenated */
  char *full_cmd_line;
} Cmdline;


extern char *Program;
extern void usage(void);
extern /*@shared*/Cmdline *parseCmdline(int argc, char **argv);

extern void showOptionValues(void);

#endif

