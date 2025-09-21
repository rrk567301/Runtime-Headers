@class NSArray, NSString;

@interface WBSettingsSyncEngineAccess : NSObject <WBSSettingsSyncEngineAccess>

@property (readonly, nonatomic) NSArray *syncSettingsUpDictionary;
@property (readonly, nonatomic) BOOL backgroundImageExists;
@property (readonly, nonatomic) BOOL backgroundImageAppearanceIsLight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_attemptUpdatingSavingPerSiteSettingsWithRecord:(id)a0;
- (void)didDeleteRemoteRecordWithID:(id)a0;
- (BOOL)_isShowBackgroundImageEnabled;
- (id)_deviceClass;
- (void)_updatePerSiteSettingsWithRecord:(id)a0;
- (void)_installMobileAssetIfApplicableWithURL:(id)a0;
- (BOOL)_isKnownPerSiteSetting:(id)a0;
- (void)didReceiveRemoteCloudSettingsUpdateWithRecord:(id)a0;
- (void)_updateStartPageBackgroundImageWithRecord:(id)a0;
- (void)deleteBackgroundImageDirectory;
- (void)_updatePerSiteSettingsWithRecord:(id)a0 completionHandler:(id /* block */)a1;
- (void)_updateStartPageCloudTabsConsent:(id)a0;
- (long long)_settingForValue:(id)a0;
- (void)_didUpdateStartPageBackgroundImageVisibilityWithRecord:(id)a0;
- (void)_updateStartPageSectionVisibilityWithIdentifier:(id)a0 record:(id)a1;
- (BOOL)syncEnabled;
- (id)_perSitePreferencesStore;

@end
