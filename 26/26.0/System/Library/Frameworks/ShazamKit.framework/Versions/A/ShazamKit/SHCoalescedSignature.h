@interface SHCoalescedSignature : NSObject

+ (id)coalesePeakFeatures:(id)a0 musicalFeatures:(id)a1 error:(id *)a2;
+ (BOOL)convertException:(const struct exception { void /* function */ **x0; } *)a0 toError:(id *)a1 code:(int)a2;
+ (BOOL)separate:(id)a0 intoPeakFeatures:(id *)a1 andMusicalFeatures:(id *)a2 error:(id *)a3;

@end
