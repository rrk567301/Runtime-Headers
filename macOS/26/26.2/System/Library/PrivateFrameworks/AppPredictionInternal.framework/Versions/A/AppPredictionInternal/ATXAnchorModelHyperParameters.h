@class NSDictionary;

@interface ATXAnchorModelHyperParameters : NSObject {
    NSDictionary *_parameters;
}

+ (id)sharedInstance;

- (double)secondsBeforeHistoricalStartDateToPredictCandidate;
- (double)ratioForLeafNodeDecision;
- (id)anchorsDisabledForHomescreen;
- (double)percentileForStartOffsetFromAnchorForPhase3;
- (id)enabledAnchors;
- (double)minPosteriorProbabilityForCandidateForPhase1;
- (double)modelWeightForParameterKey:(id)a0;
- (id)abGroup;
- (double)maxDurationForAnchorModelPredictionInSecondsForPhase3;
- (double)maxValueForParameterKey:(id)a0;
- (double)minPosteriorProbabilityForMediumConfidencePredictionForAnchor:(id)a0;
- (double)minClassConditionalProbabilityForHighConfidencePredictionForAnchor:(id)a0;
- (long long)minNumUniqueAnchorOccurrencesWithUniqueCandidateOccurrencesForHighConfidencePredictionForAnchor:(id)a0;
- (long long)minUniqueAnchorOccurrencesForAnchorForPhase1;
- (double)highBlendingConfidenceScoreThreshold;
- (id)knownAnchorClasses;
- (double)idleTimeEndAnchorMinimumSecondsForBeingIdle;
- (double)minPosteriorProbabilityToIgnoreClassConditionalProbabilityForCandidateForPhase1;
- (void).cxx_destruct;
- (long long)candidateClassifierTypeForPhase2;
- (double)mediumBlendingConfidenceScoreThreshold;
- (double)minDurationForAnchorModelPredictionInSecondsForPhase3;
- (double)minPosteriorProbabilityForHighConfidencePredictionForAnchor:(id)a0;
- (double)maxTrainingAgeInSecondsToConsiderForRetraining;
- (double)percentileForEndOffsetFromAnchorForPhase3;
- (double)maxSecondsSinceCandidateOccurrenceToConsiderCandidateForPrediction;
- (long long)minNumUniqueAnchorOccurrencesWithUniqueCandidateOccurrencesForMediumConfidencePredictionForAnchor:(id)a0;
- (double)minValueForParameterKey:(id)a0;
- (id)init;
- (double)minClassConditionalProbabilityForCandidateForPhase1;
- (double)minClassConditionalProbabilityForMediumConfidencePredictionForAnchor:(id)a0;

@end
