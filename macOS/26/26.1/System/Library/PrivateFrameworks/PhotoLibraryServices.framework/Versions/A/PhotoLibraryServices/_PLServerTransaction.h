@class NSCountedSet, NSObject;
@protocol OS_dispatch_queue;

@interface _PLServerTransaction : _PLClientTransaction {
    NSCountedSet *_enqueuedChangeScopes;
    NSObject<OS_dispatch_queue> *_changeScopeQueue;
}

- (void)completeTransaction;
- (id)generateChangeScopesDescription;
- (void)popChangeScopesBatch;
- (BOOL)isClientTransaction;
- (void)completeTransactionScope:(id)a0;
- (void)addChangeScopes:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (void)_enqueueChangeScopes:(id)a0;
- (id)changeScopes;
- (void)pushChangeScopesBatch;
- (void)abortTransaction;
- (id)initWithPathManager:(id)a0 identifier:(const char *)a1;

@end
