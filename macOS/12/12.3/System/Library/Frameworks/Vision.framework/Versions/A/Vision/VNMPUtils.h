@interface VNMPUtils : NSObject

+ (double)getHostTime;
+ (id)createErrorWithCode:(long long)a0 andMessage:(id)a1;
+ (unsigned long long)getHostTimeInNanos;
+ (void)freeVImageBuffer:(struct vImage_Buffer { void *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; } *)a0;
+ (long long)parseExifTimestamp:(id)a0;

@end
