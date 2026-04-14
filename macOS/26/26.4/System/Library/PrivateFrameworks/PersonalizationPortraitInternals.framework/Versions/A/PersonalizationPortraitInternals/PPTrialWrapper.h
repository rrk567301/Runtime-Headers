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

- (id)treatmentNameForNamespaceName:(id)a0;
- (id)_loadMLModelForModelName:(id)a0 namespaceName:(id)a1 error:(id *)a2;
- (id)initWithSettings:(id)a0 database:(id)a1 trialClient:(id)a2;
- (id)levelForFactor:(id)a0 namespaceName:(id)a1;
- (void)_addDefaultUpdateHandlersForAllNamespacesWithGuardedData:(id)a0;
- (void)removeUpdateHandlerForToken:(id)a0;
- (id)addUpdateHandlerForNamespaceName:(id)a0 block:(id /* block */)a1;
- (id)readableTreatmentsMapping;
- (id)lastTreatmentUpdateForNamespaceName:(id)a0;
- (void)_updateConcatenatedTreatmentNamesAndHash;
- (void)callRegisteredUpdateHandlersForNamespaceName:(id)a0;
- (void)clearOverrideFilepathForFileFactor:(id)a0 namespaceName:(id)a1;
- (BOOL)hasFactor:(id)a0 namespaceName:(id)a1;
- (id)plistForFactorName:(id)a0 namespaceName:(id)a1;
- (id)lastTreatmentUpdate;
- (void).cxx_destruct;
- (id)lazyPlistForFactorName:(id)a0 namespaceName:(id)a1 error:(id *)a2;
- (void)overrideFilepathForFileFactor:(id)a0 namespaceName:(id)a1 path:(id)a2;
- (id)filepathForFactor:(id)a0 namespaceName:(id)a1;
- (id)mlModelPathForModelName:(id)a0 namespaceName:(id)a1 error:(id *)a2;
- (id)defaultFilepathForFactor:(id)a0 namespaceName:(id)a1;
- (void)callRegisteredUpdateHandlers;
- (id)trieForFactorName:(id)a0 namespaceName:(id)a1;
- (id)filepathForFactorName:(id)a0 namespaceName:(id)a1 isDirectory:(BOOL)a2;
- (id)directoryForFactorName:(id)a0 namespaceName:(id)a1;
- (BOOL)hasModel:(id)a0 namespaceName:(id)a1;
- (void)setUseDefaultFiles:(BOOL)a0;
- (id)mlModelForModelName:(id)a0 namespaceName:(id)a1 error:(id *)a2;
- (void)dealloc;
- (BOOL)hasOverrideForFileFactor:(id)a0 namespaceName:(id)a1;

@end
