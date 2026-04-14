@interface PGSharingSuggestionSourceFamily : PGSharingSuggestionGraphBasedSource

- (double)weight;
- (id)name;
- (id)details;
- (id)suggestedResultsForInput:(id)a0 withOptions:(id)a1;

@end
