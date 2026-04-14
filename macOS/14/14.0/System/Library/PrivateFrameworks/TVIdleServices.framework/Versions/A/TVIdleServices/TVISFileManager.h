@interface TVISFileManager : NSObject

+ (id)_assetURLMappingForCacheURL:(id)a0 predicate:(id)a1;
+ (id)applicationCacheURL;
+ (id)assetURLMappingForCacheURL:(id)a0;
+ (id)jsonObjectForLocalFileAtURL:(id)a0;
+ (id)jsonObjectForLocalFileAtURL:(id)a0 error:(id *)a1;
+ (id)movieAssetURLMappingForCacheURL:(id)a0;
+ (id)snapshotsCacheURL;

@end
