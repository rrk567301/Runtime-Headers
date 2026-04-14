@class NSTextFieldCell, NSTextField, _NSBoxCustomView, NSView, NSTextFieldBezelConfiguration, NSString, NSTextFieldBezelView;

@interface NSTextFieldAppearanceBasedVisualProvider : NSObject <NSTextFieldVisualProvider> {
    NSTextFieldBezelConfiguration *_bezelConfiguration;
    NSTextFieldBezelView *_bezelView;
    _NSBoxCustomView *_borderView;
    BOOL _cellOverridesDrawingMethods;
    BOOL _textFieldOverridesDrawingMethods;
}

@property (weak, nonatomic) NSTextField *textField;
@property (weak, nonatomic) NSTextFieldCell *textFieldCell;
@property (retain, nonatomic) NSTextFieldBezelView *bezelView;
@property (retain, nonatomic) _NSBoxCustomView *borderView;
@property (readonly) NSView *backgroundView;
@property (retain) NSView *labelView;
@property (readonly) BOOL usesSubviews;
@property (readonly) BOOL wantsSeparatedSubviews;
@property (copy) NSTextFieldBezelConfiguration *bezelConfiguration;
@property (readonly) struct NSEdgeInsets { double x0; double x1; double x2; double x3; } alignmentRectInsets;
@property (readonly) double bezelCellSizeHeightPadding;
@property (readonly) BOOL allowsTextTightening;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createLabelView;
+ (double)bezelCellSizeHeightPaddingForStyle:(long long)a0 font:(id)a1;
+ (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })coreUIContentRectInsetsForConfiguration:(id)a0;
+ (id)coreUIDrawOptionsForConfiguration:(id)a0;
+ (struct CGSize { double x0; double x1; })coreUISizeForConfiguration:(id)a0;
+ (id)coreUIStateValueForInteractionState:(long long)a0;
+ (id)coreUIVariantForStyle:(long long)a0;
+ (id)coreUIWidgetNameForStyle:(long long)a0;
+ (Class)textFieldCellClassForOverrideCheck;
+ (Class)textFieldClassForOverrideCheck;
+ (BOOL)wantsSeparatedSubviewsWithBezelConfiguration:(id)a0;
+ (id)widgetContentStyleForTextFieldStyle:(long long)a0;

- (struct { double x0; double x1; })baselineOffsetsAtSize:(struct CGSize { double x0; double x1; })a0;
- (void)layout;
- (void).cxx_destruct;
- (void)updateLabelView;
- (BOOL)wantsBorderView;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })adjustedFrameUsingSquareBezelHacks:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)attachToTextField:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bezelRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
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
- (BOOL)shouldAdjustDrawingRectUsingSquareBezelHacks;
- (int)vibrancyBlendForContextDrawingInAppearanace:(id)a0 outHasVibrancyIncompatability:(BOOL *)a1;
- (int)vibrancyBlendInAppearance:(id)a0 outBezelBlend:(int *)a1 outTitleBlend:(int *)a2;
- (BOOL)wantsBezelView;

@end
