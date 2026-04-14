@class NSString, BCSRemoteFetchPIR;
@protocol BCSMetricFactoryProtocol, BCSItemCaching, BCSItemCacheSkipping;

@interface BCSBusinessEmailResolver : NSObject <BCSItemResolving>

@property (readonly, retain, nonatomic) id<BCSItemCaching> itemCache;
@property (readonly, retain, nonatomic) id<BCSItemCacheSkipping> itemCacheSkipper;
@property (retain, nonatomic) id<BCSMetricFactoryProtocol> metricFactory;
@property (retain, nonatomic) BCSRemoteFetchPIR *pirFetchMetadata;
@property (retain, nonatomic) BCSRemoteFetchPIR *pirFetchLogo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)itemMatching:(id)a0 metric:(id)a1 completion:(id /* block */)a2;
- (void)_logoMatching:(id)a0 metric:(id)a1 completion:(id /* block */)a2;
- (void)_metadataMatching:(id)a0 metric:(id)a1 completion:(id /* block */)a2;
- (id)cachedItemMatching:(id)a0;
- (id)initWithMetadataEnvironment:(id)a0 logoEnvironment:(id)a1 itemCache:(id)a2 cacheSkipper:(id)a3 metricFactory:(id)a4;

@end
