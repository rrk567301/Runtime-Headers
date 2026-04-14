@class SEMLocalization, KVSetChangeRegistry, SEMIndexSite, NSObject;
@protocol SEMSkitWriteAccess;

@interface SEMSkitUpdater : NSObject {
    SEMIndexSite *_indexSite;
    KVSetChangeRegistry *_changeRegistry;
    NSObject<SEMSkitWriteAccess> *_writer;
    SEMLocalization *_localization;
}

- (void).cxx_destruct;
- (BOOL)indexUpdatesToSets:(id)a0 shouldDefer:(id /* block */)a1 error:(id *)a2;
- (id)initWithIndexSite:(id)a0 changeRegistry:(id)a1 localization:(id)a2 writer:(id)a3;
- (BOOL)isRebuildRequiredWithAllSets:(id)a0;

@end
