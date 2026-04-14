@interface OFNSView : OFViewProxy {
    BOOL _opaque;
}

@property (nonatomic) BOOL clipsToBounds;
@property (nonatomic) BOOL userInteractionEnabled;

- (void)layoutIfNeeded;
- (void)updateLayer;
- (BOOL)isOpaque;
- (void)layout;
- (BOOL)opaque;
- (void)commonInit;
- (void)setOpaque:(BOOL)a0;
- (BOOL)isFlipped;
- (void)dealloc;
- (void)beginGestureWithEvent:(id)a0;
- (void)endGestureWithEvent:(id)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)wantsDefaultClipping;
- (BOOL)wantsUpdateLayer;

@end
