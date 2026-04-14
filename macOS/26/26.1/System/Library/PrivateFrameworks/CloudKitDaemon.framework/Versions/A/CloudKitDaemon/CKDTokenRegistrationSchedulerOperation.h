@class NSData;

@interface CKDTokenRegistrationSchedulerOperation : CKDOperation

@property (readonly, nonatomic) NSData *apsToken;

- (void)main;
- (id)createRequest;
- (void).cxx_destruct;
- (id)initWithOperationInfo:(id)a0 container:(id)a1 apsToken:(id)a2;

@end
