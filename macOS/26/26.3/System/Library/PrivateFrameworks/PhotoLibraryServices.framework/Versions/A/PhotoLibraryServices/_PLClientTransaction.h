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

+ (id)_fdIsolationQueue;
+ (id)_fdResourceSemaphore;

- (void)completeTransaction;
- (void)popChangeScopesBatch;
- (id)initWithPathManager:(id)a0;
- (BOOL)isClientTransaction;
- (void)pushChangeScopesBatch;
- (id)changeScopes;
- (void)_updateChangeScopesDescriptionSnapshot;
- (void)abortTransaction;
- (id)description;
- (void)addChangeScopes:(id)a0;
- (void).cxx_destruct;
- (id)generateChangeScopesDescription;
- (void)completeTransactionScope:(id)a0;
- (void)persistTransactionScopes:(id)a0;
- (void)dealloc;
- (id)initWithPathManager:(id)a0 identifier:(const char *)a1;

@end
