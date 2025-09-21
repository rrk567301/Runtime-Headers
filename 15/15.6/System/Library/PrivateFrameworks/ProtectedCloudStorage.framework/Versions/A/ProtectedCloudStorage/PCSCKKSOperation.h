@class NSError, NSMutableArray;

@interface PCSCKKSOperation : NSOperation

@property (retain) NSMutableArray *successDependencies;
@property (getter=isExecuting) char executing;
@property (getter=isFinished) char finished;
@property (getter=isCancelled) char cancelled;
@property (retain) NSError *error;

+ (id)operation:(id)a0 block:(id /* block */)a1;

- (void).cxx_destruct;
- (char)startOperation;
- (void)addSuccessDependency:(id)a0;
- (char)checkDependencies;
- (void)completeOperation;

@end
