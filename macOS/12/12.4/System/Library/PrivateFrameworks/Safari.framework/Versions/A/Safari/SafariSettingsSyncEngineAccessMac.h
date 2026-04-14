@class NSArray, NSString;

@interface SafariSettingsSyncEngineAccessMac : NSObject <WBSSettingsSyncEngineAccess>

@property (readonly, nonatomic) NSArray *syncSettingsUpDictionary;
@property (readonly, nonatomic) BOOL backgroundImageExists;
@property (readonly, nonatomic) BOOL backgroundImageAppearanceIsLight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)syncEnabled;
- (id)_secureDefaults;
- (void)_updateStartPageBackgroundImageWithRecord:(id)a0;
- (long long)_settingForValue:(id)a0;
- (void)_updateStartPageSectionOrder:(id)a0;
- (void)_updateStartPageSectionVisibilityPreferenceKey:(id)a0 withRecord:(id)a1;
- (id)_startPageSectionOrder;
- (void)didReceiveRemoteCloudSettingsUpdateWithRecord:(id)a0;
- (void)didDeleteRemoteRecordWithID:(id)a0;

@end
