@class SEMIndexSite, KVSetChangeRegistry, SEMFTSWriter;

@interface SEMFTSUpdater : NSObject {
    SEMIndexSite *_indexSite;
    KVSetChangeRegistry *_changeRegistry;
    SEMFTSWriter *_writer;
}

+ (id)filterApplicableSets:(id)a0;

- (void).cxx_destruct;
- (BOOL)indexUpdatesToSets:(id)a0 shouldDefer:(id /* block */)a1 error:(id *)a2;
- (id)initWithIndexSite:(id)a0 changeRegistry:(id)a1 writer:(id)a2;
- (BOOL)isRebuildRequiredWithAllSets:(id)a0;

@end
