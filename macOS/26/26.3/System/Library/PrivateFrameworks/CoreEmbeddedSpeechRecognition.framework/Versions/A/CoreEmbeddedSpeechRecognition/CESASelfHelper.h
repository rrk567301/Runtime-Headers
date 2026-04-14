@interface CESASelfHelper : NSObject

+ (void)logASRContextualEntityRetrievalEnd:(id)a0 retrievedEntityMetrics:(id)a1;
+ (void)logASRContextualEntityRetrievalStart:(id)a0 retrievalParameters:(id)a1;
+ (void)logContextualReplayBiomeRecordCreated:(id)a0;
+ (void)logContextualReplayBiomeRecordDeleted:(id)a0;
+ (void)logPersonalizationExperimentEndedWithAsrId:(id)a0 dodmlId:(id)a1 replayResults:(id)a2;
+ (void)logPersonalizationExperimentStartedWithAsrId:(id)a0 dodmlId:(id)a1;

- (id)init;
- (void).cxx_destruct;

@end
