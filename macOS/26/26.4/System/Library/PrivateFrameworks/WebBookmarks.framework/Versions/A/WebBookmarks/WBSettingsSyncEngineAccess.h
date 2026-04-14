@class NSArray, NSString;

@interface WBSettingsSyncEngineAccess : NSObject <WBSSettingsSyncEngineAccess>

@property (readonly, nonatomic) NSArray *syncSettingsUpDictionary;
@property (readonly, nonatomic) BOOL backgroundImageExists;
@property (readonly, nonatomic) BOOL backgroundImageAppearanceIsLight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didDeleteRemoteRecordWithID:(id)a0;
- (void)_attemptUpdatingSavingPerSiteSettingsWithRecord:(id)a0;
- (long long)_settingForValue:(id)a0;
- (void)_updateStartPageBackgroundImageWithRecord:(id)a0;
- (void)_didUpdateIOSDefaultBrowserWithRecord:(id)a0;
- (BOOL)syncEnabled;
- (void)didReceiveRemoteCloudSettingsUpdateWithRecord:(id)a0;
- (void)_updateStartPageSectionVisibilityWithIdentifier:(id)a0 record:(id)a1;
- (void)deleteBackgroundImageDirectory;
- (void)_updatePerSiteSettingsWithRecord:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)_isShowBackgroundImageEnabled;
- (void)_installMobileAssetIfApplicableWithURL:(id)a0;
- (void)_didUpdateStartPageBackgroundImageVisibilityWithRecord:(id)a0;
- (void)_updateStartPageCloudTabsConsent:(id)a0;
- (BOOL)_isKnownPerSiteSetting:(id)a0;
- (id)_perSitePreferencesStore;
- (void)_updatePerSiteSettingsWithRecord:(id)a0;
- (id)_deviceClass;

@end
