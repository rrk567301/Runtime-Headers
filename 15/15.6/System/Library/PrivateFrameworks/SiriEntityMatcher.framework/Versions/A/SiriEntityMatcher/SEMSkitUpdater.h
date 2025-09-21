@class SEMIndexSite, SEMLocalization, SEMSkitWriter;

@interface SEMSkitUpdater : NSObject <SEMIndexUpdater> {
    SEMIndexSite *_indexSite;
    SEMSkitWriter *_writer;
    SEMLocalization *_localization;
}

+ (id)indexName;
+ (id)indexDirectory:(id)a0;
+ (unsigned char)supportedDevicePlatformForSet:(id)a0;
+ (id)updaterForIndexSite:(id)a0 localization:(id)a1;

- (void).cxx_destruct;
- (char)clear:(id *)a0;
- (char)cleanup:(id *)a0;
- (id)_allMetaContent:(id)a0;
- (char)commitUpdates:(id *)a0 shouldRebuild:(char *)a1;
- (char)indexUpdatesToSets:(id)a0 changeRegistry:(id)a1 shouldDefer:(id /* block */)a2 error:(id *)a3;
- (id)initWithIndexSite:(id)a0 localization:(id)a1 writer:(id)a2;
- (char)isRebuildRequiredWithAllSets:(id)a0;
- (char)rollbackUpdates:(id *)a0;

@end
