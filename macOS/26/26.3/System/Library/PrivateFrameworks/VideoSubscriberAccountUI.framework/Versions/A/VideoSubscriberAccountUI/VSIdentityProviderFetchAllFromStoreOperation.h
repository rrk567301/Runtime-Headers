@class NSOperationQueue, VSOptional, VSAuditToken;

@interface VSIdentityProviderFetchAllFromStoreOperation : VSAsyncOperation

@property (retain, nonatomic) VSOptional *result;
@property (retain, nonatomic) NSOperationQueue *privateQueue;
@property (copy, nonatomic) VSAuditToken *auditToken;

- (void)cancel;
- (id)init;
- (void)executionDidBegin;
- (void).cxx_destruct;

@end
