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
- (id)initWithPathManager:(id)a0;
- (void)addChangeScopes:(id)a0;
- (BOOL)isClientTransaction;
- (void).cxx_destruct;
- (void)abortTransaction;
- (void)_updateChangeScopesDescriptionSnapshot;
- (id)description;
- (void)completeTransaction;
- (void)persistTransactionScopes:(id)a0;
- (id)initWithPathManager:(id)a0 identifier:(const char *)a1;
- (id)changeScopes;
- (void)pushChangeScopesBatch;
- (void)completeTransactionScope:(id)a0;
- (id)generateChangeScopesDescription;
- (void)dealloc;

@end
