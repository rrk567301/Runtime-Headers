@interface AppleIDSetupUI.SignInProgressMicaView : NSView <MicaPlayerDelegate> {
    void /* unknown type, empty encoding */ micaPlayer;
    void /* unknown type, empty encoding */ delegate;
}

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layout;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)micaPlayerDidChangePlaybackTime:(id)a0;

@end
