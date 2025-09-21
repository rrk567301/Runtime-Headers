@class NSObject;
@protocol OS_dispatch_group, OS_voucher;

@interface _GCAsyncFuture : GCFuture {
    NSObject<OS_dispatch_group> *_condGroup;
    NSObject<OS_voucher> *_creationVoucher;
    struct ContinuationList { struct ObserverList { struct Continuation *stqh_first; struct Continuation **stqh_last; } _continuations; } _continuations;
    unsigned long long _creatorFrame;
}

- (id)debugDescription;
- (void).cxx_destruct;
- (id).cxx_construct;
- (char)_checkFinished:(char)a0;
- (unsigned long long)_creatorFrame;
- (void)_observeFinishOnQueue:(id)a0 withOptions:(unsigned int)a1 qosClass:(unsigned int)a2 relativePriority:(int)a3 block:(id /* block */)a4;
- (char)_setState:(long long)a0 result:(id)a1 error:(id)a2;

@end
