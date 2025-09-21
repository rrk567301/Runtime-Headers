@interface SOAsynchronousOperation : NSOperation

@property (nonatomic) unsigned long long state;

- (id)init;
- (void)finish;
- (void)start;
- (char)isReady;
- (char)isAsynchronous;
- (char)isExecuting;
- (char)isFinished;
- (void)main;

@end
