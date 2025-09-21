@class SEMSettings, SEMIndexUpdaterConfiguration, SEMIndexSite, SEMDictionaryLog;

@interface SEMIndexSiteWriter : NSObject {
    SEMSettings *_settings;
    SEMDictionaryLog *_siteInfo;
    SEMIndexUpdaterConfiguration *_skit;
    SEMIndexUpdaterConfiguration *_fts;
}

@property (readonly, nonatomic) SEMIndexSite *indexSite;

- (id)description;
- (void).cxx_destruct;
- (id)_applicableSets:(id)a0 toUpdaterClass:(Class)a1;
- (id)_indexDirectory:(id)a0;
- (char)_indexUpdatesToSets:(id)a0 allSetsBlock:(id /* block */)a1 shouldDefer:(id /* block */)a2;
- (void)_initUpdaterConfiguration;
- (char)_loadChangeRegistry:(id)a0 indexDirectory:(id)a1 createIfNotExists:(char)a2 error:(id *)a3;
- (id)_loadSiteInfo:(id *)a0;
- (char)_logCurrentStateWithAllSetsBlock:(id /* block */)a0;
- (char)_performVerificationWithAllSetsBlock:(id /* block */)a0 shouldDefer:(id /* block */)a1;
- (char)_recordSiteInfoObject:(id)a0 forKey:(id)a1 error:(id *)a2;
- (char)_resetSiteDirectory;
- (id)_siteInfoObjectForKey:(id)a0 error:(id *)a1;
- (char)_updateIndex:(id)a0 mode:(unsigned char)a1 sets:(id)a2 shouldDefer:(id /* block */)a3 shouldRebuild:(char *)a4;
- (char)_updateOrRebuildIndex:(id)a0 updatedSets:(id)a1 allSetsBlock:(id /* block */)a2 shouldDefer:(id /* block */)a3;
- (id)initWithIndexSite:(id)a0 settings:(id)a1;
- (id)lastRecordedDateOfOperation:(unsigned char)a0 error:(id *)a1;
- (char)performOperation:(unsigned char)a0 updatedSets:(id)a1 allSetsBlock:(id /* block */)a2 shouldDefer:(id /* block */)a3;
- (char)recordDate:(id)a0 ofOperation:(unsigned char)a1 error:(id *)a2;
- (char)recordSchemaVersion:(id)a0 error:(id *)a1;
- (char)resetSiteDirectory;
- (id)schemaVersion:(id *)a0;

@end
