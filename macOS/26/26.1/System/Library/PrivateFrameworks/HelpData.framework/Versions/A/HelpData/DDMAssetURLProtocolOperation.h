@interface DDMAssetURLProtocolOperation : NSOperation

@property (nonatomic) BOOL executing;
@property (nonatomic) BOOL finished;
@property (copy) id /* block */ resumeBlock;

- (BOOL)isExecuting;
- (void)start;
- (BOOL)isFinished;
- (void)main;
- (BOOL)isAsynchronous;
- (void).cxx_destruct;
- (void)finishOperation;
- (id)initWithProtocolResumeBlock:(id /* block */)a0;

@end
