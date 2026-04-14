@interface CKDSaveUserPrivacySettingsOperation : CKDOperation

@property (nonatomic) long long discoverable;

+ (long long)isPredominatelyDownload;

- (id)activityCreate;
- (BOOL)shouldCheckAppVersion;
- (void)main;
- (id)initWithOperationInfo:(id)a0 container:(id)a1;
- (int)operationType;

@end
