@class NSObject, NSString, CMLKeywordPIRClient;
@protocol BCSItemCaching, BCSPIRServerEnvironmentProtocol, BCSMetricFactoryProtocol, BCSItemCacheSkipping, OS_dispatch_queue;

@interface BCSCallerIdResolver : NSObject <BCSItemResolving>

@property (readonly, retain, nonatomic) id<BCSPIRServerEnvironmentProtocol> environment;
@property (readonly, retain, nonatomic) id<BCSItemCaching> itemCache;
@property (readonly, retain, nonatomic) id<BCSItemCacheSkipping> itemCacheSkipper;
@property (retain, nonatomic) id<BCSMetricFactoryProtocol> metricFactory;
@property (retain, nonatomic) CMLKeywordPIRClient *pirClient;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *pirQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)decompressData:(id)a0;
- (id)cachedItemMatching:(id)a0;
- (void)fetchDataMatching:(id)a0 timeout:(long long)a1 completion:(id /* block */)a2;
- (id)initWithEnvironment:(id)a0 itemCache:(id)a1 cacheSkipper:(id)a2 metricFactory:(id)a3;
- (void)itemMatching:(id)a0 config:(id)a1 clientBundleID:(id)a2 metric:(id)a3 completion:(id /* block */)a4;

@end
