@interface MapsSuggestions.MapsSuggestionsContactActivityDeduper : MapsSuggestionsBaseDeduper

+ (BOOL)isEnabled;

- (BOOL)dedupeByEnrichingEntry:(id)a0 withEntry:(id)a1;
- (id)init;

@end
