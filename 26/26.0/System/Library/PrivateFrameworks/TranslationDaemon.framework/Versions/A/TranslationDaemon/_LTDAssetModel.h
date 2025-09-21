@class NSString, NSArray, NSURL, _LTAssetProgress, NSMutableArray;
@protocol _LTDAssetModelProtocol;

@interface _LTDAssetModel : NSObject <_LTDAssetModelProtocol> {
    NSArray *_localeIdentifiers;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    _LTAssetProgress *_progress;
}

@property (retain, nonatomic) id<_LTDAssetModelProtocol> provider;
@property (readonly, nonatomic) NSMutableArray *components;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *assetId;
@property (readonly, nonatomic) NSString *assetName;
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

+ (unsigned long long)_assetStateForOfflineState:(long long)a0;
+ (long long)_offlineStateForAssetState:(unsigned long long)a0;
+ (id)descriptionForAssetState:(unsigned long long)a0;
+ (id)localeIdentifiersForLanguageName:(id)a0;

- (id)initWithProvider:(id)a0;
- (id)stateDescription;
- (BOOL)isEmpty;
- (id)status;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)refreshState;
- (BOOL)supportsLocale:(id)a0;
- (id)initWithAssetIdentifier:(id)a0;
- (void)_addComponentAsset:(id)a0;
- (BOOL)_isCompatibleWithThisDevice;
- (BOOL)addComponentAsset:(id)a0;
- (long long)compareAssetVersionReversed:(id)a0;
- (id)firstComponentAssetWithAssetSubtype:(unsigned long long)a0;
- (id)getLocalFileUrlForTaskHint:(long long)a0;
- (BOOL)isANEModel;
- (BOOL)isASRModel;
- (BOOL)isASRModelSupportingTaskHint:(long long)a0;
- (BOOL)isConfig;
- (BOOL)isMTModel;
- (BOOL)isNewerCompatibleVersionThan:(id)a0;
- (BOOL)isNewerVersionThan:(id)a0;
- (BOOL)isPhrasebook;
- (BOOL)isTTSModel;
- (BOOL)supportsTaskHint:(long long)a0;

@end
