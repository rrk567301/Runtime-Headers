@interface _TtCC6AppKit42ReplacementAnimationCapableSingleLineLabelP33_CBBF89358F961DC662EFF89579A8C30811SegmentView : NSView {
    void /* unknown type, empty encoding */ segment;
    void /* unknown type, empty encoding */ fragment;
}

@property (nonatomic, readonly) char opaque;
@property (nonatomic, readonly) char flipped;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (char)isFlipped;
- (char)isOpaque;
- (void)viewDidMoveToWindow;

@end
