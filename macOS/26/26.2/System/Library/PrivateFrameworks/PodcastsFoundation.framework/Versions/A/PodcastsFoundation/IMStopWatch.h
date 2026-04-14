@class NSString;

@interface IMStopWatch : NSObject {
    unsigned long long _startTime;
    NSString *_descriptionString;
}

+ (void)initialize;
+ (id)stopwatch;
+ (id)stopwatchWithDescription:(id)a0;

- (void)reset;
- (double)time;
- (void).cxx_destruct;
- (void)start;
- (id)description;
- (void)report;
- (id)init;
- (void)setDescription:(id)a0;
- (void)reportWithMarker:(id)a0;

@end
