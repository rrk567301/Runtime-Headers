@class NSMutableDictionary, NSSet, LSApplicationWorkspace, NSArray, NSNumber, NSString;

@interface IMSharedWithYouManager : NSObject <LSApplicationWorkspaceObserverProtocol>

@property (nonatomic) int settingHasChangedNotificationToken;
@property (copy, nonatomic) NSNumber *cachedSharedWithYouEnabledValue;
@property (retain, nonatomic) NSMutableDictionary *swyPinsPerBundleID;
@property (readonly, nonatomic) LSApplicationWorkspace *_applicationWorkspace;
@property (retain, nonatomic) NSSet *enabledBundleIDs;
@property (nonatomic, getter=isSharedWithYouEnabled) char sharedWithYouEnabled;
@property (readonly, nonatomic) char sharedWithYouKeyExists;
@property (readonly, copy, nonatomic) NSArray *sharedWithYouApplicationBundleIDs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;
+ (id)_hiddenBundleIDs;
+ (char)_isBundleIDAllowed:(id)a0;
+ (id)appBundleIDsFromDefaults;
+ (id)collaborationAppBundleIDs;
+ (id)onboardingAppBundleIDs;
+ (id)tvAppBundleID;
+ (id)wolfHiddenSWYUIBundleIDs;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)applicationsDidInstall:(id)a0;
- (void)applicationsDidUninstall:(id)a0;
- (char)defaultCollaborationAppsEnabled;
- (id)lsAppRecordForAppStoreShareURL:(id)a0;
- (id)_installedLSAppRecordFromBundleIDs:(id)a0;
- (id)_supportedDataDetectedURLSchemes;
- (void)appNameAndBundleIDFoURL:(id)a0 outAppName:(id *)a1 outBundleID:(id *)a2;
- (id)appNameFromSharingURL:(id)a0;
- (id)appStoreIDFromSharingURL:(id)a0;
- (id)appStoreURLFromSharingURL:(id)a0;
- (void)decrementPinCountForBundleID:(id)a0;
- (id)defaultAppBundleIDs;
- (void)deleteSharedWithYouPreferences;
- (id)enabledApps;
- (long long)getPinCountForBundleID:(id)a0;
- (void)incrementPinCountForBundleID:(id)a0;
- (char)isDataDetectedLinkAllowedForSWY:(id)a0;
- (char)isSharedWithYouEnabledForApplicationWithBundleID:(id)a0;
- (char)isSharedWithYouSetUpForApplicationWithBundleID:(id)a0;
- (id)lsAppRecordForShareBearURL:(id)a0;
- (id)lsAppRecordForURL:(id)a0;
- (id)lsAppRecordForURL:(id)a0 checkInstalledAppsOnly:(char)a1;
- (void)setSharedWithYouEnabled:(char)a0 forApplicationWithBundleID:(id)a1;
- (void)setSharedWithYouEnabledForAllApplicationsIndividually:(char)a0;
- (id)sharedWithYouApps;
- (char)showPinningStatusTextForBundleID:(id)a0;
- (id)swyPublicEntitlementAppBundleIDs;
- (void)updateEnabledApps;
- (id)urlMinusFragment:(id)a0 onlyCKURL:(char)a1;

@end
