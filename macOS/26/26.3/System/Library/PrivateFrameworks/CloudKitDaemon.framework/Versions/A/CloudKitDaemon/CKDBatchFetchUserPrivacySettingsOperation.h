@class NSArray;

@interface CKDBatchFetchUserPrivacySettingsOperation : CKDOperation

@property (copy, nonatomic) NSArray *containerPrivacySettings;

+ (id)appPermissionGroupsFromContainerPrivacySettings:(id)a0;

- (BOOL)shouldCheckAppVersion;
- (id)activityCreate;
- (int)operationType;
- (void)main;
- (void).cxx_destruct;

@end
