@class NSArray;

@interface CKDBatchFetchUserPrivacySettingsOperation : CKDOperation

@property (copy, nonatomic) NSArray *containerPrivacySettings;

+ (id)appPermissionGroupsFromContainerPrivacySettings:(id)a0;

- (id)activityCreate;
- (BOOL)shouldCheckAppVersion;
- (void)main;
- (int)operationType;
- (void).cxx_destruct;

@end
