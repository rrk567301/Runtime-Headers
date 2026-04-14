@class NSString;

@interface AXCharacterVoiceAssetPolicy : AXAssetPolicy

@property (retain, nonatomic) NSString *language;

+ (id)characterVoiceAssetPolicyWithLanguage:(id)a0;

- (id)assetType;
- (BOOL)shouldDownloadAsset:(id)a0 withInstalledAssets:(id)a1;
- (void).cxx_destruct;
- (id)assetsToPurgeFromInstalledAssets:(id)a0;
- (id)init;
- (id)downloadOptionsForOperation:(unsigned long long)a0 userInitiated:(BOOL)a1;

@end
