@interface WBSForYouRecommendationMediatorDataSource : NSObject

- (void)notifyContentsDidChangeFromSource:(unsigned long long)a0;
- (void)emitStartRetrievingRecommendationsPerformanceMarker;
- (void)retrieveRecommendationsMatchingTopic:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)recommendationsWithTopics:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)notifyImageWasUpdatedForRecommendation:(id)a0;

@end
