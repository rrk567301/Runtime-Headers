@class ReadingListController;

@interface SiriSuggestionsStartPageReadingListDataSource : WBSForYouRecommendationMediatorDataSource {
    ReadingListController *_readingListController;
}

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id)_previewTextMatchPredicateForString:(id)a0;
- (void)_readingListItemsDidChange:(id)a0;
- (id)_titleMatchPredicateForString:(id)a0;
- (id)_validLinkRecommendationsForTopic:(id)a0 fromReadingListItems:(id)a1;
- (void)retrieveRecommendationsMatchingTopic:(id)a0 withCompletionHandler:(id /* block */)a1;

@end
