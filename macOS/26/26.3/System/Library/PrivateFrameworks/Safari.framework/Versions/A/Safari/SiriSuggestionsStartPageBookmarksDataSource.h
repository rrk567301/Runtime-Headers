@class BookmarksSearcher, NSMutableDictionary;

@interface SiriSuggestionsStartPageBookmarksDataSource : WBSForYouRecommendationMediatorDataSource {
    BookmarksSearcher *_searcher;
    NSMutableDictionary *_topicsCache;
}

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_bookmarksDidChange:(id)a0;
- (void)_pruneCache;
- (void)retrieveRecommendationsMatchingTopic:(id)a0 withCompletionHandler:(id /* block */)a1;

@end
