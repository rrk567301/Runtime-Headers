@interface ATXCandidateRelevanceModelNumericFeaturizer : ATXCandidateRelevanceModelFeaturizer

- (id)immutableCopy;
- (unsigned long long)dimensions;
- (id)numericFeatureValueForContext:(id)a0 candidate:(id)a1;
- (id)featureVectorForContext:(id)a0 candidate:(id)a1;
- (void)observeContext:(id)a0 candidate:(id)a1;

@end
