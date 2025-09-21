@interface MapsSuggestionsSameRidesharingRideDeduper : MapsSuggestionsBaseDeduper

+ (char)isEnabled;

- (char)dedupeByEnrichingEntry:(id)a0 withEntry:(id)a1;

@end
