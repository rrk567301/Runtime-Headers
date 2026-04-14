@class PGManagerWorkingContext;

@interface PGSharingManager : NSObject {
    PGManagerWorkingContext *_workingContext;
}

+ (id)_defaultOptions;

- (void).cxx_destruct;
- (id)coreDuetStream;
- (id)initWithWorkingContext:(id)a0;
- (id)suggestionResultsForAssetLocalIdentifiers:(id)a0 momentLocalIdentifiers:(id)a1 options:(id)a2;
- (id)_learningStreamUtils;
- (id)presenceStream;
- (id)contextualStream;
- (id)learningStream;
- (BOOL)_canIncludeUnverified;
- (BOOL)canProvideSuggestionsWithOptions:(id)a0 forGraph:(id)a1;
- (id)suggestionSourcesForSharingStream:(unsigned long long)a0;
- (void)_mergeSuggestionResultByPersonIdentifer:(id)a0 withSourceSuggestionResults:(id)a1;
- (id)_filteredSuggestionResults:(id)a0 withOptions:(id)a1 graph:(id)a2;
- (id)_sortedSuggestionResults:(id)a0 withOptions:(id)a1;

@end
