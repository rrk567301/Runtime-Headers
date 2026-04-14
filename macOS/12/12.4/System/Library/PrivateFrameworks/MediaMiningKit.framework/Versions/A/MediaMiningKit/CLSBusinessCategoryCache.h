@class NSPredicate;

@interface CLSBusinessCategoryCache : CLSDBCache

@property (readonly, nonatomic) NSPredicate *predicateEntryWithUpdateTimestamp;

- (void).cxx_destruct;
- (void)invalidateCacheForGeoServiceProviderChangeToProvider:(id)a0;
- (id)updateBusinessItems:(id)a0;
- (BOOL)hasRegion:(id)a0;
- (id)initWithDiskCacheName:(id)a0;
- (id)dataModelName;
- (void)invalidateCacheItemsBeforeDateWithTimestamp:(double)a0;
- (id)businessItemsForRegion:(id)a0;
- (id)_fetchBusinessItemsForMUIDs:(id)a0;
- (void)_updateManagedBusinessItem:(id)a0 withBusinessItem:(id)a1;
- (id)predicateForRegion:(id)a0;
- (id)businessItemFromManagedObject:(id)a0;
- (id)predicateForEntryNearbyRegion:(id)a0;
- (id)nearestItemForRegion:(id)a0 inItems:(id)a1;
- (id)_businessItemInRegion:(id)a0 matchingCategories:(id)a1 maximumDistance:(double)a2 forBusinessItems:(id)a3;
- (id)_fetchedBusinessItemByMUIDForBusinessItems:(id)a0;
- (void)insertBatchesOfBusinessItems:(id)a0 forRegions:(id)a1;
- (id)businessItemsInRegion:(id)a0 categories:(id)a1 maximumDistance:(double)a2;
- (id)businessItemsForMuid:(unsigned long long)a0;
- (id)businessItemsForMuids:(id)a0;
- (unsigned long long)numberOfBusinessItemsForRegion:(id)a0;

@end
