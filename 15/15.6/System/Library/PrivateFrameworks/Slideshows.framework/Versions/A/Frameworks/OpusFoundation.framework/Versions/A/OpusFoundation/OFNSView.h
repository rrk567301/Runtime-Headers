@interface OFNSView : OFViewProxy {
    char _opaque;
}

@property (nonatomic) char clipsToBounds;
@property (nonatomic) char userInteractionEnabled;

- (void)dealloc;
- (void)layout;
- (void)beginGestureWithEvent:(id)a0;
- (void)commonInit;
- (void)endGestureWithEvent:(id)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (char)isFlipped;
- (char)isOpaque;
- (void)layoutIfNeeded;
- (void)setOpaque:(char)a0;
- (void)updateLayer;
- (char)wantsDefaultClipping;
- (char)wantsUpdateLayer;
- (char)opaque;

@end
