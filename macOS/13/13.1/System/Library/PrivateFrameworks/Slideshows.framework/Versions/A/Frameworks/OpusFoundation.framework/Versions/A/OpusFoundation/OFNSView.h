@interface OFNSView : OFViewProxy {
    BOOL _opaque;
}

@property (nonatomic) BOOL clipsToBounds;
@property (nonatomic) BOOL userInteractionEnabled;

- (void)dealloc;
- (void)layout;
- (BOOL)isOpaque;
- (BOOL)wantsUpdateLayer;
- (void)updateLayer;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (void)setOpaque:(BOOL)a0;
- (BOOL)opaque;
- (BOOL)isFlipped;
- (void)beginGestureWithEvent:(id)a0;
- (void)endGestureWithEvent:(id)a0;
- (void)layoutIfNeeded;
- (BOOL)wantsDefaultClipping;
- (void)commonInit;

@end
