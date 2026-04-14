@interface GameCenterUI.TappableArtworkView : GameCenterUI.ArtworkView {
    void /* unknown type, empty encoding */ tapGestureRecognizer;
    void /* function */ tapHandler;
}

@property (nonatomic, copy) id /* block */ tapHandler;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)didTap;

@end
