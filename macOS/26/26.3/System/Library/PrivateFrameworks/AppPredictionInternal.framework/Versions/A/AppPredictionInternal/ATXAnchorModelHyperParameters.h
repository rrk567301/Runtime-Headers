@class NSDictionary;

@interface ATXAnchorModelHyperParameters : NSObject {
    NSDictionary *_parameters;
}

+ (id)sharedInstance;

- (double)highBlendingConfidenceScoreThreshold;
- (long long)minNumUniqueAnchorOccurrencesWithUniqueCandidateOccurrencesForHighConfidencePredictionForAnchor:(id)a0;
- (double)maxValueForParameterKey:(id)a0;
- (double)secondsBeforeHistoricalStartDateToPredictCandidate;
- (id)init;
- (id)knownAnchorClasses;
- (double)minPosteriorProbabilityForHighConfidencePredictionForAnchor:(id)a0;
- (double)minPosteriorProbabilityToIgnoreClassConditionalProbabilityForCandidateForPhase1;
- (double)maxDurationForAnchorModelPredictionInSecondsForPhase3;
- (double)minClassConditionalProbabilityForHighConfidencePredictionForAnchor:(id)a0;
- (long long)minUniqueAnchorOccurrencesForAnchorForPhase1;
- (double)mediumBlendingConfidenceScoreThreshold;
- (double)idleTimeEndAnchorMinimumSecondsForBeingIdle;
- (void).cxx_destruct;
- (double)minPosteriorProbabilityForMediumConfidencePredictionForAnchor:(id)a0;
- (long long)candidateClassifierTypeForPhase2;
- (double)modelWeightForParameterKey:(id)a0;
- (double)minPosteriorProbabilityForCandidateForPhase1;
- (double)minValueForParameterKey:(id)a0;
- (id)anchorsDisabledForHomescreen;
- (double)minClassConditionalProbabilityForMediumConfidencePredictionForAnchor:(id)a0;
- (double)minClassConditionalProbabilityForCandidateForPhase1;
- (long long)minNumUniqueAnchorOccurrencesWithUniqueCandidateOccurrencesForMediumConfidencePredictionForAnchor:(id)a0;
- (double)percentileForEndOffsetFromAnchorForPhase3;
- (id)enabledAnchors;
- (double)percentileForStartOffsetFromAnchorForPhase3;
- (id)abGroup;
- (double)ratioForLeafNodeDecision;
- (double)minDurationForAnchorModelPredictionInSecondsForPhase3;
- (double)maxSecondsSinceCandidateOccurrenceToConsiderCandidateForPrediction;
- (double)maxTrainingAgeInSecondsToConsiderForRetraining;

@end
