@interface SOAsynchronousOperation : NSOperation

@property (nonatomic) unsigned long long state;

- (BOOL)isAsynchronous;
- (BOOL)isFinished;
- (void)main;
- (BOOL)isExecuting;
- (void)start;
- (BOOL)isReady;
- (void)finish;
- (id)init;

@end
