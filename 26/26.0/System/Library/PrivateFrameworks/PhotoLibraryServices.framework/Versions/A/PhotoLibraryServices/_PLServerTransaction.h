@class NSCountedSet, NSObject;
@protocol OS_dispatch_queue;

@interface _PLServerTransaction : _PLClientTransaction {
    NSCountedSet *_enqueuedChangeScopes;
    NSObject<OS_dispatch_queue> *_changeScopeQueue;
}

- (void)popChangeScopesBatch;
- (id)initWithPathManager:(id)a0 identifier:(const char *)a1;
- (void)dealloc;
- (id)changeScopes;
- (void)_enqueueChangeScopes:(id)a0;
- (void)addChangeScopes:(id)a0;
- (void)completeTransactionScope:(id)a0;
- (void)abortTransaction;
- (void)completeTransaction;
- (BOOL)isClientTransaction;
- (void)pushChangeScopesBatch;
- (id)generateChangeScopesDescription;
- (void).cxx_destruct;

@end
