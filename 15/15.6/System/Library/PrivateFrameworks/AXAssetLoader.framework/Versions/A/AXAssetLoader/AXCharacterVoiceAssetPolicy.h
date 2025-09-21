@class NSString;

@interface AXCharacterVoiceAssetPolicy : AXAssetPolicy

@property (retain, nonatomic) NSString *language;

+ (id)characterVoiceAssetPolicyWithLanguage:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)assetType;
- (id)assetsToPurgeFromInstalledAssets:(id)a0;
- (id)downloadOptionsForOperation:(unsigned long long)a0 userInitiated:(char)a1;
- (char)shouldDownloadAsset:(id)a0 withInstalledAssets:(id)a1;

@end
