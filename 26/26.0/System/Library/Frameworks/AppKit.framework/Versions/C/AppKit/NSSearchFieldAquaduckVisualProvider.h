@class NSTextFieldBezelConfiguration;

@interface NSSearchFieldAquaduckVisualProvider : NSObject <NSSearchFieldVisualProvider> {
    void /* unknown type, empty encoding */ textFieldCell;
    void /* unknown type, empty encoding */ textField;
    void /* unknown type, empty encoding */ _hostingViewIfExists;
    void /* unknown type, empty encoding */ $__lazy_storage_$_labelView;
    void /* unknown type, empty encoding */ cellOverridesDrawingMethods;
    void /* unknown type, empty encoding */ searchFieldOverridesDrawingMethods;
}

@property (nonatomic, retain) NSTextFieldBezelConfiguration *bezelConfiguration;
@property (nonatomic, readonly) BOOL wantsSeparatedSubviews;
@property (nonatomic, readonly) struct NSEdgeInsets { double x0; double x1; double x2; double x3; } alignmentRectInsets;
@property (nonatomic, readonly) double bezelCellSizeHeightPadding;
@property (nonatomic, readonly) BOOL allowsTextTightening;

- (struct { double x0; double x1; })baselineOffsetsAtSize:(struct CGSize { double x0; double x1; })a0;
- (void)layout;
- (id)init;
- (void).cxx_destruct;
- (void)attachToTextField:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })cancelButtonRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })cellSizeForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 textBoundsSizeProvider:(id /* block */)a1;
- (void)detachFromTextField;
- (void)drawBackgroundWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawFocusRingMaskWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawInteriorWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 textDrawingHandler:(id /* block */)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })drawingRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 textBoundsSizeProvider:(id /* block */)a1;
- (id)initWithTextFieldCell:(id)a0;
- (int)overallBlendModeInAppearance:(id)a0;
- (id)preferredAppearanceForTextFieldStyle:(long long)a0 baseAppearance:(id)a1;
- (void)removeAllSubviews;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })searchButtonRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (int)vibrancyBlendForContextDrawingInAppearanace:(id)a0 outHasVibrancyIncompatability:(BOOL *)a1;

@end
