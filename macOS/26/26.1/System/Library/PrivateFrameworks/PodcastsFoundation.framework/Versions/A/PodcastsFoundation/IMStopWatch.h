@class NSString;

@interface IMStopWatch : NSObject {
    unsigned long long _startTime;
    NSString *_descriptionString;
}

+ (void)initialize;
+ (id)stopwatch;
+ (id)stopwatchWithDescription:(id)a0;

- (void)start;
- (double)time;
- (id)description;
- (void)report;
- (void)reset;
- (void).cxx_destruct;
- (id)init;
- (void)setDescription:(id)a0;
- (void)reportWithMarker:(id)a0;

@end
