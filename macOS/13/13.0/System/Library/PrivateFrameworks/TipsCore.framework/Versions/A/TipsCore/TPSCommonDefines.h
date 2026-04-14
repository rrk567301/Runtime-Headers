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
+ (id)osBuild;
+ (BOOL)isInternalBuild;
+ (BOOL)hardwareChanged;
+ (id)clientBundleIdentifier;
+ (BOOL)isGreenTeaDevice;
+ (BOOL)isInternalDevice;
+ (BOOL)isSeniorUser;
+ (id)notificationBundleIdentifier;
+ (id)appGroupIdentifier;
+ (id)tipsCoreFrameworkBundle;
+ (int)maxRequestVersion;
+ (BOOL)callerIsTipsdWithSource:(id)a0;
+ (id)_tipStatusArchivalURL;

- (id)init;
- (void).cxx_destruct;
- (long long)userType;
- (void)clearDataCache;
- (id)lastMajorVersionUpdateDate;
- (id)reloadAppGroupDefaults;
- (BOOL)hasLocaleChanged;
- (id)userLanguage;
- (void)setUserLanguage:(id)a0;
- (id)collectionIdentifierToUseForCollectionIdentifiers:(id)a0;
- (void)notifiedCollection:(id)a0;
- (void)featuredCollection:(id)a0;
- (void)viewedCollection:(id)a0;
- (void)activatedCollection:(id)a0;
- (void)activatedCollections:(id)a0;
- (void)reloadModelInformation;
- (void)updateCollectionStatus:(unsigned long long)a0 collections:(id)a1;
- (void)resetCollectionStatusMap;
- (void)syncCollectionStatusMap;
- (id)collectionStatusForCollectionIdentifier:(id)a0;
- (id)activateDateForCollectionIdentifier:(id)a0;
- (id)dateForCollectionIdentifier:(id)a0 dateType:(unsigned long long)a1;
- (id)appBundleIDForInstalledAppWithIdentifier:(id)a0;
- (long long)daysSinceLastMajorVersionUpdate;
- (void)setLastMajorVersionUpdateDate:(id)a0;
- (id)archivedTipStatuses;
- (void)deleteTipStatusArchivalDirectory;

@end
