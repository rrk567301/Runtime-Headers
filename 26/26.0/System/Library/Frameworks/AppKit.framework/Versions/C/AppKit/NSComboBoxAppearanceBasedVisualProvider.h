@class NSString, NSTextFieldBezelConfiguration;

@interface NSComboBoxAppearanceBasedVisualProvider : NSTextFieldAppearanceBasedVisualProvider <NSComboBoxVisualProvider>

@property (readonly) double _buttonWidth;
@property (readonly) BOOL wantsSeparatedSubviews;
@property (copy) NSTextFieldBezelConfiguration *bezelConfiguration;
@property (readonly) struct NSEdgeInsets { double x0; double x1; double x2; double x3; } alignmentRectInsets;
@property (readonly) double bezelCellSizeHeightPadding;
@property (readonly) BOOL allowsTextTightening;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)_controlSizeForConfiguration:(id)a0;
+ (id)_coreUIStateForConfiguration:(id)a0 forFocusRing:(BOOL)a1;
+ (BOOL)_isEditingConfiguration:(id)a0;
+ (BOOL)_isEnabledConfiguration:(id)a0;
+ (BOOL)_isInactivePresentationConfiguration:(id)a0;
+ (BOOL)_isInsideFormContextConfiguration:(id)a0;
+ (BOOL)_isMouseInsideConfiguration:(id)a0;
+ (BOOL)_isSelectableConfiguration:(id)a0;
+ (BOOL)_isToolbarConfiguration:(id)a0;
+ (BOOL)_shouldDrawWithRolloverForConfiguration:(id)a0;
+ (struct CGSize { double x0; double x1; })comboBoxCoreUISizeForConfiguration:(id)a0;
+ (id)comboBoxWidgetNameForStyle:(long long)a0;
+ (id)coreUIDrawOptionsForConfiguration:(id)a0 focusRingOnly:(BOOL)a1;

- (double)_buttonHeight;
- (void)_idealBoundsForTextCell:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0 maximumBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1 forCellFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)_idealContentInsets:(struct NSEdgeInsets { double x0; double x1; double x2; double x3; } *)a0 maximumContentInsets:(struct NSEdgeInsets { double x0; double x1; double x2; double x3; } *)a1 forRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (struct CGSize { double x0; double x1; })cellSizeForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 textBoundsSizeProvider:(id /* block */)a1;
- (id)comboBoxBezelConfiguration;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })disclosureButtonRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawBackgroundWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawFocusRingMaskWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawInteriorWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 textDrawingHandler:(id /* block */)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })drawingRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 textBoundsSizeProvider:(id /* block */)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })maximumBoundsForTextCellFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 textBoundsSizeProvider:(id /* block */)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })textContentRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 textBoundsSizeProvider:(id /* block */)a1 needsUpdatedTextInsets:(BOOL)a2 previousContentInsets:(struct NSEdgeInsets { double x0; double x1; double x2; double x3; })a3;
- (int)vibrancyBlendForContextDrawingInAppearanace:(id)a0 outHasVibrancyIncompatability:(BOOL *)a1;

@end
