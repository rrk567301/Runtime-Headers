@class NSArray;

@interface CKDBatchFetchUserPrivacySettingsOperation : CKDOperation

@property (copy, nonatomic) NSArray *containerPrivacySettings;

+ (id)appPermissionGroupsFromContainerPrivacySettings:(id)a0;

- (void).cxx_destruct;
- (int)operationType;
- (void)main;
- (id)activityCreate;
- (BOOL)shouldCheckAppVersion;

@end
