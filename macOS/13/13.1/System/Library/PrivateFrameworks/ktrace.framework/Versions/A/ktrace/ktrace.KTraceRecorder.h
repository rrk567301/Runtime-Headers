@interface ktrace.KTraceRecorder : NSObject

+ (BOOL)ktraceRecord:(struct ktrace_recording { char *x0; char *x1; char *x2; struct __sFILE *x3; struct __sFILE *x4; id /* block */ x5; unsigned int x6; } *)a0 args:(id)a1 error:(id *)a2;
+ (BOOL)listPlansToFile:(struct __sFILE { char *x0; int x1; int x2; short x3; short x4; struct __sbuf { char *x0; int x1; } x5; int x6; void *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; struct __sbuf { char *x0; int x1; } x12; struct __sFILEX *x13; int x14; unsigned char x15[3]; unsigned char x16[1]; struct __sbuf { char *x0; int x1; } x17; int x18; long long x19; } *)a0 flags:(unsigned int)a1 error:(id *)a2;

- (id)init;

@end
