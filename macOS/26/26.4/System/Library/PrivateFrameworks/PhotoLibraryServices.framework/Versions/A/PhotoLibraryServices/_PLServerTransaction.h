@class NSCountedSet, NSObject;
@protocol OS_dispatch_queue;

@interface _PLServerTransaction : _PLClientTransaction {
    NSCountedSet *_enqueuedChangeScopes;
    NSObject<OS_dispatch_queue> *_changeScopeQueue;
}

- (void)completeTransactionScope:(id)a0;
- (void)_enqueueChangeScopes:(id)a0;
- (id)changeScopes;
- (BOOL)isClientTransaction;
- (void)pushChangeScopesBatch;
- (void)abortTransaction;
- (void)popChangeScopesBatch;
- (id)generateChangeScopesDescription;
- (id)initWithPathManager:(id)a0 identifier:(const char *)a1;
- (void).cxx_destruct;
- (void)addChangeScopes:(id)a0;
- (void)completeTransaction;
- (void)dealloc;

@end
