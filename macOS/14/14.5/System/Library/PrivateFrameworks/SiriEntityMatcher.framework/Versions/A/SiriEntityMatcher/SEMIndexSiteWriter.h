@class SEMIndexSite, KVSetChangeRegistry, SEMSettings;

@interface SEMIndexSiteWriter : NSObject {
    SEMIndexSite *_indexSite;
    SEMSettings *_settings;
    KVSetChangeRegistry *_skitChangeRegistry;
    KVSetChangeRegistry *_ftsChangeRegistry;
}

- (id)description;
- (void).cxx_destruct;
- (BOOL)performVerificationWithAllSets:(id /* block */)a0 shouldDefer:(id /* block */)a1;
- (BOOL)_updateFTSWithSets:(id)a0 shouldDefer:(id /* block */)a1;
- (BOOL)_didCompleteVerificationWithAllSets:(id /* block */)a0 shouldDefer:(id /* block */)a1;
- (BOOL)_didIndexUpdatesToSets:(id)a0 allSets:(id /* block */)a1 shouldDefer:(id /* block */)a2;
- (BOOL)_rebuildFTSWithAllSets:(id /* block */)a0 verifyRebuildRequired:(BOOL)a1 shouldDefer:(id /* block */)a2;
- (BOOL)_rebuildSkitWithAllSets:(id /* block */)a0 verifyRebuildRequired:(BOOL)a1 shouldDefer:(id /* block */)a2;
- (BOOL)_updateFTSWithSets:(id)a0 verifyRebuildRequired:(BOOL)a1 shouldDefer:(id /* block */)a2 clear:(BOOL)a3;
- (BOOL)_updateSkitWithSets:(id)a0 mergeRequired:(BOOL *)a1 shouldDefer:(id /* block */)a2;
- (BOOL)_updateSkitWithSets:(id)a0 verifyRebuildRequired:(BOOL)a1 mergeRequired:(BOOL *)a2 shouldDefer:(id /* block */)a3 clear:(BOOL)a4;
- (BOOL)indexUpdatesToSets:(id)a0 allSets:(id /* block */)a1 shouldDefer:(id /* block */)a2;
- (id)initWithIndexSite:(id)a0 settings:(id)a1;

@end
