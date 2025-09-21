@interface HVHarvestEligibility : NSObject

+ (char)searchableItemIsEligibleForDissectorPipeline:(id)a0 targetPluginsCustomAttributeName:(id)a1;
+ (char)searchableItemIsEligibleForHarvesting:(id)a0 eligibleExceptForAge:(char *)a1;
+ (char)searchableItemIsEligibleForHarvestingWithGetterBlock:(id /* block */)a0 bundleIdentifier:(id)a1 eligibleExceptForAge:(char *)a2;
+ (char)searchableItemIsStoredEncryptedWithGetterBlock:(id /* block */)a0 bundleIdentifier:(id)a1;
+ (char)searchableItemIsEligibleForDeferredHarvesting:(id)a0;

@end
