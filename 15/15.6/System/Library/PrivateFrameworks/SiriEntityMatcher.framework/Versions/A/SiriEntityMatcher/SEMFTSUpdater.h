@class SEMIndexSite, SEMFTSWriter;

@interface SEMFTSUpdater : NSObject <SEMIndexUpdater> {
    SEMIndexSite *_indexSite;
    SEMFTSWriter *_writer;
}

+ (id)indexName;
+ (id)indexDirectory:(id)a0;
+ (unsigned char)supportedDevicePlatformForSet:(id)a0;
+ (id)updaterForIndexSite:(id)a0 localization:(id)a1;

- (void).cxx_destruct;
- (char)clear:(id *)a0;
- (char)cleanup:(id *)a0;
- (char)commitUpdates:(id *)a0 shouldRebuild:(char *)a1;
- (char)indexUpdatesToSets:(id)a0 changeRegistry:(id)a1 shouldDefer:(id /* block */)a2 error:(id *)a3;
- (id)initWithIndexSite:(id)a0 writer:(id)a1;
- (char)isRebuildRequiredWithAllSets:(id)a0;
- (char)rollbackUpdates:(id *)a0;

@end
