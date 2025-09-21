@interface SMStopwatch : NSObject

@property (nonatomic) double startTime;
@property (nonatomic) char isRunning;

- (void)start;
- (double)stop;
- (double)elapsedTime;

@end
