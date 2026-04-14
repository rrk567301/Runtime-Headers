@class WBSCompletionQuery, NSMutableDictionary, NSMutableSet;

@interface WebSearchSuggestionsFetcherController : NSObject <WebSearchSuggestionsFetcherDelegate> {
    struct WebSearchSuggestionsFetcherControllerClient { void /* function */ **x0; } *_client;
    NSMutableDictionary *_fetchersBySuggestionsURLTemplate;
    NSMutableSet *_suggestionsURLTemplates;
}

@property (retain, nonatomic) WBSCompletionQuery *completionQuery;

- (void).cxx_destruct;
- (id)initWithClient:(struct WebSearchSuggestionsFetcherControllerClient { void /* function */ **x0; } *)a0;
- (BOOL)isFetching;
- (id)_fetcherForSuggestionsURLTemplate:(id)a0;
- (void)addSuggestionsURLTemplate:(id)a0;
- (void)clearFetchers;
- (void)clearSuggestionsURLTemplates;
- (void)fetcher:(id)a0 didReceiveResponse:(id)a1 originalQuery:(id)a2;
- (void)startFetching;
- (void)stopFetching;

@end
