@interface SHSigUtilities : NSObject

+ (long long)signatureFileTypeForData:(id)a0 error:(id *)a1;
+ (double)signatureDurationForData:(id)a0 error:(id *)a1;
+ (BOOL)convertException:(const struct exception { void /* function */ **x0; } *)a0 toError:(id *)a1 code:(int)a2;
+ (id)signatureInfoForData:(id)a0 error:(id *)a1;

@end
