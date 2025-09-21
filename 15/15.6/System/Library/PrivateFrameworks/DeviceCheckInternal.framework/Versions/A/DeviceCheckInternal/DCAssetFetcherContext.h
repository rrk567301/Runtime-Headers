@interface DCAssetFetcherContext : NSObject

@property (nonatomic) char allowCatalogRefresh;
@property (nonatomic) char ignoreCachedMetadata;

- (id)description;

@end
