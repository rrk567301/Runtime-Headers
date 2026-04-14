@interface OFNSView : OFViewProxy {
    BOOL _opaque;
}

@property (nonatomic) BOOL clipsToBounds;
@property (nonatomic) BOOL userInteractionEnabled;

- (void)commonInit;
- (BOOL)isOpaque;
- (void)layoutIfNeeded;
- (BOOL)isFlipped;
- (void)layout;
- (void)updateLayer;
- (BOOL)opaque;
- (void)dealloc;
- (void)setOpaque:(BOOL)a0;
- (void)beginGestureWithEvent:(id)a0;
- (void)endGestureWithEvent:(id)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)wantsDefaultClipping;
- (BOOL)wantsUpdateLayer;

@end
