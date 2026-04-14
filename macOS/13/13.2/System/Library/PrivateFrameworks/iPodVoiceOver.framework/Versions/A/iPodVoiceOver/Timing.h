@interface Timing : NSObject

+ (void)startTiming:(struct { double x0; double x1; unsigned int x2; } *)a0;
+ (void)finishTiming:(struct { double x0; double x1; unsigned int x2; } *)a0;
+ (void)logTiming;

@end
