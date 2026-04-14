@class NSString, NSSet, NSObject;
@protocol OS_dispatch_semaphore;

@interface _PLClientTransaction : PLClientServerTransaction {
    NSSet *_changeScopes;
    long long _addChangeScopesBatch;
    NSSet *_batchScopes;
}

@property (nonatomic) int fileDescriptor;
@property (retain, nonatomic) id processAssertion;
@property (retain, nonatomic) NSString *path;
@property (weak, nonatomic) NSObject<OS_dispatch_semaphore> *fdResourceSemaphore;
@property (copy) NSString *changeScopesDescriptionSnapshot;

+ (id)_fdResourceSemaphore;
+ (id)_fdIsolationQueue;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (void)completeTransaction;
- (void)completeTransactionScope:(id)a0;
- (id)initWithPathManager:(id)a0;
- (void)popChangeScopesBatch;
- (void)pushChangeScopesBatch;
- (void)abortTransaction;
- (id)changeScopes;
- (void)_updateChangeScopesDescriptionSnapshot;
- (void)persistTransactionScopes:(id)a0;
- (void)addChangeScopes:(id)a0;
- (BOOL)isClientTransaction;
- (id)generateChangeScopesDescription;

@end
