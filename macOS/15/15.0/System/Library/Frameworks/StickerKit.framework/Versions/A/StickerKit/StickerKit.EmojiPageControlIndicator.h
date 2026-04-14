@interface StickerKit.EmojiPageControlIndicator : StickerKit.FlippedView {
    void /* unknown type, empty encoding */ isCurrent;
    void /* unknown type, empty encoding */ idleColor;
    void /* unknown type, empty encoding */ currentColor;
    void /* unknown type, empty encoding */ waitingColor;
    void /* unknown type, empty encoding */ currentIndex;
    void /* unknown type, empty encoding */ maskLayer;
    void /* unknown type, empty encoding */ lastState;
    void /* unknown type, empty encoding */ progress;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } bounds;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)layout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateLayer;

@end
