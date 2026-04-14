@interface SOAsynchronousOperation : NSOperation

@property (nonatomic) unsigned long long state;

- (id)init;
- (void)finish;
- (void)start;
- (void)main;
- (BOOL)isReady;
- (BOOL)isAsynchronous;
- (BOOL)isExecuting;
- (BOOL)isFinished;

@end
