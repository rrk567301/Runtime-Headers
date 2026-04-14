@class NSMutableOrderedSet;

@interface CKDAssetCacheEvictionInfo : NSObject

@property BOOL forced;
@property BOOL evictNow;
@property BOOL clearRegisteredItems;
@property (retain, nonatomic) NSMutableOrderedSet *itemIDsToUnregister;
@property (retain, nonatomic) NSMutableOrderedSet *assetHandleItemIDsToDelete;

- (void).cxx_destruct;
- (id)initWithForced:(BOOL)a0 evictNow:(BOOL)a1;

@end
