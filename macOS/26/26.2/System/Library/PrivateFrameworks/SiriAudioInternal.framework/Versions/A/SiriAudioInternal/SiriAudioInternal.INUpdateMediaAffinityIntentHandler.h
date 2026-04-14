@interface SiriAudioInternal.INUpdateMediaAffinityIntentHandler : NSObject <INUpdateMediaAffinityIntentHandling> {
    void /* unknown type, empty encoding */ mediaRemoteAPIProvider;
    void /* unknown type, empty encoding */ playbackController;
    void /* unknown type, empty encoding */ suggestionsDonationProvider;
}

- (void).cxx_destruct;
- (id)init;
- (void)handleUpdateMediaAffinity:(id)a0 completion:(id /* block */)a1;
- (void)resolveMediaItemsForUpdateMediaAffinity:(id)a0 withCompletion:(id /* block */)a1;

@end
