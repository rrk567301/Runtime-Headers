@interface LNSpotlightCascadeHandler : NSObject

+ (id)_getSearchQuery:(id)a0 context:(id)a1;
+ (void)handleDeletionStream:(id)a0 items:(id)a1 bundleId:(id)a2 completionHandler:(id /* block */)a3;
+ (void)handleFullSetStream:(id)a0 items:(id)a1 bundleId:(id)a2 quota:(unsigned long long)a3 indexName:(id)a4 serialNumber:(unsigned long long)a5 completionHandler:(id /* block */)a6;
+ (void)handleIncrementalStream:(id)a0 items:(id)a1 bundleId:(id)a2 existingItemCount:(unsigned long long)a3 quota:(unsigned long long)a4 completionHandler:(id /* block */)a5;

@end
