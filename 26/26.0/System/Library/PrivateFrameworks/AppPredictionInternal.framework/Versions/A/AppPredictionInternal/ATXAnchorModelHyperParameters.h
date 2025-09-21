@class NSDictionary;

@interface ATXAnchorModelHyperParameters : NSObject {
    NSDictionary *_parameters;
}

+ (id)sharedInstance;

- (double)mediumBlendingConfidenceScoreThreshold;
- (double)minPosteriorProbabilityForHighConfidencePredictionForAnchor:(id)a0;
- (double)minClassConditionalProbabilityForCandidateForPhase1;
- (double)secondsBeforeHistoricalStartDateToPredictCandidate;
- (double)minClassConditionalProbabilityForHighConfidencePredictionForAnchor:(id)a0;
- (double)ratioForLeafNodeDecision;
- (id)abGroup;
- (double)maxSecondsSinceCandidateOccurrenceToConsiderCandidateForPrediction;
- (double)minPosteriorProbabilityForMediumConfidencePredictionForAnchor:(id)a0;
- (id)anchorsDisabledForHomescreen;
- (id)enabledAnchors;
- (double)maxDurationForAnchorModelPredictionInSecondsForPhase3;
- (id)init;
- (double)minDurationForAnchorModelPredictionInSecondsForPhase3;
- (long long)candidateClassifierTypeForPhase2;
- (double)percentileForStartOffsetFromAnchorForPhase3;
- (double)minClassConditionalProbabilityForMediumConfidencePredictionForAnchor:(id)a0;
- (double)highBlendingConfidenceScoreThreshold;
- (long long)minNumUniqueAnchorOccurrencesWithUniqueCandidateOccurrencesForHighConfidencePredictionForAnchor:(id)a0;
- (double)minPosteriorProbabilityForCandidateForPhase1;
- (id)knownAnchorClasses;
- (double)minValueForParameterKey:(id)a0;
- (long long)minNumUniqueAnchorOccurrencesWithUniqueCandidateOccurrencesForMediumConfidencePredictionForAnchor:(id)a0;
- (double)minPosteriorProbabilityToIgnoreClassConditionalProbabilityForCandidateForPhase1;
- (double)idleTimeEndAnchorMinimumSecondsForBeingIdle;
- (double)modelWeightForParameterKey:(id)a0;
- (double)maxTrainingAgeInSecondsToConsiderForRetraining;
- (long long)minUniqueAnchorOccurrencesForAnchorForPhase1;
- (double)maxValueForParameterKey:(id)a0;
- (double)percentileForEndOffsetFromAnchorForPhase3;
- (void).cxx_destruct;

@end
