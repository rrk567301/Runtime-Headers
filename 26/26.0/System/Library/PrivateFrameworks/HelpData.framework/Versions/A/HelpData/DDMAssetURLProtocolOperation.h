@interface DDMAssetURLProtocolOperation : NSOperation

@property (nonatomic) BOOL executing;
@property (nonatomic) BOOL finished;
@property (copy) id /* block */ resumeBlock;

- (BOOL)isAsynchronous;
- (BOOL)isFinished;
- (void)main;
- (BOOL)isExecuting;
- (void)start;
- (void).cxx_destruct;
- (void)finishOperation;
- (id)initWithProtocolResumeBlock:(id /* block */)a0;

@end
