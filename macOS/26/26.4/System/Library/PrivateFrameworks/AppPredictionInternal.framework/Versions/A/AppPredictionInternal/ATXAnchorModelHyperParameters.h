@class NSDictionary;

@interface ATXAnchorModelHyperParameters : NSObject {
    NSDictionary *_parameters;
}

+ (id)sharedInstance;

- (id)abGroup;
- (long long)minNumUniqueAnchorOccurrencesWithUniqueCandidateOccurrencesForMediumConfidencePredictionForAnchor:(id)a0;
- (id)anchorsDisabledForHomescreen;
- (double)ratioForLeafNodeDecision;
- (id)enabledAnchors;
- (double)minPosteriorProbabilityToIgnoreClassConditionalProbabilityForCandidateForPhase1;
- (double)minClassConditionalProbabilityForMediumConfidencePredictionForAnchor:(id)a0;
- (double)secondsBeforeHistoricalStartDateToPredictCandidate;
- (double)highBlendingConfidenceScoreThreshold;
- (double)minClassConditionalProbabilityForCandidateForPhase1;
- (long long)minUniqueAnchorOccurrencesForAnchorForPhase1;
- (double)minClassConditionalProbabilityForHighConfidencePredictionForAnchor:(id)a0;
- (double)minDurationForAnchorModelPredictionInSecondsForPhase3;
- (double)minValueForParameterKey:(id)a0;
- (double)minPosteriorProbabilityForHighConfidencePredictionForAnchor:(id)a0;
- (double)idleTimeEndAnchorMinimumSecondsForBeingIdle;
- (double)modelWeightForParameterKey:(id)a0;
- (void).cxx_destruct;
- (double)minPosteriorProbabilityForMediumConfidencePredictionForAnchor:(id)a0;
- (double)maxDurationForAnchorModelPredictionInSecondsForPhase3;
- (long long)minNumUniqueAnchorOccurrencesWithUniqueCandidateOccurrencesForHighConfidencePredictionForAnchor:(id)a0;
- (id)init;
- (double)percentileForStartOffsetFromAnchorForPhase3;
- (double)maxSecondsSinceCandidateOccurrenceToConsiderCandidateForPrediction;
- (id)knownAnchorClasses;
- (double)maxValueForParameterKey:(id)a0;
- (double)minPosteriorProbabilityForCandidateForPhase1;
- (double)percentileForEndOffsetFromAnchorForPhase3;
- (double)maxTrainingAgeInSecondsToConsiderForRetraining;
- (double)mediumBlendingConfidenceScoreThreshold;
- (long long)candidateClassifierTypeForPhase2;

@end
