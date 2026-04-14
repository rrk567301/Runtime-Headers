@class RemoveFromWatchListIntent, RemoveFromWatchListContentResolutionResult, RemoveFromWatchListIntentResponse;

@interface SiriVideoIntents.RemoveFromWatchListIntentHandler : NSObject <RemoveFromWatchListIntentHandling> {
    void /* unknown type, empty encoding */ contentResolver;
    void /* unknown type, empty encoding */ watchListService;
    void /* unknown type, empty encoding */ analyticsService;
    void /* unknown type, empty encoding */ featureFlagService;
}

- (void).cxx_destruct;
- (id)init;
- (void)confirmRemoveFromWatchList:(RemoveFromWatchListIntent *)a0 completion:(void (^)(RemoveFromWatchListIntentResponse *))a1;
- (void)handleRemoveFromWatchList:(RemoveFromWatchListIntent *)a0 completion:(void (^)(RemoveFromWatchListIntentResponse *))a1;
- (void)resolveContentForRemoveFromWatchList:(RemoveFromWatchListIntent *)a0 withCompletion:(void (^)(RemoveFromWatchListContentResolutionResult *))a1;

@end
