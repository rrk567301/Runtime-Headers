@class NSMutableDictionary;

@interface KHDBTimer : NSObject {
    unsigned long long _start;
    unsigned long long _stop;
    void /* function */ *_timeFN;
    NSMutableDictionary *_measurements;
}

+ (id)timer;
+ (id)cpuTimer;

- (void)dealloc;
- (id)init;
- (void)start;
- (void)reset;
- (double)seconds;
- (double)milliseconds;
- (double)microseconds;
- (unsigned long long)nanoseconds;
- (void)stop;
- (BOOL)isRunning;
- (id)initForCPUTime:(BOOL)a0;
- (unsigned long long)absoluteTicks;
- (double)absoluteTicksPerNanosecond;

@end
