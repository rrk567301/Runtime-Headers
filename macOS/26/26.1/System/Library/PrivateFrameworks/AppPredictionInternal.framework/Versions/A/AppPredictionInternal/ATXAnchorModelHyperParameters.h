@class NSDictionary;

@interface ATXAnchorModelHyperParameters : NSObject {
    NSDictionary *_parameters;
}

+ (id)sharedInstance;

- (id)abGroup;
- (double)maxTrainingAgeInSecondsToConsiderForRetraining;
- (double)maxSecondsSinceCandidateOccurrenceToConsiderCandidateForPrediction;
- (id)anchorsDisabledForHomescreen;
- (id)enabledAnchors;
- (double)idleTimeEndAnchorMinimumSecondsForBeingIdle;
- (double)minPosteriorProbabilityToIgnoreClassConditionalProbabilityForCandidateForPhase1;
- (long long)minNumUniqueAnchorOccurrencesWithUniqueCandidateOccurrencesForMediumConfidencePredictionForAnchor:(id)a0;
- (double)maxDurationForAnchorModelPredictionInSecondsForPhase3;
- (double)ratioForLeafNodeDecision;
- (double)minValueForParameterKey:(id)a0;
- (double)minPosteriorProbabilityForMediumConfidencePredictionForAnchor:(id)a0;
- (double)minPosteriorProbabilityForCandidateForPhase1;
- (double)minClassConditionalProbabilityForHighConfidencePredictionForAnchor:(id)a0;
- (double)maxValueForParameterKey:(id)a0;
- (long long)minNumUniqueAnchorOccurrencesWithUniqueCandidateOccurrencesForHighConfidencePredictionForAnchor:(id)a0;
- (double)minClassConditionalProbabilityForCandidateForPhase1;
- (double)percentileForStartOffsetFromAnchorForPhase3;
- (double)mediumBlendingConfidenceScoreThreshold;
- (double)percentileForEndOffsetFromAnchorForPhase3;
- (double)minDurationForAnchorModelPredictionInSecondsForPhase3;
- (double)secondsBeforeHistoricalStartDateToPredictCandidate;
- (long long)candidateClassifierTypeForPhase2;
- (void).cxx_destruct;
- (long long)minUniqueAnchorOccurrencesForAnchorForPhase1;
- (double)minClassConditionalProbabilityForMediumConfidencePredictionForAnchor:(id)a0;
- (double)modelWeightForParameterKey:(id)a0;
- (id)knownAnchorClasses;
- (double)highBlendingConfidenceScoreThreshold;
- (id)init;
- (double)minPosteriorProbabilityForHighConfidencePredictionForAnchor:(id)a0;

@end
