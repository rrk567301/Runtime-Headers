@interface TPKTipContentAnnotationBubbleView : NSView {
    void /* unknown type, empty encoding */ arrowDirection;
    void /* unknown type, empty encoding */ arrowCenter;
    void /* unknown type, empty encoding */ arrowPinning;
    void /* unknown type, empty encoding */ $__lazy_storage_$_maskLayer;
}

@property (nonatomic, readonly) BOOL flipped;

- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isFlipped;

@end
