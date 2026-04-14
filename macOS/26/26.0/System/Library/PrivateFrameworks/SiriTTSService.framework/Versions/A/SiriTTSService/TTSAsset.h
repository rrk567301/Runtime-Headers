@class NSString, TTSAssetQuality, TTSAssetType, TTSAssetTechnology, NSArray, TTSAssistantVoiceMaps, NSDictionary, NSBundle, TTSAssetSource, NSNumber;

@interface TTSAsset : NSObject {
    void /* unknown type, empty encoding */ $__lazy_storage_$_brand;
}

@property (class, nonatomic, readonly) TTSAssistantVoiceMaps *assistantVoiceMaps;
@property (class, nonatomic, readonly) NSString *NewAssetNotification;

@property (nonatomic, readonly) long long purgeCondition;
@property (nonatomic, readonly) NSString *primaryLanguage;
@property (nonatomic, readonly) BOOL locallyAvailable;
@property (nonatomic, readonly) BOOL downloading;
@property (nonatomic, readonly) BOOL purgeable;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) TTSAssetType *assetType;
@property (nonatomic, readonly) TTSAssetSource *assetSource;
@property (nonatomic, readonly) TTSAssetTechnology *technology;
@property (nonatomic, readonly) TTSAssetQuality *quality;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) long long versionNumber;
@property (nonatomic, readonly) NSString *versionDescription;
@property (nonatomic, readonly) NSArray *supportedLanguages;
@property (nonatomic, readonly) long long gender;
@property (nonatomic, retain) NSNumber *age;
@property (nonatomic, retain) NSNumber *downloadSize;
@property (nonatomic, retain) NSNumber *diskSize;
@property (nonatomic, readonly) NSDictionary *attributes;
@property (nonatomic, retain) NSBundle *bundle;
@property (nonatomic) long long brand;

+ (id)bestAssetOfTypes:(id)a0 matching:(id)a1;
+ (id)listAssetsOfTypes:(id)a0 matching:(id)a1;
+ (id)describeServer:(id)a0 forType:(id)a1;
+ (id)describeServer:(id)a0 source:(id)a1;
+ (id)getServerForType:(id)a0;
+ (id)getServerForType:(id)a0 source:(id)a1;
+ (BOOL)handleProxyEvent:(id)a0 reply:(id)a1 connection:(id)a2;
+ (BOOL)setServer:(id)a0 forType:(id)a1;
+ (BOOL)setServer:(id)a0 forType:(id)a1 source:(id)a2;
+ (void)waitForCatalogUpdates;

- (void)purge;
- (void)purgeThen:(id /* block */)a0;
- (id)init;
- (void)cancelDownloadingThen:(id /* block */)a0;
- (void)purgeImmediately:(BOOL)a0;
- (void).cxx_destruct;
- (void)downloadWithOptions:(unsigned long long)a0 progress:(id /* block */)a1 then:(id /* block */)a2;
- (void)downloadWithReservation:(id)a0 useBattery:(BOOL)a1 progress:(id /* block */)a2 then:(id /* block */)a3;
- (id)relatedAssetsWithOnlyAvailable:(BOOL)a0;
- (BOOL)isNewer:(id)a0;
- (BOOL)isOlder:(id)a0;
- (id)legacyAssetWithBundle:(id)a0;
- (void)setPurgeCondition:(long long)a0;
- (id)siriVoiceSimilarInLanguage:(id)a0;

@end
