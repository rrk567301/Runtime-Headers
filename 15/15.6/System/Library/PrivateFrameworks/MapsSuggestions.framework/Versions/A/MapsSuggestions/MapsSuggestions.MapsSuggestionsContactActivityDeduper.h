@interface MapsSuggestions.MapsSuggestionsContactActivityDeduper : MapsSuggestionsBaseDeduper

+ (char)isEnabled;

- (id)init;
- (char)dedupeByEnrichingEntry:(id)a0 withEntry:(id)a1;

@end
