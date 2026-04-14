@class NSString, _ATXDataStore;

@interface ATXCandidateRelevanceModelDataStore : NSObject <ATXCandidateRelevanceModelDataStoreProtocol> {
    _ATXDataStore *_dataStore;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)receiveTrainingResult:(id /* block */)a0 completion:(id /* block */)a1 modelUUID:(id)a2 clientModelName:(id)a3;
- (void)deleteTrainedModelsWithTrainDateOlderThanDate:(id)a0;
- (void)receiveMostRecentVerifiedTrainedModelTrainingResults:(id /* block */)a0 completion:(id /* block */)a1;
- (id)mostRecentVerifiedTrainDateForClientModelName:(id)a0;
- (id)cachedCandidatesForModelId:(id)a0 earliestDate:(id)a1;
- (void)writeVerificationStatusForModelUUID:(id)a0 clientModelName:(id)a1 expectedNumberOfModels:(unsigned long long)a2;
- (unsigned long long)numberOfDatasetMetadataIds;
- (id)modelUUIDToTrainDateForClientModelName:(id)a0;
- (void)deleteRowsWithIds:(id)a0 fromTableWithName:(id)a1;
- (long long)datasetMetadataIdForDatasetMetadata:(id)a0 error:(id *)a1;
- (id)mostRecentVerifiedTrainingResultsForClientModelName:(id)a0;
- (long long)candidateIdForCandidate:(id)a0 error:(id *)a1;
- (id)idsInTableWithName:(id)a0;
- (id)clientModelNamesWithTrainedRelevanceModels;
- (void)receiveMostRecentVerifiedTrainedModelTrainingResults:(id /* block */)a0 clientModelName:(id)a1 completion:(id /* block */)a2;
- (void)deleteCachedCandidatesForModelId:(id)a0;
- (void).cxx_destruct;
- (id)initWithDataStore:(id)a0;
- (unsigned long long)numberOfCandidateIds;
- (id)trainingResultsForClientModelName:(id)a0 modelUUID:(id)a1;
- (unsigned long long)numberOfFeaturizationManagerIds;
- (void)writeSuccessfulVerificationForModelUUID:(id)a0;
- (void)writeTrainingResult:(id)a0;
- (BOOL)isModelUUIDVerified:(id)a0;
- (long long)featurizationManagerIdForFeaturizationManager:(id)a0 error:(id *)a1;
- (unsigned long long)numberOfTrainedModels;
- (void)cacheSelectedCandidates:(id)a0 featurizationManager:(id)a1 modelId:(id)a2;
- (id)init;

@end
