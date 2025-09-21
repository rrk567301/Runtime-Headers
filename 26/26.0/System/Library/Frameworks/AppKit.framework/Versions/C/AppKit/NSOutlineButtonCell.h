@class NSOutlineView;

@interface NSOutlineButtonCell : NSButtonCell

@property (nonatomic) BOOL isSourceList;
@property (nonatomic) BOOL isGroupRow;
@property (nonatomic) NSOutlineView *outlineView;
@property double cellViewBaselineOffsetFromTop;

- (void)setState:(long long)a0;
- (void)setHighlighted:(BOOL)a0;
- (void)_updateTitle;
- (void)setBackgroundStyle:(long long)a0;
- (id)_textAttributes;
- (void)_addLegacySourceListAttributes:(id)a0 emphasizedBackground:(BOOL)a1;
- (void)_addSourceListAttributes:(id)a0 emphasizedBackground:(BOOL)a1;
- (id)_buttonCellAccessibilityRoleAttribute;
- (BOOL)_hasRolloverAppearance;
- (id)_interiorBackgroundFillColor;
- (BOOL)_shouldUseStyledTextInView:(id)a0 withBackgroundStyle:(long long)a1;
- (id)_titleString;
- (id)accessibilityAttributeNames;
- (id)accessibilityAttributeValue:(id)a0;
- (struct CGSize { double x0; double x1; })cellSizeForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })imageRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
