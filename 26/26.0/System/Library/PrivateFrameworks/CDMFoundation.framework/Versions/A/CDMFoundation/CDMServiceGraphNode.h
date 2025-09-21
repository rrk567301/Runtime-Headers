@class NSString, NSHashTable;

@interface CDMServiceGraphNode : NSBlockOperation {
    id /* block */ _cancellationBlock;
    NSString *_nodeName;
    NSString *_handlerId;
    NSHashTable *_successors;
}

@property BOOL nodeIsUsingAsync;
@property BOOL nodeIsExecutingAsync;
@property BOOL asyncIsFinished;

+ (id)initWithName:(id)a0 forHandler:(id)a1 usingFunction:(id /* block */)a2 withError:(id /* block */)a3 cancellationBlock:(id /* block */)a4 dataDispatcherContext:(id)a5;
+ (id)initWithName:(id)a0 forHandler:(id)a1 usingFunction:(id /* block */)a2 withError:(id /* block */)a3 cancellationBlock:(id /* block */)a4 requestId:(id)a5 dataDispatcherContext:(id)a6 serviceMetricsArray:(id)a7;
+ (id)initWithName:(id)a0 forHandler:(id)a1 withError:(id /* block */)a2 usingFunction:(id /* block */)a3 dataDispatcherContext:(id)a4;
+ (id)initWithName:(id)a0 forHandler:(id)a1 withError:(id /* block */)a2 usingFunction:(id /* block */)a3 requestId:(id)a4 dataDispatcherContext:(id)a5 serviceMetricsArray:(id)a6;

- (BOOL)isAsynchronous;
- (BOOL)isFinished;
- (BOOL)isExecuting;
- (void)cancel;
- (void).cxx_destruct;
- (void)addDependency:(id)a0;
- (void)removeDependency:(id)a0;
- (void)addSuccessor:(id)a0;
- (void)asyncMarkNodeAsFinished;
- (id)getHandlerId;
- (id)getNodeName;
- (id)getSuccessors;
- (void)removeSuccessor:(id)a0;
- (void)willUseAsyncMarkNodeAsFinished;

@end
