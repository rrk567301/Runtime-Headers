@interface CoreAudioKit.CocoaSlider : NSSlider {
    void /* unknown type, empty encoding */ onMouseDown;
    void /* unknown type, empty encoding */ onMouseUp;
    void /* unknown type, empty encoding */ initialValue;
}

- (void)mouseDown:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)sendAction:(SEL)a0 to:(id)a1;

@end
