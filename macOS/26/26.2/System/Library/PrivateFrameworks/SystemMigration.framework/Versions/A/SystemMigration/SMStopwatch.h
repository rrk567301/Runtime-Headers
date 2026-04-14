@interface SMStopwatch : NSObject

@property (nonatomic) double startTime;
@property (nonatomic) BOOL isRunning;

- (double)elapsedTime;
- (double)stop;
- (void)start;

@end
