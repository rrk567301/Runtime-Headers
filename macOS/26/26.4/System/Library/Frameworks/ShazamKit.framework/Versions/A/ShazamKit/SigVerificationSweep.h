@interface SigVerificationSweep : NSObject

+ (BOOL)FillUnknownError:(id *)a0;
+ (BOOL)ConvertException:(const struct exception { void /* function */ **x0; } *)a0 toError:(id *)a1;
+ (BOOL)ConvertSystemError:(const struct system_error { void /* function */ **x0; struct __libcpp_refstring { char *x0; } x1; struct error_code { int x0; struct error_category *x1; } x2; } *)a0 toError:(id *)a1;
+ (id)sweepDatabaseSignature:(id)a0 QuerySignature:(id)a1 sweepLength:(double)a2 initialOffset:(double)a3 timeSkew:(float)a4 frequencySkew:(float)a5 thresholdMultiplier:(float)a6 boundingBox:(unsigned char)a7 error:(id *)a8;

@end
