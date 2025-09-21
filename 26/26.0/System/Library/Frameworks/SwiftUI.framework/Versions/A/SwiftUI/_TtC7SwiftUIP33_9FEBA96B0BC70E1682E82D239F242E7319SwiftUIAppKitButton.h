@interface _TtC7SwiftUIP33_9FEBA96B0BC70E1682E82D239F242E7319SwiftUIAppKitButton : NSButton {
    void /* unknown type, empty encoding */ viewType;
    void /* unknown type, empty encoding */ configuration;
    void /* unknown type, empty encoding */ repeatTiming;
    void /* unknown type, empty encoding */ repeatState;
    void /* unknown type, empty encoding */ customAcceptsFirstMouse;
}

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)viewDidMoveToWindow;
- (id)initWithCoder:(id)a0;
- (id)menuForEvent:(id)a0;
- (void).cxx_destruct;
- (BOOL)acceptsFirstMouse:(id)a0;
- (id)designatedFocusRingView;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (void)didPressButton:(id)a0;
- (void)didCancelButton:(id)a0;
- (void)didExitButton:(id)a0;
- (void)didReenterButton:(id)a0;
- (void)didReleaseButton:(id)a0;

@end
