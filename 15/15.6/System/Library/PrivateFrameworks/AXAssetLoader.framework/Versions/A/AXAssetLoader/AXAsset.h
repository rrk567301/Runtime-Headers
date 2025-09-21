@class NSString, MAAsset, NSURL, AXImageCaptionModel, NSDictionary, NSNumber;

@interface AXAsset : NSObject <NSSecureCoding> {
    NSNumber *_cachedComputedOnDiskSize;
    char _didAttachProgressHandler;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSString *characterVoiceLanguage;
@property (readonly, nonatomic) NSString *characterVoiceName;
@property (readonly, nonatomic) AXImageCaptionModel *imageCaptionModel;
@property (retain, nonatomic) NSURL *originalURL;
@property (retain, nonatomic) NSURL *localCopyURL;
@property (readonly, nonatomic) MAAsset *maAsset;
@property (readonly, nonatomic) char isInstalled;
@property (readonly, nonatomic) char isDownloading;
@property (readonly, nonatomic) NSString *assetId;
@property (readonly, nonatomic) NSString *assetType;
@property (readonly, nonatomic) unsigned long long contentVersion;
@property (readonly, nonatomic) unsigned long long compatibilityVersion;
@property (readonly, nonatomic) unsigned long long formatVersion;
@property (readonly, nonatomic) NSURL *localURL;
@property (readonly, nonatomic) NSDictionary *properties;
@property (readonly, nonatomic) NSNumber *downloadSize;
@property (readonly, nonatomic) NSNumber *unarchivedFileSize;
@property (readonly, nonatomic) NSNumber *computedOnDiskSize;

+ (id)archivedAssets:(id)a0 error:(id *)a1;
+ (id)assetsFromMAAssets:(id)a0;
+ (id)downloadableAssets:(id)a0;
+ (id)installedAssets:(id)a0;
+ (id)newsestCompatibleImageCaptionModelAssetFromAssets:(id)a0 withStage:(id)a1 language:(id)a2 isInstalled:(char)a3 isDownloadable:(char)a4;
+ (id)unarchivedAssets:(id)a0 error:(id *)a1;

- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithMAAsset:(id)a0;
- (id)assertionForVersionLockedImageCaptionModelAsset:(id)a0;
- (id)assetInfoDictionary;
- (char)assetStateIsInstalled:(long long)a0;
- (void)attachProgressHandlerIfNeeded:(id /* block */)a0;
- (void)copyLocally;
- (char)isEquivalentToMAAsset:(id)a0;
- (void)refreshMAAsset;
- (void)resetPropertiesFromMAAsset:(id)a0;

@end
