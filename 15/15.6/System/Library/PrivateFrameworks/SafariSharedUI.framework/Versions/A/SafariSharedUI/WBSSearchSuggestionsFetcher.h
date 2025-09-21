@class WBSOpenSearchURLTemplate;

@interface WBSSearchSuggestionsFetcher : NSObject {
    unsigned long long _numberOfPendingFetches;
    char _hasConnectionToSearchHelper;
}

@property (readonly, nonatomic) WBSOpenSearchURLTemplate *suggestionsURLTemplate;
@property (readonly, nonatomic, getter=isFetching) char fetching;

- (void).cxx_destruct;
- (id)initWithSuggestionsURLTemplate:(id)a0;
- (void)cancelExistingSuggestionsRequest;
- (void)disconnectFromSearchHelperIfNecessary;
- (void)updateSuggestionsRequestWithSearchTerms:(id)a0 userAgentString:(id)a1 completionHandler:(id /* block */)a2;
- (void)_fetchDidFinishWithResponse:(id)a0 error:(id)a1 completionHandler:(id /* block */)a2;
- (id)_searchHelperConnection;

@end
