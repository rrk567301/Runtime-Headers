@class NSString, NSAttributedString, NSFont;

@interface NSFormCell : NSActionCell {
    double _titleWidth;
    double _titleEndPoint;
    double _preferredTextFieldWidth;
    id _titleCell;
}

@property double titleWidth;
@property (copy) NSString *title;
@property (retain) NSFont *titleFont;
@property (readonly, getter=isOpaque) BOOL opaque;
@property (copy) NSString *placeholderString;
@property (copy) NSAttributedString *placeholderAttributedString;
@property long long titleAlignment;
@property long long titleBaseWritingDirection;
@property double preferredTextFieldWidth;

+ (void)initialize;

- (void)dealloc;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setEnabled:(BOOL)a0;
- (void)setAttributedTitle:(id)a0;
- (id)attributedTitle;
- (void)setUserInterfaceLayoutDirection:(long long)a0;
- (BOOL)acceptsFirstResponder;
- (id)accessibilityParameterizedAttributeNames;
- (id)accessibilityAttributeNames;
- (id)accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0;
- (id)accessibilityActionNames;
- (id)accessibilityActionDescription:(id)a0;
- (void)accessibilityPerformAction:(id)a0;
- (id)accessibilityChildrenAttribute;
- (id)accessibilityChildrenInNavigationOrderAttribute;
- (BOOL)accessibilityIsChildrenAttributeSettable;
- (id)accessibilityHelpStringForChild:(id)a0;
- (BOOL)accessibilityIsChildFocusable:(id)a0;
- (void)setTitleWithMnemonic:(id)a0;
- (id)accessibilityTitleUIElementAttribute;
- (BOOL)accessibilityIsTitleUIElementAttributeSettable;
- (id)accessibilityPositionOfChild:(id)a0;
- (id)accessibilitySizeOfChild:(id)a0;
- (struct CGSize { double x0; double x1; })cellSizeForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initTextCell:(id)a0;
- (void)drawInteriorWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1;
- (void)drawWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })drawingRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)trackMouse:(id)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 ofView:(id)a2 untilMouseUp:(BOOL)a3;
- (id)_selectOrEdit:(const struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0 inView:(id)a1 target:(id)a2 editor:(id)a3 event:(id)a4 start:(long long)a5 end:(long long)a6;
- (void)resetCursorRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1;
- (void)_updateFormAlignmentForUserInterfaceLayoutDirection;
- (double)titleWidth:(struct CGSize { double x0; double x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_titleRectForCellFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_layoutTitleRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0 interiorChromeRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1 interiorTextRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a2 withFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 inView:(id)a4;
- (id)accessibilityPlaceholderValueAttribute;
- (BOOL)accessibilityIsPlaceholderValueAttributeSettable;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_accessibilityTitleRect;

@end
