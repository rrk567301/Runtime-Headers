@class _LTAssetProgress, NSString, TTSAsset;

@interface _LTDTTSAssetModel : NSObject <_LTDAssetModelProtocol> {
    NSString *_language;
    NSString *_assetName;
    NSString *_ltIdentifier;
}

@property (readonly, retain, nonatomic) TTSAsset *ttsAsset;
@property (readonly, nonatomic) _LTAssetProgress *progress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelFromAsset:(id)a0;

- (void).cxx_destruct;
- (id)identifier;
- (unsigned long long)state;
- (BOOL)isInstalled;
- (id)getLocalFileUrl;
- (BOOL)isAvailable;
- (BOOL)isDownloading;
- (long long)assetVersion;
- (long long)contentVersion;
- (id)assetId;
- (id)supportedLanguages;
- (unsigned long long)assetType;
- (long long)downloadSize;
- (BOOL)canBePurged;
- (long long)formatVersion;
- (id)assetName;
- (long long)unarchivedSize;
- (id)initWithAssetIdentifier:(id)a0;
- (id)assetLanguage;
- (id)assetTypeName;
- (BOOL)isPremiumTextLID;
- (id)managedAssetType;
- (long long)requiredCapabilityIdentifier;

@end
