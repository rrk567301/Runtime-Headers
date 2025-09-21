@class NSMutableOrderedSet;

@interface CKDAssetCacheEvictionInfo : NSObject

@property (readonly, nonatomic) BOOL forced;
@property BOOL clearRegisteredItems;
@property (readonly, nonatomic) NSMutableOrderedSet *itemIDsToUnregister;
@property (readonly, nonatomic) NSMutableOrderedSet *assetHandleItemIDsToDelete;

- (id)initWithForced:(BOOL)a0;
- (void).cxx_destruct;

@end
