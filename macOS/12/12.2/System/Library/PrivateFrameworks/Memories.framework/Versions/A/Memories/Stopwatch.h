@interface Stopwatch : NSObject

+ (void)start;
+ (void)stop;
+ (double)elapsedTime;
+ (void)stopWithMessage:(id)a0 precision:(int)a1;
+ (void)stopWithMessage:(id)a0 precision:(int)a1 elapsedtimeBiggerThan:(double)a2;

@end
