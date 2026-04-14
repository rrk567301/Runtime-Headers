@class SiriSuggestionsStartPageBookmarksDataSource, SiriSuggestionsStartPageReadingListDataSource, SiriSuggestionsStartPageCloudTabsDataSource;

@interface ForYouRecommendationMediator : WBSForYouRecommendationMediator {
    SiriSuggestionsStartPageBookmarksDataSource *_bookmarksDataSource;
    SiriSuggestionsStartPageCloudTabsDataSource *_cloudTabsDataSource;
    SiriSuggestionsStartPageReadingListDataSource *_readingListDataSource;
}

- (void).cxx_destruct;
- (id)dataSources;
- (void)updatedRecommendationsForTopics:(id)a0 withCompletionHandler:(id /* block */)a1;
- (BOOL)ignoreMinimumNumberOfRecommendationsPerTopic;
- (void)loadLinkPresentationMetadataForMessageWithGUID:(id)a0 completionHandler:(id /* block */)a1;
- (void)fetchImageForRecommendation:(id)a0 completionHandler:(id /* block */)a1;
- (id)_loadDemoSuggestions;

@end
