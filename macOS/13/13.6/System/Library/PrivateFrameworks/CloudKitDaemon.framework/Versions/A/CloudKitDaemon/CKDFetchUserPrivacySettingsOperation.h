@interface CKDFetchUserPrivacySettingsOperation : CKDOperation

@property (nonatomic) long long discoverable;

- (int)operationType;
- (void)main;
- (id)activityCreate;
- (void)_handleRetrievedPrivacySettings:(id)a0;
- (id)initWithOperationInfo:(id)a0 container:(id)a1;

@end
