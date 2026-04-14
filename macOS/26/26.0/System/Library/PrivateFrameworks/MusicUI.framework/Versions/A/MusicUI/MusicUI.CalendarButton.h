@interface MusicUI.CalendarButton : NSButton {
    void /* unknown type, empty encoding */ symbolImageView;
}

@property (nonatomic, readonly) BOOL flipped;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } focusRingMaskBounds;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layout;
- (BOOL)isFlipped;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)drawFocusRingMask;

@end
