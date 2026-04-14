@class NSCountedSet, NSObject;
@protocol OS_dispatch_queue;

@interface _PLServerTransaction : _PLClientTransaction {
    NSCountedSet *_enqueuedChangeScopes;
    NSObject<OS_dispatch_queue> *_changeScopeQueue;
}

- (void)completeTransaction;
- (void)popChangeScopesBatch;
- (BOOL)isClientTransaction;
- (void)pushChangeScopesBatch;
- (id)changeScopes;
- (void)_enqueueChangeScopes:(id)a0;
- (void)abortTransaction;
- (void)addChangeScopes:(id)a0;
- (void).cxx_destruct;
- (id)generateChangeScopesDescription;
- (void)completeTransactionScope:(id)a0;
- (void)dealloc;
- (id)initWithPathManager:(id)a0 identifier:(const char *)a1;

@end
