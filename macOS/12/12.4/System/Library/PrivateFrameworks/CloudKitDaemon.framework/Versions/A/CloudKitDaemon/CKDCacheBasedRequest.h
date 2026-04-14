@class CKDKeyValueDiskCache, CKDPublicIdentityLookupService, CKDOperation;

@interface CKDCacheBasedRequest : NSObject

@property (nonatomic) BOOL isCancelled;
@property (weak, nonatomic) CKDOperation *operation;
@property (weak, nonatomic) CKDKeyValueDiskCache *cache;
@property (weak, nonatomic) CKDPublicIdentityLookupService *lookupService;
@property (nonatomic) unsigned long long fetchBatchSize;

- (void).cxx_destruct;
- (void)cancel;
- (id)initWithOperation:(id)a0;
- (void)finishWithError:(id)a0;
- (void)performRequest;
- (id)spawnURLRequests;

@end
