@class TPSTipStatusController, NSString, NSMutableDictionary, NSMutableArray, NSDate, NSObject, NSUserDefaults;
@protocol OS_dispatch_queue;

@interface TPSCommonDefines : NSObject {
    NSMutableArray *_cloudDevices;
    NSString *_userLanguage;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *syncQueue;
@property (retain, nonatomic) NSMutableDictionary *collectionStatusMap;
@property (nonatomic) int maxVersion;
@property (nonatomic) BOOL supportsUIApplication;
@property (readonly, nonatomic) BOOL tipsAccessAllowed;
@property (readonly, nonatomic, getter=isPhoneUI) BOOL phoneUI;
@property (readonly, nonatomic, getter=isPadUI) BOOL padUI;
@property (readonly, nonatomic, getter=isMacUI) BOOL macUI;
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
+ (id)deviceFamily;
+ (id)deviceName;
+ (id)osBuild;
+ (id)productVersion;
+ (id)deviceClass;
+ (BOOL)isInternalBuild;
+ (BOOL)hardwareChanged;
+ (id)clientBundleIdentifier;
+ (BOOL)isGreenTeaDevice;
+ (BOOL)isInternalDevice;
+ (BOOL)isSeniorUser;
+ (id)notificationBundleIdentifier;
+ (id)appGroupIdentifier;
+ (id)_tipStatusArchivalURL;
+ (BOOL)callerIsTipsdWithSource:(id)a0;
+ (int)maxRequestVersion;
+ (id)tipsCoreFrameworkBundle;

- (id)init;
- (void).cxx_destruct;
- (long long)userType;
- (void)clearDataCache;
- (long long)daysSinceLastMajorVersionUpdate;
- (id)activateDateForCollectionIdentifier:(id)a0;
- (void)activatedCollection:(id)a0;
- (void)activatedCollections:(id)a0;
- (id)appBundleIDForInstalledAppWithIdentifier:(id)a0;
- (id)archivedTipStatuses;
- (id)collectionIdentifierToUseForCollectionIdentifiers:(id)a0;
- (id)collectionStatusForCollectionIdentifier:(id)a0;
- (id)dateForCollectionIdentifier:(id)a0 dateType:(unsigned long long)a1;
- (void)deleteTipStatusArchivalDirectory;
- (void)featuredCollection:(id)a0;
- (BOOL)hasLocaleChanged;
- (id)lastMajorVersionUpdateDate;
- (void)notifiedCollection:(id)a0;
- (id)reloadAppGroupDefaults;
- (void)reloadModelInformation;
- (void)resetCollectionStatusMap;
- (void)setLastMajorVersionUpdateDate:(id)a0;
- (void)setUserLanguage:(id)a0;
- (void)syncCollectionStatusMap;
- (void)updateCollectionStatus:(unsigned long long)a0 collections:(id)a1;
- (id)userLanguage;
- (void)viewedCollection:(id)a0;

@end
