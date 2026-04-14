@interface ChronoCore.NowPlayingControllerDelegate : NSObject <MRNowPlayingControllerDelegate> {
    void /* unknown type, empty encoding */ owner;
}

- (void)controllerWillReloadForInvalidation:(id)a0;
- (void)controller:(id)a0 didLoadResponse:(id)a1;
- (void)controller:(id)a0 playbackStateDidChangeFrom:(unsigned int)a1 to:(unsigned int)a2;
- (void).cxx_destruct;
- (void)controller:(id)a0 clientPropertiesDidChangeFrom:(id)a1 to:(id)a2;
- (void)controller:(id)a0 didFailWithError:(id)a1;
- (id)init;

@end
