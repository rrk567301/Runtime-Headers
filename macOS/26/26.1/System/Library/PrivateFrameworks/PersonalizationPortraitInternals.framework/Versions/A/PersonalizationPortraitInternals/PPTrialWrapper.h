@class NSString, NSDictionary, PPSQLDatabase, TRIClient, _PASLock;

@interface PPTrialWrapper : NSObject {
    _PASLock *_lock;
    NSDictionary *_namespaceNamesIdsDict;
    BOOL _useDefaultFiles;
    PPSQLDatabase *_db;
    TRIClient *_trialClient;
}

@property (readonly, nonatomic) NSString *concatenatedTreatmentNames;
@property (readonly, nonatomic) unsigned int treatmentsHash;

+ (id)sharedInstance;
+ (id)sharedTrialClient;

- (void)_updateConcatenatedTreatmentNamesAndHash;
- (id)directoryForFactorName:(id)a0 namespaceName:(id)a1;
- (id)levelForFactor:(id)a0 namespaceName:(id)a1;
- (id)trieForFactorName:(id)a0 namespaceName:(id)a1;
- (id)mlModelPathForModelName:(id)a0 namespaceName:(id)a1 error:(id *)a2;
- (id)lastTreatmentUpdateForNamespaceName:(id)a0;
- (id)initWithSettings:(id)a0 database:(id)a1 trialClient:(id)a2;
- (id)plistForFactorName:(id)a0 namespaceName:(id)a1;
- (id)filepathForFactorName:(id)a0 namespaceName:(id)a1 isDirectory:(BOOL)a2;
- (BOOL)hasFactor:(id)a0 namespaceName:(id)a1;
- (id)addUpdateHandlerForNamespaceName:(id)a0 block:(id /* block */)a1;
- (void)callRegisteredUpdateHandlersForNamespaceName:(id)a0;
- (id)readableTreatmentsMapping;
- (BOOL)hasOverrideForFileFactor:(id)a0 namespaceName:(id)a1;
- (id)lazyPlistForFactorName:(id)a0 namespaceName:(id)a1 error:(id *)a2;
- (void)setUseDefaultFiles:(BOOL)a0;
- (void)overrideFilepathForFileFactor:(id)a0 namespaceName:(id)a1 path:(id)a2;
- (void)dealloc;
- (void)_addDefaultUpdateHandlersForAllNamespacesWithGuardedData:(id)a0;
- (void)callRegisteredUpdateHandlers;
- (id)mlModelForModelName:(id)a0 namespaceName:(id)a1 error:(id *)a2;
- (void).cxx_destruct;
- (id)defaultFilepathForFactor:(id)a0 namespaceName:(id)a1;
- (id)lastTreatmentUpdate;
- (void)clearOverrideFilepathForFileFactor:(id)a0 namespaceName:(id)a1;
- (id)treatmentNameForNamespaceName:(id)a0;
- (void)removeUpdateHandlerForToken:(id)a0;
- (BOOL)hasModel:(id)a0 namespaceName:(id)a1;
- (id)_loadMLModelForModelName:(id)a0 namespaceName:(id)a1 error:(id *)a2;
- (id)filepathForFactor:(id)a0 namespaceName:(id)a1;

@end
