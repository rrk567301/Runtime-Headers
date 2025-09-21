@interface SiriVideoIntents.VideoPlaybackMonitor : SwiftNativeNSObject <MRNowPlayingControllerDelegate> {
    void /* unknown type, empty encoding */ clients;
    void /* unknown type, empty encoding */ nowPlayingController;
    void /* unknown type, empty encoding */ currentPlaybackState;
    void /* unknown type, empty encoding */ activeAppBundle;
    void /* unknown type, empty encoding */ isObservingController;
}

- (void)controller:(id)a0 playerPathDidChange:(id)a1;
- (void)controller:(id)a0 didLoadResponse:(id)a1;
- (void)controllerWillReloadForInvalidation:(id)a0;
- (void)controller:(id)a0 playbackStateDidChangeFrom:(unsigned int)a1 to:(unsigned int)a2;
- (id)init;
- (void)controller:(id)a0 didFailWithError:(id)a1;

@end
