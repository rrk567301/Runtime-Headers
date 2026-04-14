@class ReadingListController;

@interface SiriSuggestionsStartPageReadingListDataSource : WBSForYouRecommendationMediatorDataSource {
    ReadingListController *_readingListController;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_readingListItemsDidChange:(id)a0;
- (void)retrieveRecommendationsMatchingTopic:(id)a0 withCompletionHandler:(id /* block */)a1;
- (id)_validLinkRecommendationsForTopic:(id)a0 fromReadingListItems:(id)a1;
- (id)_titleMatchPredicateForString:(id)a0;
- (id)_previewTextMatchPredicateForString:(id)a0;

@end
