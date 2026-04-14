@protocol MCMContainerCacheEntry;

@interface MCMCommandOperationDeleteItem : NSObject

@property (readonly, nonatomic) id<MCMContainerCacheEntry> cacheEntry;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithCacheEntry:(id)a0;

@end
