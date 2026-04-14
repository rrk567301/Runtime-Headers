@class NSString;

@interface IMStopWatch : NSObject {
    unsigned long long _startTime;
    NSString *_descriptionString;
}

+ (void)initialize;
+ (id)stopwatch;
+ (id)stopwatchWithDescription:(id)a0;

- (double)time;
- (void)report;
- (void).cxx_destruct;
- (void)reset;
- (id)init;
- (void)start;
- (id)description;
- (void)setDescription:(id)a0;
- (void)reportWithMarker:(id)a0;

@end
