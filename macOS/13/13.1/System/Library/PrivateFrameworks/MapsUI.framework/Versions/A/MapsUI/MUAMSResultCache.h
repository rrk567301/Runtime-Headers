@class MUTimeExpirableLRUCache;

@interface MUAMSResultCache : NSObject {
    MUTimeExpirableLRUCache *_amsResultsByAdamIds;
    MUTimeExpirableLRUCache *_amsResultsByBundleIds;
}

- (void).cxx_destruct;
- (id)initWithAppAdamIdCacheCount:(unsigned long long)a0 appAdamIdTimeToLive:(unsigned long long)a1 bundleIdCacheCount:(unsigned long long)a2 bundleIdTimeToLive:(unsigned long long)a3;
- (id)amsResultForAdamId:(id)a0;
- (void)setAMSResult:(id)a0 forAdamId:(id)a1;
- (id)amsResultForBundleId:(id)a0;
- (void)setAMSResult:(id)a0 forBundleId:(id)a1;

@end
