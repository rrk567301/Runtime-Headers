@class MALearningStreamUtils;

@interface PGSharingSuggestionSourceAssetLearning : PGSharingSuggestionSource {
    MALearningStreamUtils *_learningStreamUtils;
}

- (id)name;
- (void).cxx_destruct;
- (double)weight;
- (id)details;
- (id)initWithLearningStreamUtils:(id)a0;
- (id)suggestedResultsForInput:(id)a0 withOptions:(id)a1;

@end
