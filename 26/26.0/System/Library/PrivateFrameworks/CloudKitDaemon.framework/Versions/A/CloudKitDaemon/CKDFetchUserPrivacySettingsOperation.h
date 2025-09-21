@interface CKDFetchUserPrivacySettingsOperation : CKDOperation

@property (nonatomic) long long discoverable;

- (id)activityCreate;
- (void)main;
- (id)initWithOperationInfo:(id)a0 container:(id)a1;
- (int)operationType;
- (void)_handleRetrievedPrivacySettings:(id)a0;

@end
