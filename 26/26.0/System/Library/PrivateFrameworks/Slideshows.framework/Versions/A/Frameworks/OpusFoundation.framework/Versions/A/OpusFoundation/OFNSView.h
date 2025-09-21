@interface OFNSView : OFViewProxy {
    BOOL _opaque;
}

@property (nonatomic) BOOL clipsToBounds;
@property (nonatomic) BOOL userInteractionEnabled;

- (void)setOpaque:(BOOL)a0;
- (BOOL)isOpaque;
- (BOOL)opaque;
- (void)updateLayer;
- (void)commonInit;
- (void)layoutIfNeeded;
- (void)dealloc;
- (void)layout;
- (BOOL)isFlipped;
- (void)beginGestureWithEvent:(id)a0;
- (void)endGestureWithEvent:(id)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)wantsDefaultClipping;
- (BOOL)wantsUpdateLayer;

@end
