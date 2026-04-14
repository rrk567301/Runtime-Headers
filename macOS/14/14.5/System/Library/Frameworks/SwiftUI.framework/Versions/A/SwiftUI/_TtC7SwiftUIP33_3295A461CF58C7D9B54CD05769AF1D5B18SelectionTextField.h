@interface _TtC7SwiftUIP33_3295A461CF58C7D9B54CD05769AF1D5B18SelectionTextField : NSTextField {
    void /* unknown type, empty encoding */ textInsets;
}

@property (class, nonatomic) Class cellClass;

@property (nonatomic, readonly) struct NSEdgeInsets { double x0; double x1; double x2; double x3; } alignmentRectInsets;
@property (nonatomic, readonly) BOOL wantsUpdateLayer;
@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

- (id)initWithCoder:(id)a0;
- (BOOL)_performMultiPassIntrinsicSize;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)makeBackingLayer;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)updateLayer;

@end
