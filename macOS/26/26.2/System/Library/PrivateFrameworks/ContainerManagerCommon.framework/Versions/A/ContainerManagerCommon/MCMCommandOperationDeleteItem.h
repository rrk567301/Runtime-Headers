@protocol MCMContainerCacheEntry;

@interface MCMCommandOperationDeleteItem : NSObject

@property (readonly, nonatomic) id<MCMContainerCacheEntry> cacheEntry;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithCacheEntry:(id)a0;

@end
