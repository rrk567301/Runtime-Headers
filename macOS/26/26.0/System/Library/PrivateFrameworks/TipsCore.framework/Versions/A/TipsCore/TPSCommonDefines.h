@class TPSTipStatusController, NSString, NSMutableDictionary, NSMutableArray, NSDate, NSObject, NSUserDefaults;
@protocol OS_dispatch_queue;

@interface TPSCommonDefines : NSObject {
    NSMutableArray *_cloudDevices;
    NSString *_userLanguage;
}

@property (class, readonly, nonatomic) BOOL isMacSetupEnvironmentUser;

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *syncQueue;
@property (retain, nonatomic) NSMutableDictionary *collectionStatusMap;
@property (nonatomic) int maxVersion;
@property (nonatomic) BOOL supportsUIApplication;
@property (readonly, nonatomic) BOOL tipsAccessAllowed;
@property (readonly, nonatomic) long long daysSinceLastMajorVersionUpdate;
@property (retain, nonatomic) NSString *majorVersion;
@property (retain, nonatomic) NSDate *lastMajorVersionUpdateDate;
@property (retain, nonatomic) NSString *model;
@property (copy, nonatomic) NSString *language;
@property (copy, nonatomic) NSString *userLanguage;
@property (readonly, nonatomic) NSUserDefaults *appGroupDefaults;
@property (retain, nonatomic) NSMutableDictionary *appBundleIDMap;
@property (readonly, nonatomic) long long assetRatioType;
@property (retain, nonatomic) TPSTipStatusController *tipStatusController;

+ (id)sharedInstance;
+ (BOOL)isInternalBuild;
+ (id)clientBundleIdentifier;
+ (id)deviceClass;
+ (id)productVersion;
+ (BOOL)isInternalDevice;
+ (BOOL)isVisionUI;
+ (id)deviceName;
+ (BOOL)isCellularChinaSKUDevice;
+ (id)appGroupIdentifier;
+ (BOOL)isChecklistCollectionWithIdentifier:(id)a0;
+ (id)hardwareWelcomeCollectionIdentifier;
+ (int)buttonType;
+ (id)deviceFamily;
+ (BOOL)hardwareChanged;
+ (BOOL)callerIsTipsdWithSource:(id)a0;
+ (id)savedTipsCollectionIdentifier;
+ (id)tipsCoreFrameworkBundle;
+ (BOOL)isMacUI;
+ (BOOL)supportsCloudDeviceUserGuide;
+ (id)notificationBundleIdentifier;
+ (id)deviceSymbol;
+ (id)osBuild;
+ (BOOL)isRecordValid:(id)a0;
+ (id)deviceGuideIdentifier;
+ (id)checklistCollectionIdentifier;
+ (BOOL)supportsFaceID;
+ (BOOL)isSeniorUser;
+ (id)deviceMarketingName;
+ (int)maxRequestVersion;
+ (id)softwareWelcomeCollectionIdentifier;
+ (id)spotlightBundleIdentifier;
+ (BOOL)isAppRestrictedWithBundleIdentifier:(id)a0;
+ (id)mainBundleIdentifier;
+ (id)switcherWelcomeCollectionIdentifier;
+ (BOOL)isPhoneUI;
+ (id)_tipStatusArchivalURL;
+ (BOOL)isPadUI;
+ (BOOL)supportsUserGuide;
+ (double)displayScale;
+ (BOOL)isWatchUI;
+ (BOOL)isAppValidWithBundleIdentifier:(id)a0;

- (void)setLastMajorVersionUpdateDate:(id)a0;
- (id)userLanguage;
- (id)appBundleIDForInstalledAppWithIdentifier:(id)a0;
- (id)collectionIdentifierForCurrentUserType;
- (void)activatedCollections:(id)a0;
- (BOOL)hasLocaleChanged;
- (id)activateDateForCollectionIdentifier:(id)a0;
- (id)collectionIdentifierToUseForCollectionIdentifiers:(id)a0;
- (void)deleteTipStatusArchivalDirectory;
- (id)archivedTipStatuses;
- (void)syncCollectionStatusMap;
- (id)init;
- (void)updateCollectionStatus:(unsigned long long)a0 collections:(id)a1;
- (void)featuredCollection:(id)a0;
- (void)clearDataCache;
- (void)activatedCollection:(id)a0;
- (id)reloadAppGroupDefaults;
- (id)collectionStatusForCollectionIdentifier:(id)a0;
- (void)resetCollectionStatusMap;
- (long long)userType;
- (id)dateForCollectionIdentifier:(id)a0 dateType:(unsigned long long)a1;
- (id)lastMajorVersionUpdateDate;
- (void)notifiedCollection:(id)a0;
- (long long)daysSinceLastMajorVersionUpdate;
- (void)reloadModelInformation;
- (void).cxx_destruct;
- (void)viewedCollection:(id)a0;
- (void)setUserLanguage:(id)a0;

@end
