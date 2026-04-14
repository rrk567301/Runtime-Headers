@class NSArray, NSDictionary, NSError, BFMRequestMetadata;

@interface BFMCatalogService : NSObject {
    void /* unknown type, empty encoding */ config;
    void /* unknown type, empty encoding */ requestHandler;
}

- (void)fetchMixedAssetsWithBookIds:(NSArray *)a0 audiobookIds:(NSArray *)a1 relationships:(NSArray *)a2 views:(NSArray *)a3 additionalParameters:(NSDictionary *)a4 batchSize:(long long)a5 metadata:(BFMRequestMetadata *)a6 completionHandler:(void (^)(NSDictionary *, NSError *))a7;
- (void)fetchMixedSeriesWithBookSeriesIds:(NSArray *)a0 audiobookSeriesIds:(NSArray *)a1 relationships:(NSArray *)a2 views:(NSArray *)a3 additionalParameters:(NSDictionary *)a4 batchSize:(long long)a5 metadata:(BFMRequestMetadata *)a6 completionHandler:(void (^)(NSDictionary *, NSError *))a7;
- (void)fetchResourcesWithAdamIDs:(NSArray *)a0 relationships:(NSArray *)a1 views:(NSArray *)a2 additionalParameters:(NSDictionary *)a3 batchSize:(long long)a4 metadata:(BFMRequestMetadata *)a5 completionHandler:(void (^)(NSDictionary *, NSError *))a6;
- (id)init;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;

@end
