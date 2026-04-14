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

- (id)initWithPathManager:(id)a0;
- (void)completeTransactionScope:(id)a0;
- (id)changeScopes;
- (BOOL)isClientTransaction;
- (void)pushChangeScopesBatch;
- (void)_updateChangeScopesDescriptionSnapshot;
- (void)abortTransaction;
- (void)popChangeScopesBatch;
- (id)generateChangeScopesDescription;
- (id)initWithPathManager:(id)a0 identifier:(const char *)a1;
- (void).cxx_destruct;
- (void)persistTransactionScopes:(id)a0;
- (void)addChangeScopes:(id)a0;
- (void)completeTransaction;
- (id)description;
- (void)dealloc;

@end
