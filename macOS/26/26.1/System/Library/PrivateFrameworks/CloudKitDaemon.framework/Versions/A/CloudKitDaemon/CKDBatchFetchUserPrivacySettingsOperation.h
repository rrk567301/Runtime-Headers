@class NSArray;

@interface CKDBatchFetchUserPrivacySettingsOperation : CKDOperation

@property (copy, nonatomic) NSArray *containerPrivacySettings;

+ (id)appPermissionGroupsFromContainerPrivacySettings:(id)a0;

- (id)activityCreate;
- (int)operationType;
- (void)main;
- (BOOL)shouldCheckAppVersion;
- (void).cxx_destruct;

@end
