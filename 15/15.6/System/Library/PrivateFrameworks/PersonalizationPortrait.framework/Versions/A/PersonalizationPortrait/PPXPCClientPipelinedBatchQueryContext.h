@class NSObject;
@protocol OS_dispatch_queue;

@interface PPXPCClientPipelinedBatchQueryContext : NSObject {
    char _stop;
    id /* block */ _finalizeCall;
    struct atomic_flag { _Atomic BOOL _Value; } _calledFinalizeBlock;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (copy, nonatomic) id /* block */ handleBatch;

- (id)description;
- (void).cxx_destruct;
- (void)finalizeCallWithSuccess:(char)a0 error:(id)a1;
- (void)setFinalizeCall:(id /* block */)a0;

@end
