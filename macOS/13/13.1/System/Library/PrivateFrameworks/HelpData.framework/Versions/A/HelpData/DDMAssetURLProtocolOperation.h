@interface DDMAssetURLProtocolOperation : NSOperation

@property (nonatomic) BOOL executing;
@property (nonatomic) BOOL finished;
@property (copy) id /* block */ resumeBlock;

- (void).cxx_destruct;
- (void)start;
- (void)main;
- (BOOL)isAsynchronous;
- (BOOL)isExecuting;
- (BOOL)isFinished;
- (id)initWithProtocolResumeBlock:(id /* block */)a0;
- (void)finishOperation;

@end
