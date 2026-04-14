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
- (id)initWithPathManager:(id)a0 identifier:(const char *)a1;
- (void)addChangeScopes:(id)a0;
- (void)pushChangeScopesBatch;
- (void)popChangeScopesBatch;
- (BOOL)isClientTransaction;
- (id)changeScopes;
- (void)abortTransaction;
- (id)generateChangeScopesDescription;
- (void)_enqueueChangeScopes:(id)a0;

@end
