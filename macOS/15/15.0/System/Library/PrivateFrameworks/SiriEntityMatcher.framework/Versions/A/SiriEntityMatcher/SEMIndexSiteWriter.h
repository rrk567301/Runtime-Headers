@class SEMIndexSite, SEMIndexUpdaterConfiguration, SEMSettings;

@interface SEMIndexSiteWriter : NSObject {
    SEMIndexSite *_indexSite;
    SEMSettings *_settings;
    SEMIndexUpdaterConfiguration *_skit;
    SEMIndexUpdaterConfiguration *_fts;
}

- (id)description;
- (void).cxx_destruct;
- (BOOL)performVerificationWithAllSets:(id /* block */)a0 shouldDefer:(id /* block */)a1;
- (id)_applicableSets:(id)a0 toUpdaterClass:(Class)a1;
- (id)_indexDirectory:(id)a0;
- (BOOL)_loadChangeRegistry:(id)a0 indexDirectory:(id)a1 createIfNotExists:(BOOL)a2 error:(id *)a3;
- (BOOL)_updateIndex:(id)a0 mode:(unsigned char)a1 sets:(id)a2 shouldDefer:(id /* block */)a3 shouldRebuild:(BOOL *)a4;
- (BOOL)_updateOrRebuildIndex:(id)a0 updatedSets:(id)a1 allSets:(id /* block */)a2 shouldDefer:(id /* block */)a3;
- (BOOL)indexUpdatesToSets:(id)a0 allSets:(id /* block */)a1 shouldDefer:(id /* block */)a2;
- (id)initWithIndexSite:(id)a0 settings:(id)a1;
- (void)logCurrentStateWithAllSets:(id)a0;

@end
