@interface SDCatalogUtilities : NSObject

+ (id)_currentCatalog;
+ (void)_setCatalog:(id)a0;
+ (id)_currentAssetAudience;
+ (void)_resetAssetAudience;
+ (BOOL)_clearIASUCatalogURLInSystemWithError:(id *)a0;
+ (void)_setAudience:(id)a0;

@end
