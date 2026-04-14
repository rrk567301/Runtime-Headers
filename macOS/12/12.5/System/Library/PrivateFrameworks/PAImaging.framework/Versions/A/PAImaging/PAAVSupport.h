@interface PAAVSupport : NSObject

+ (id)_ensureSloMoIsPresentInPlaybackSettings:(id)a0 asset:(id)a1 error:(id *)a2;
+ (id)_ensureNaturalDurationIsPresentForPlaybackSettings:(id)a0 asset:(id)a1 assetURL:(id)a2 error:(id *)a3;
+ (id)defaultSloMoOperationIfNeededForAsset:(id)a0 trim:(id)a1 wantsInset:(BOOL)a2;
+ (id)finalizePlaybackSettings:(id)a0 assetURL:(id)a1 error:(id *)a2;

@end
