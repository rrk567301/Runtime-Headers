@class NSArray;

@interface CKDBatchFetchUserPrivacySettingsOperation : CKDOperation

@property (copy, nonatomic) NSArray *containerPrivacySettings;

+ (id)appPermissionGroupsFromContainerPrivacySettings:(id)a0;

- (id)activityCreate;
- (void)main;
- (int)operationType;
- (BOOL)shouldCheckAppVersion;
- (void).cxx_destruct;

@end
