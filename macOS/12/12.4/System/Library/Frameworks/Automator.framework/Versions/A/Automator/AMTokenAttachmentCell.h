@interface AMTokenAttachmentCell : NSTokenAttachmentCell

+ (void)initialize;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })titleRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })cellSizeForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })drawingRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGPoint { double x0; double x1; })cellBaselineOffset;
- (id)tokenTintColor;
- (id)_tokenBackgroundColor;
- (BOOL)_isPopUpButtonMenuVisible;
- (BOOL)_isInPopUpButton;
- (BOOL)_isInTokenField;
- (id)_tokenBackgroundColorForAMVariablePopUpButton;

@end
