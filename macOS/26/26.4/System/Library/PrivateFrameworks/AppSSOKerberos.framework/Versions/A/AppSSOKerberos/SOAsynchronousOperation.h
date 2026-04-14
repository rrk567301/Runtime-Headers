@interface SOAsynchronousOperation : NSOperation

@property (nonatomic) unsigned long long state;

- (BOOL)isAsynchronous;
- (void)finish;
- (BOOL)isReady;
- (BOOL)isFinished;
- (void)main;
- (BOOL)isExecuting;
- (id)init;
- (void)start;

@end
