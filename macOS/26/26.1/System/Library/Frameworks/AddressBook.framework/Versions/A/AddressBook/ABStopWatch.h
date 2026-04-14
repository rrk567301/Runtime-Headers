@class NSMutableArray;
@protocol ABStopWatchTimeIntervalProvider;

@interface ABStopWatch : NSObject {
    id<ABStopWatchTimeIntervalProvider> _provider;
    double _start;
    double _end;
    NSMutableArray *_laps;
}

+ (id)stopWatch;

- (void)start;
- (double)interval;
- (id)initWithProvider:(id)a0;
- (BOOL)isStopped;
- (void)stop;
- (void).cxx_destruct;
- (id)init;
- (void)lap;
- (double)timestampOfLap:(unsigned long long)a0;
- (double)intervalFromLap:(unsigned long long)a0;
- (double)intervalFromLap:(unsigned long long)a0 toLap:(unsigned long long)a1;
- (double)intervalToLap:(unsigned long long)a0;
- (unsigned long long)numberOfLaps;

@end
