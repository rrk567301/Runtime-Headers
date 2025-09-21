@class NSString, NSSet, NSObject;
@protocol OS_dispatch_semaphore;

@interface _PLClientTransaction : PLClientServerTransaction {
    id _processAssertion;
    NSSet *_changeScopes;
    long long _addChangeScopesBatch;
    NSSet *_batchScopes;
}

@property (nonatomic) int fileDescriptor;
@property (retain, nonatomic) NSString *path;
@property (weak, nonatomic) NSObject<OS_dispatch_semaphore> *fdResourceSemaphore;
@property (copy) NSString *changeScopesDescriptionSnapshot;

+ (id)_fdResourceSemaphore;
+ (id)_fdIsolationQueue;

- (void)popChangeScopesBatch;
- (id)initWithPathManager:(id)a0 identifier:(const char *)a1;
- (id)initWithPathManager:(id)a0;
- (void)dealloc;
- (id)changeScopes;
- (void)addChangeScopes:(id)a0;
- (void)completeTransactionScope:(id)a0;
- (void)abortTransaction;
- (id)description;
- (void)completeTransaction;
- (BOOL)isClientTransaction;
- (void)persistTransactionScopes:(id)a0;
- (void)_updateChangeScopesDescriptionSnapshot;
- (void)pushChangeScopesBatch;
- (id)generateChangeScopesDescription;
- (void).cxx_destruct;

@end
