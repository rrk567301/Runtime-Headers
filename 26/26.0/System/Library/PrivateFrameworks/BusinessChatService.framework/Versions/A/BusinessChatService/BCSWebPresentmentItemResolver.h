@class NSString;
@protocol BCSItemCaching, BCSMetricFactoryProtocol, BCSPIRServerEnvironmentProtocol, BCSItemCacheSkipping, BCSPIRItemRemoteFetching;

@interface BCSWebPresentmentItemResolver : NSObject <BCSItemResolving>

@property (readonly, retain, nonatomic) id<BCSItemCaching> itemCache;
@property (readonly, retain, nonatomic) id<BCSItemCacheSkipping> itemCacheSkipper;
@property (retain, nonatomic) id<BCSMetricFactoryProtocol> metricFactory;
@property (retain, nonatomic) id<BCSPIRItemRemoteFetching> pirFetchMetadata;
@property (retain, nonatomic) id<BCSPIRItemRemoteFetching> pirFetchPermissions;
@property (retain, nonatomic) id<BCSPIRServerEnvironmentProtocol> metadataEnvironment;
@property (retain, nonatomic) id<BCSPIRServerEnvironmentProtocol> permissionsEnvironment;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)itemMatching:(id)a0 metric:(id)a1 completion:(id /* block */)a2;
- (void)_metadataMatching:(id)a0 metric:(id)a1 completion:(id /* block */)a2;
- (void)_permissionsMatching:(id)a0 metric:(id)a1 completion:(id /* block */)a2;
- (id)cachedItemMatching:(id)a0;
- (id)initWithMetadataEnvironment:(id)a0 permissionsEnvironment:(id)a1 itemCache:(id)a2 cacheSkipper:(id)a3 metadataFetch:(id)a4 permissionsFetch:(id)a5 metricFactory:(id)a6;
- (id)initWithMetadataEnvironment:(id)a0 permissionsEnvironment:(id)a1 itemCache:(id)a2 cacheSkipper:(id)a3 metricFactory:(id)a4;

@end
