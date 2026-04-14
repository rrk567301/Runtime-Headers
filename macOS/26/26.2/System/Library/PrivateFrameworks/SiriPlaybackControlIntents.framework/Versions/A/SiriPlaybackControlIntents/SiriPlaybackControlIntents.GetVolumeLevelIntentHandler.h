@interface SiriPlaybackControlIntents.GetVolumeLevelIntentHandler : NSObject <GetVolumeLevelIntentHandling> {
    void /* unknown type, empty encoding */ deviceSelector;
    void /* unknown type, empty encoding */ accessoryVolumeController;
    void /* unknown type, empty encoding */ playbackController;
    void /* unknown type, empty encoding */ deviceState;
    void /* unknown type, empty encoding */ aceServiceHelper;
    void /* unknown type, empty encoding */ featureFlagProvider;
}

- (void).cxx_destruct;
- (id)init;
- (void)confirmGetVolumeLevel:(id)a0 completion:(id /* block */)a1;
- (void)handleGetVolumeLevel:(id)a0 completion:(id /* block */)a1;
- (void)resolveDeviceForGetVolumeLevel:(id)a0 withCompletion:(id /* block */)a1;

@end
