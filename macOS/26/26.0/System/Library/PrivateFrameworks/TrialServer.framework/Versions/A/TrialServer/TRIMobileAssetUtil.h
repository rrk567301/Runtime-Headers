@interface TRIMobileAssetUtil : NSObject

+ (id)_getCurrentPallasURLForAssetType:(id)a0;
+ (id)eliminableAssetTypes;
+ (void)_setPallasURL:(id)a0 forAssetType:(id)a1;
+ (id)_getCurrentPallasAudienceForAssetType:(id)a0;
+ (void)_setPallasAudience:(id)a0 forAssetType:(id)a1;
+ (void)configureMobileAssetForTrialEnvironment:(long long)a0;
+ (void)_setAllAssetsToAudience:(id)a0 siriAudience:(id)a1 assetURL:(id)a2 siriAssetURL:(id)a3;

@end
