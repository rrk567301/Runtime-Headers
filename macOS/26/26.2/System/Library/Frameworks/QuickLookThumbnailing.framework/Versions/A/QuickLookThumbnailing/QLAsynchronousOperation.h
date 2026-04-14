@interface QLAsynchronousOperation : NSOperation

@property (nonatomic, getter=isExecuting) BOOL executing;
@property (nonatomic, getter=isFinished) BOOL finished;

- (BOOL)isConcurrent;
- (void)finish;
- (void)start;

@end
