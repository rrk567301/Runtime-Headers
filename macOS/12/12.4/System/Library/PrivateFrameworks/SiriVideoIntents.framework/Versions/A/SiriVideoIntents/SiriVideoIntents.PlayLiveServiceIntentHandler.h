@class PlayLiveServiceIntent, PlayLiveServiceLiveServiceResolutionResult, PlayLiveServiceIntentResponse;

@interface SiriVideoIntents.PlayLiveServiceIntentHandler : NSObject <PlayLiveServiceIntentHandling> {
    void /* unknown type, empty encoding */ liveServiceResolver;
    void /* unknown type, empty encoding */ analyticsService;
}

- (id)init;
- (void).cxx_destruct;
- (void)resolveLiveServiceForPlayLiveService:(PlayLiveServiceIntent *)a0 withCompletion:(void (^)(PlayLiveServiceLiveServiceResolutionResult *))a1;
- (void)confirmPlayLiveService:(PlayLiveServiceIntent *)a0 completion:(void (^)(PlayLiveServiceIntentResponse *))a1;
- (void)handlePlayLiveService:(PlayLiveServiceIntent *)a0 completion:(void (^)(PlayLiveServiceIntentResponse *))a1;

@end
