@interface CKDSaveUserPrivacySettingsOperation : CKDOperation

@property (nonatomic) long long discoverable;

+ (long long)isPredominatelyDownload;

- (id)initWithOperationInfo:(id)a0 container:(id)a1;
- (BOOL)shouldCheckAppVersion;
- (id)activityCreate;
- (int)operationType;
- (void)main;

@end
