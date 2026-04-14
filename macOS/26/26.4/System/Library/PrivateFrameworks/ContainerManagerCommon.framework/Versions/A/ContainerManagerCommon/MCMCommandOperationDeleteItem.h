@protocol MCMContainerCacheEntry;

@interface MCMCommandOperationDeleteItem : NSObject

@property (readonly, nonatomic) id<MCMContainerCacheEntry> cacheEntry;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCacheEntry:(id)a0;

@end
