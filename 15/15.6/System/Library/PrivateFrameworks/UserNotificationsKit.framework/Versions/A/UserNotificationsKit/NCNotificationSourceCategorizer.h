@interface NCNotificationSourceCategorizer : NSObject

+ (char)bundleIdEligibleForSummarization:(id)a0;
+ (unsigned long long)categoryOfBundleId:(id)a0;
+ (char)cateogryEligibleForSummarization:(unsigned long long)a0;
+ (void)resetCachedCategories;

- (id)init;

@end
