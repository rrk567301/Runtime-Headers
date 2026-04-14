@class RemoveFromWatchListIntent, RemoveFromWatchListIntentResponse, RemoveFromWatchListContentResolutionResult;

@interface SiriVideoIntents.RemoveFromWatchListIntentHandler : NSObject <RemoveFromWatchListIntentHandling> {
    void /* unknown type, empty encoding */ contentResolver;
    void /* unknown type, empty encoding */ watchListService;
    void /* unknown type, empty encoding */ analyticsService;
}

- (id)init;
- (void).cxx_destruct;
- (void)resolveContentForRemoveFromWatchList:(RemoveFromWatchListIntent *)a0 withCompletion:(void (^)(RemoveFromWatchListContentResolutionResult *))a1;
- (void)confirmRemoveFromWatchList:(RemoveFromWatchListIntent *)a0 completion:(void (^)(RemoveFromWatchListIntentResponse *))a1;
- (void)handleRemoveFromWatchList:(RemoveFromWatchListIntent *)a0 completion:(void (^)(RemoveFromWatchListIntentResponse *))a1;

@end
