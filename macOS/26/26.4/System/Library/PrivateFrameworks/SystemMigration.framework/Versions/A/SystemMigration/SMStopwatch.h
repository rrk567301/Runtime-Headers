@interface SMStopwatch : NSObject

@property (nonatomic) double startTime;
@property (nonatomic) BOOL isRunning;

- (double)stop;
- (double)elapsedTime;
- (void)start;

@end
