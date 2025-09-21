@class NSMutableOrderedSet;

@interface CKDAssetCacheEvictionInfo : NSObject

@property (readonly, nonatomic) char forced;
@property char clearRegisteredItems;
@property (readonly, nonatomic) NSMutableOrderedSet *itemIDsToUnregister;
@property (readonly, nonatomic) NSMutableOrderedSet *assetHandleItemIDsToDelete;

- (void).cxx_destruct;
- (id)initWithForced:(char)a0;

@end
