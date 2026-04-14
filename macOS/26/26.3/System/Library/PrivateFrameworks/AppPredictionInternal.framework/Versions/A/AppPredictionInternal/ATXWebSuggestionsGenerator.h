@class ATXVerticalModelsCache;

@interface ATXWebSuggestionsGenerator : NSObject {
    ATXVerticalModelsCache *_cache;
}

- (id)init;
- (void).cxx_destruct;
- (void)overwriteWebsitePredictionsCacheWithWebsiteString:(id)a0 contextType:(id)a1;
- (id)webpageTitlesAndSubtitles;
- (id)websitePredictionsForContextType:(id)a0 limit:(unsigned long long)a1;
- (id)rootUrlFromUrl:(id)a0;
- (id)dedupedUrlsFromUrls:(id)a0 limit:(unsigned long long)a1;
- (void)refreshWebsitePredictions;
- (id)urlToDatesGivenWebpageHistory:(id)a0;
- (id)webpageHistory;
- (id)webpageTitlesAndSubtitlesGivenWebpageHistory:(id)a0;
- (id)websitePredictionsForAllContexts;

@end
