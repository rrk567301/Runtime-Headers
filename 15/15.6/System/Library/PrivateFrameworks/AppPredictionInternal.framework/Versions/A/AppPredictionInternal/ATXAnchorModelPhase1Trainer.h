@class NSString, ATXAnchor, ATXAnchorModelHyperParameters;
@protocol ATXPETEventTracker2Protocol, ATXAnchorModelDataStoreWrapperProtocol;

@interface ATXAnchorModelPhase1Trainer : NSObject <ATXAnchorModelPhase1TrainerProtocol> {
    ATXAnchor *_anchor;
    id<ATXAnchorModelDataStoreWrapperProtocol> _storeWrapper;
    ATXAnchorModelHyperParameters *_hyperParameters;
    id<ATXPETEventTracker2Protocol> _tracker;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)_logPredictionsFilteredDuringPhase1WithCandidateIdsToConsider:(id)a0 selectedCandidates:(id)a1;
- (double)anchorPopularityForCandidate:(id)a0;
- (char)candidateSatisfiesAllThresholds:(id)a0 trainingResult:(id)a1;
- (char)candidateUniqueAnchorOccurrencesIsAtLeastMinimum:(long long)a0 candidateId:(id)a1 trainingResult:(id)a2;
- (double)classConditionalProbabilityOfAnchorForCandidate:(id)a0;
- (char)classConditionalProbabilityOfAnchorIsAtLeastMinimum:(double)a0 candidateId:(id)a1 trainingResult:(id)a2;
- (double)globalPopularityForCandidate:(id)a0;
- (id)initForAnchor:(id)a0;
- (id)initForAnchor:(id)a0 anchorModelDataStoreWrapper:(id)a1;
- (id)initForAnchor:(id)a0 anchorModelDataStoreWrapper:(id)a1 hyperParameters:(id)a2 tracker:(id)a3;
- (double)posteriorProbabilityConditionedOnAnchorForCandidate:(id)a0;
- (char)posteriorProbabilityConditionedOnAnchorIsAtLeastMinimum:(double)a0 candidateId:(id)a1 trainingResult:(id)a2;
- (id)selectedPredictionCandidates;
- (double)standardDeviationOfNumbers:(id)a0;
- (double)standardDeviationOfSecondsAfterAnchorForFirstOccurrenceOfCandidateId:(id)a0;
- (id)trainPhase1;
- (id)uniqueCandidateIdsThatOccurredAfterAnchor;

@end
