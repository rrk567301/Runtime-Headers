@class NSString, NSArray, HMCacheManager;
@protocol HMUserActionSuggestionProvider, HMCache;

@interface HMUserActionPredictionDuetDataSource : NSObject <HMFLogging, HMUserActionPredictionDataSource> {
    HMCacheManager *_cacheManager;
    id<HMUserActionSuggestionProvider> _suggestionProvider;
    NSArray *_lastFetchedPredictions;
    id<HMCache> _predictionCache;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSArray *predictions;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)fetchPredictionsFromBackendWithCompletion:(id /* block */)a0;
- (id)fetchPredictionsFromCache;
- (id)initWithCacheManager:(id)a0;
- (id)initWithCacheManager:(id)a0 suggestionProvider:(id)a1;

@end
