@interface PNExternalAssetRelevanceUtilities : NSObject

+ (id)internalPredicateToIncludeExternalAssetsEligibleForProcessing;
+ (id)internalPredicateToIncludeExternalAssetsNeedingProcessing;
+ (id)internalPredicateToIncludeProcessedExternalAssets;
+ (long long)externalAssetEligibilityForAsset:(id)a0;
+ (char)importedAssetInferredRelevant:(id)a0;

@end
