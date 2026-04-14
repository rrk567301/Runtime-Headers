@interface CLSBusinessCacheCreator : NSObject

+ (id)_resolvedBusinessMUIDs:(id)a0 progressBlock:(id /* block */)a1 error:(id *)a2;
+ (id)enrichedBusinessItemsByMuidsForBusinessItems:(id)a0 progressBlock:(id /* block */)a1;
+ (id)enrichedBusinessItemsByMuidsForMuids:(id)a0 progressBlock:(id /* block */)a1;

@end
