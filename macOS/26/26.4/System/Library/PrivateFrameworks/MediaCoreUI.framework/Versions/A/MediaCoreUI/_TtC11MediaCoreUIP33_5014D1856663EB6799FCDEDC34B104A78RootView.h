@interface _TtC11MediaCoreUIP33_5014D1856663EB6799FCDEDC34B104A78RootView : NSView {
    void /* unknown type, empty encoding */ viewModel;
    void /* unknown type, empty encoding */ subscriptions;
    void /* unknown type, empty encoding */ windowSubscriptions;
    void /* unknown type, empty encoding */ backdropView;
    void /* unknown type, empty encoding */ solidBackgroundView;
    void /* unknown type, empty encoding */ backdropIntensity;
    void /* unknown type, empty encoding */ isTransitioning;
}

@property (nonatomic, readonly) BOOL mouseDownCanMoveWindow;

- (void)addSubview:(id)a0;
- (void)layout;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)viewDidMoveToWindow;

@end
