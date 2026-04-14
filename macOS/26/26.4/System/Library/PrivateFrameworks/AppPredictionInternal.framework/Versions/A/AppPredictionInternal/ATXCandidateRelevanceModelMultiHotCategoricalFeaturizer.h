@class NSMutableDictionary;

@interface ATXCandidateRelevanceModelMultiHotCategoricalFeaturizer : ATXCandidateRelevanceModelFeaturizer {
    NSMutableDictionary *_observedFeatureValueCounts;
    unsigned long long _maxCategoricalFeaturesCount;
}

- (id)categoricalFeatureValuesForContext:(id)a0 candidate:(id)a1;
- (void).cxx_destruct;
- (id)immutableCopy;
- (id)init;
- (id)initWithObservedFeatureValueCounts:(id)a0 maxCategoricalFeaturesCount:(unsigned long long)a1;
- (id)computeFeatureValueNames;
- (id)featureVectorForContext:(id)a0 candidate:(id)a1;
- (id)initWithObservedFeatureValueCounts:(id)a0;
- (void)observeContext:(id)a0 candidate:(id)a1;

@end
