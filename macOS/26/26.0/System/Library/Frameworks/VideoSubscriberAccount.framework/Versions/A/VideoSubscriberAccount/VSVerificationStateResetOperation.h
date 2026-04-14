@class VSOptional, NSURLSessionTask, NSOperationQueue, VSAuditToken;

@interface VSVerificationStateResetOperation : VSAsyncOperation

@property (retain, nonatomic) NSURLSessionTask *resetStateTask;
@property (retain, nonatomic) NSOperationQueue *privateQueue;
@property (retain, nonatomic) VSOptional *result;
@property (copy, nonatomic) VSAuditToken *auditToken;

- (void)cancel;
- (void)executionDidBegin;
- (id)init;
- (void).cxx_destruct;

@end
