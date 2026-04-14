@protocol MCMContainerCacheEntry;

@interface MCMCommandOperationDeleteItem : NSObject

@property (readonly, nonatomic) id<MCMContainerCacheEntry> cacheEntry;

- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCacheEntry:(id)a0;

@end
