@class NSMutableArray;
@protocol ABStopWatchTimeIntervalProvider;

@interface ABStopWatch : NSObject {
    id<ABStopWatchTimeIntervalProvider> _provider;
    double _start;
    double _end;
    NSMutableArray *_laps;
}

+ (id)stopWatch;

- (void)stop;
- (id)initWithProvider:(id)a0;
- (double)interval;
- (void).cxx_destruct;
- (BOOL)isStopped;
- (id)init;
- (void)start;
- (void)lap;
- (double)timestampOfLap:(unsigned long long)a0;
- (double)intervalFromLap:(unsigned long long)a0;
- (double)intervalFromLap:(unsigned long long)a0 toLap:(unsigned long long)a1;
- (double)intervalToLap:(unsigned long long)a0;
- (unsigned long long)numberOfLaps;

@end
