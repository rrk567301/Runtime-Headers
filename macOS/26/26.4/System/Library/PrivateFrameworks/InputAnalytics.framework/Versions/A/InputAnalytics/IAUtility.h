@interface IAUtility : NSObject

+ (unsigned long long)getSPIVersion;
+ (id)lookupAppBundle:(id)a0;
+ (id)_CTCategoryForBundleId:(id)a0 timeout:(float)a1;
+ (id)_lookupAppBundle:(id)a0 useCTCategoryFallback:(BOOL)a1 timeout:(float)a2;
+ (id)lookupAppBundle:(id)a0 useCTCategoryFallback:(BOOL)a1;
+ (BOOL)xpcEnabled;

@end
