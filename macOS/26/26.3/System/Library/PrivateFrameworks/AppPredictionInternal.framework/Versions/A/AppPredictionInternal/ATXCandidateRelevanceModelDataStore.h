@class NSString, _ATXDataStore;

@interface ATXCandidateRelevanceModelDataStore : NSObject <ATXCandidateRelevanceModelDataStoreProtocol> {
    _ATXDataStore *_dataStore;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDataStore:(id)a0;
- (id)mostRecentVerifiedTrainDateForClientModelName:(id)a0;
- (id)mostRecentVerifiedTrainingResultsForClientModelName:(id)a0;
- (void)receiveMostRecentVerifiedTrainedModelTrainingResults:(id /* block */)a0 clientModelName:(id)a1 completion:(id /* block */)a2;
- (unsigned long long)numberOfFeaturizationManagerIds;
- (void)receiveMostRecentVerifiedTrainedModelTrainingResults:(id /* block */)a0 completion:(id /* block */)a1;
- (id)idsInTableWithName:(id)a0;
- (id)init;
- (void)deleteRowsWithIds:(id)a0 fromTableWithName:(id)a1;
- (void)cacheSelectedCandidates:(id)a0 featurizationManager:(id)a1 modelId:(id)a2;
- (id)cachedCandidatesForModelId:(id)a0 earliestDate:(id)a1;
- (void)writeSuccessfulVerificationForModelUUID:(id)a0;
- (long long)candidateIdForCandidate:(id)a0 error:(id *)a1;
- (id)modelUUIDToTrainDateForClientModelName:(id)a0;
- (void)receiveTrainingResult:(id /* block */)a0 completion:(id /* block */)a1 modelUUID:(id)a2 clientModelName:(id)a3;
- (void)deleteTrainedModelsWithTrainDateOlderThanDate:(id)a0;
- (id)clientModelNamesWithTrainedRelevanceModels;
- (void).cxx_destruct;
- (id)trainingResultsForClientModelName:(id)a0 modelUUID:(id)a1;
- (unsigned long long)numberOfCandidateIds;
- (void)writeTrainingResult:(id)a0;
- (void)writeVerificationStatusForModelUUID:(id)a0 clientModelName:(id)a1 expectedNumberOfModels:(unsigned long long)a2;
- (void)deleteCachedCandidatesForModelId:(id)a0;
- (unsigned long long)numberOfDatasetMetadataIds;
- (long long)featurizationManagerIdForFeaturizationManager:(id)a0 error:(id *)a1;
- (long long)datasetMetadataIdForDatasetMetadata:(id)a0 error:(id *)a1;
- (unsigned long long)numberOfTrainedModels;
- (BOOL)isModelUUIDVerified:(id)a0;

@end
