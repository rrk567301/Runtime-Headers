@interface _IMTimingInstance : NSObject {
    double _startTiming;
    double _stopTiming;
}

@property (nonatomic) double totalTime;
@property (nonatomic) BOOL isRunning;

+ (id)createTimingInstanceWithStartTime:(float)a0;

- (id)description;
- (id)init;
- (void)stopUsingTime:(double)a0;
- (void)startUsingTime:(double)a0;

@end
