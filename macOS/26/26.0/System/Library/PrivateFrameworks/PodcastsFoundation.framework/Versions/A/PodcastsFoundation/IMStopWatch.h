@class NSString;

@interface IMStopWatch : NSObject {
    unsigned long long _startTime;
    NSString *_descriptionString;
}

+ (void)initialize;
+ (id)stopwatch;
+ (id)stopwatchWithDescription:(id)a0;

- (void)report;
- (void)reset;
- (void)start;
- (double)time;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (void)setDescription:(id)a0;
- (void)reportWithMarker:(id)a0;

@end
