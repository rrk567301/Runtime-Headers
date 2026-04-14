@interface PGSharingSuggestionSourceFamily : PGSharingSuggestionGraphBasedSource

- (id)details;
- (id)name;
- (double)weight;
- (id)suggestedResultsForInput:(id)a0 withOptions:(id)a1;

@end
