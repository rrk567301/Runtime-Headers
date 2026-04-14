@class NSCountedSet, NSObject;
@protocol OS_dispatch_queue;

@interface _PLServerTransaction : _PLClientTransaction {
    NSCountedSet *_enqueuedChangeScopes;
    NSObject<OS_dispatch_queue> *_changeScopeQueue;
}

- (void)popChangeScopesBatch;
- (void)addChangeScopes:(id)a0;
- (BOOL)isClientTransaction;
- (void).cxx_destruct;
- (void)abortTransaction;
- (void)completeTransaction;
- (id)initWithPathManager:(id)a0 identifier:(const char *)a1;
- (id)changeScopes;
- (void)pushChangeScopesBatch;
- (void)completeTransactionScope:(id)a0;
- (id)generateChangeScopesDescription;
- (void)dealloc;
- (void)_enqueueChangeScopes:(id)a0;

@end
