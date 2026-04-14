@class NSMutableDictionary;

@interface KHDBTimer : NSObject {
    unsigned long long _start;
    unsigned long long _stop;
    void /* function */ *_timeFN;
    NSMutableDictionary *_measurements;
}

+ (id)timer;
+ (id)cpuTimer;

- (BOOL)isRunning;
- (void)stop;
- (void)reset;
- (void)start;
- (id)init;
- (void)dealloc;
- (double)seconds;
- (double)microseconds;
- (double)milliseconds;
- (unsigned long long)nanoseconds;
- (id)initForCPUTime:(BOOL)a0;
- (unsigned long long)absoluteTicks;
- (double)absoluteTicksPerNanosecond;

@end
