@interface PGSharingSuggestionSourceMergeCandidates : PGSharingSuggestionPhotoKitBasedSource

- (id)name;
- (double)weight;
- (id)details;
- (BOOL)canRunWithOptions:(id)a0;
- (id)filterMeNodePredicateForInput:(id)a0 photoLibrary:(id)a1;
- (id)suggestedResultsForInput:(id)a0 withOptions:(id)a1;

@end
