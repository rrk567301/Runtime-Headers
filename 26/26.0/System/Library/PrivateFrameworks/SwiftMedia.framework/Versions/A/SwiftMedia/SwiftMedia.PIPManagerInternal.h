@interface SwiftMedia.PIPManagerInternal : NSObject <PIPViewControllerDelegate> {
    void /* unknown type, empty encoding */ playerController;
    void /* unknown type, empty encoding */ playerLayer;
    void /* unknown type, empty encoding */ onDidExit;
    void /* unknown type, empty encoding */ player;
    void /* unknown type, empty encoding */ config;
    void /* unknown type, empty encoding */ systemPIPViewController;
    void /* unknown type, empty encoding */ pipTargetPlayerLayerViewController;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)pipActionClose:(id)a0;
- (void)pipAction:(id)a0 setPlaying:(BOOL)a1;
- (void)pipAction:(id)a0 skipInterval:(double)a1;
- (void)pipActionRestore:(id)a0;

@end
