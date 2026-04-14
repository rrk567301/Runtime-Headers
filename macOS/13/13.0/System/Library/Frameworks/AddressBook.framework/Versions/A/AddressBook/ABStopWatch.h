@class NSMutableArray;
@protocol ABStopWatchTimeIntervalProvider;

@interface ABStopWatch : NSObject {
    id<ABStopWatchTimeIntervalProvider> _provider;
    double _start;
    double _end;
    NSMutableArray *_laps;
}

+ (id)stopWatch;

- (id)init;
- (id)initWithProvider:(id)a0;
- (void).cxx_destruct;
- (void)start;
- (BOOL)isStopped;
- (double)interval;
- (void)stop;
- (void)lap;
- (unsigned long long)numberOfLaps;
- (double)intervalToLap:(unsigned long long)a0;
- (double)intervalFromLap:(unsigned long long)a0 toLap:(unsigned long long)a1;
- (double)intervalFromLap:(unsigned long long)a0;
- (double)timestampOfLap:(unsigned long long)a0;

@end
