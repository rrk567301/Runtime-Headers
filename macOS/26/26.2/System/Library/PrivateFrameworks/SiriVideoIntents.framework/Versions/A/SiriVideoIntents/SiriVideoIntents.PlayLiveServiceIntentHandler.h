@class PlayLiveServiceIntent, PlayLiveServiceIntentResponse, PlayLiveServiceLiveServiceResolutionResult;

@interface SiriVideoIntents.PlayLiveServiceIntentHandler : NSObject <PlayLiveServiceIntentHandling> {
    void /* unknown type, empty encoding */ liveServiceResolver;
    void /* unknown type, empty encoding */ analyticsService;
    void /* unknown type, empty encoding */ tvProfileSelector;
}

- (void).cxx_destruct;
- (id)init;
- (void)confirmPlayLiveService:(PlayLiveServiceIntent *)a0 completion:(void (^)(PlayLiveServiceIntentResponse *))a1;
- (void)handlePlayLiveService:(PlayLiveServiceIntent *)a0 completion:(void (^)(PlayLiveServiceIntentResponse *))a1;
- (void)resolveLiveServiceForPlayLiveService:(PlayLiveServiceIntent *)a0 withCompletion:(void (^)(PlayLiveServiceLiveServiceResolutionResult *))a1;

@end
