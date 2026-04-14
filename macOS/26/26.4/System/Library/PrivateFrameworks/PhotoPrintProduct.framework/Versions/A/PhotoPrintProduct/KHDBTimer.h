@class NSMutableDictionary;

@interface KHDBTimer : NSObject {
    unsigned long long _start;
    unsigned long long _stop;
    void /* function */ *_timeFN;
    NSMutableDictionary *_measurements;
}

+ (id)timer;
+ (id)cpuTimer;

- (void)stop;
- (BOOL)isRunning;
- (void)reset;
- (id)init;
- (void)start;
- (void)dealloc;
- (double)seconds;
- (double)microseconds;
- (double)milliseconds;
- (unsigned long long)nanoseconds;
- (id)initForCPUTime:(BOOL)a0;
- (unsigned long long)absoluteTicks;
- (double)absoluteTicksPerNanosecond;

@end
