@class NSString, NSArray, NSURL, _LTAssetProgress, TTSAsset;

@interface _LTDTTSAssetModel : NSObject <_LTDAssetModelProtocol> {
    NSString *_language;
    NSString *_ltIdentifier;
    unsigned long long _assetSubtype;
}

@property (retain, nonatomic) NSString *assetName;
@property (retain, nonatomic) TTSAsset *provider;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *assetId;
@property (readonly, nonatomic) NSString *coreAssetName;
@property (nonatomic) unsigned long long assetSubtype;
@property (readonly, nonatomic) NSString *assetTypeName;
@property (readonly, nonatomic) unsigned long long assetType;
@property (readonly, nonatomic) unsigned long long managedAssetProvider;
@property (readonly, nonatomic) NSString *managedAssetType;
@property (readonly, nonatomic) long long assetVersion;
@property (readonly, nonatomic) NSString *assetBuild;
@property (readonly, nonatomic) long long formatVersion;
@property (readonly, nonatomic) long long contentVersion;
@property (readonly, nonatomic) NSURL *getLocalFileUrl;
@property (readonly, nonatomic) long long downloadSize;
@property (readonly, nonatomic) long long unarchivedSize;
@property (readonly, nonatomic) BOOL isPremiumTextLID;
@property (readonly, nonatomic) long long requiredCapabilityIdentifier;
@property (readonly, nonatomic) NSString *assetLanguage;
@property (readonly, nonatomic) NSArray *supportedLanguages;
@property (readonly, nonatomic) unsigned long long state;
@property (readonly, nonatomic) BOOL isAvailable;
@property (readonly, nonatomic) BOOL isDownloading;
@property (readonly, nonatomic) BOOL isInstalled;
@property (readonly, nonatomic) BOOL canBePurged;
@property (readonly, nonatomic) BOOL shouldPurgeWithLocale;
@property (readonly, nonatomic) BOOL isMultiLocaleAsset;
@property (readonly, nonatomic) NSArray *localeIdentifiers;
@property (readonly, nonatomic) _LTAssetProgress *progress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelFromAsset:(id)a0;

- (id)initWithProvider:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)supportsLocale:(id)a0;
- (id)initWithAssetIdentifier:(id)a0;
- (BOOL)supportsTaskHint:(long long)a0;

@end
