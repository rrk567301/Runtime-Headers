@interface SMStopwatch : NSObject

@property (nonatomic) double startTime;
@property (nonatomic) BOOL isRunning;

- (double)elapsedTime;
- (void)start;
- (double)stop;

@end
