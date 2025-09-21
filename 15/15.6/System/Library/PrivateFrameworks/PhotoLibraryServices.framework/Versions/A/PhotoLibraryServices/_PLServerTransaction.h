@class NSCountedSet, NSObject;
@protocol OS_dispatch_queue;

@interface _PLServerTransaction : _PLClientTransaction {
    NSCountedSet *_enqueuedChangeScopes;
    NSObject<OS_dispatch_queue> *_changeScopeQueue;
}

- (void)dealloc;
- (void).cxx_destruct;
- (void)completeTransaction;
- (void)completeTransactionScope:(id)a0;
- (id)generateChangeScopesDescription;
- (id)initWithPathManager:(id)a0 identifier:(const char *)a1;
- (void)_enqueueChangeScopes:(id)a0;
- (void)abortTransaction;
- (void)addChangeScopes:(id)a0;
- (id)changeScopes;
- (char)isClientTransaction;
- (void)popChangeScopesBatch;
- (void)pushChangeScopesBatch;

@end
