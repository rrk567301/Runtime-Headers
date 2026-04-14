@interface MusicUI.HoverableButton : NSButton {
    void /* unknown type, empty encoding */ isHovered;
    void /* unknown type, empty encoding */ trackingArea;
    void /* unknown type, empty encoding */ onResponderStatusDidChangeEventSubscription;
}

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void).cxx_destruct;

@end
