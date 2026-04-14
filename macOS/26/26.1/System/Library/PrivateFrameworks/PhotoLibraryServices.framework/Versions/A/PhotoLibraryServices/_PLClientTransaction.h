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
- (id)generateChangeScopesDescription;
- (void)popChangeScopesBatch;
- (id)initWithPathManager:(id)a0;
- (void)_updateChangeScopesDescriptionSnapshot;
- (BOOL)isClientTransaction;
- (void)completeTransactionScope:(id)a0;
- (id)description;
- (void)addChangeScopes:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (id)changeScopes;
- (void)pushChangeScopesBatch;
- (void)abortTransaction;
- (id)initWithPathManager:(id)a0 identifier:(const char *)a1;
- (void)persistTransactionScopes:(id)a0;

@end
