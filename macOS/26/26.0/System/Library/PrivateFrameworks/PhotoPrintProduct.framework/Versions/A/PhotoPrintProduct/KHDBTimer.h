@class NSMutableDictionary;

@interface KHDBTimer : NSObject {
    unsigned long long _start;
    unsigned long long _stop;
    void /* function */ *_timeFN;
    NSMutableDictionary *_measurements;
}

+ (id)timer;
+ (id)cpuTimer;

- (void)reset;
- (void)start;
- (void)dealloc;
- (void)stop;
- (id)init;
- (BOOL)isRunning;
- (double)seconds;
- (double)microseconds;
- (double)milliseconds;
- (unsigned long long)nanoseconds;
- (id)initForCPUTime:(BOOL)a0;
- (unsigned long long)absoluteTicks;
- (double)absoluteTicksPerNanosecond;

@end
