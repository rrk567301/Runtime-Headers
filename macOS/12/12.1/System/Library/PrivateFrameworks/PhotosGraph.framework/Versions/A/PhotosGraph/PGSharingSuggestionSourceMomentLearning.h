@class MALearningStreamUtils;

@interface PGSharingSuggestionSourceMomentLearning : PGSharingSuggestionSource {
    MALearningStreamUtils *_learningStreamUtils;
}

- (id)name;
- (void).cxx_destruct;
- (double)weight;
- (id)details;
- (id)suggestedResultsForInput:(id)a0 withOptions:(id)a1;
- (id)initWithLearningStreamUtils:(id)a0;

@end
