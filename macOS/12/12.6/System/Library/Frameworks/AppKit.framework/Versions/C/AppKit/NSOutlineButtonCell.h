@class NSOutlineView;

@interface NSOutlineButtonCell : NSButtonCell

@property (nonatomic) BOOL isSourceList;
@property (nonatomic) BOOL isGroupRow;
@property (nonatomic) NSOutlineView *outlineView;
@property double cellViewBaselineOffsetFromTop;

- (void)setState:(long long)a0;
- (void)setHighlighted:(BOOL)a0;
- (id)accessibilityAttributeNames;
- (id)accessibilityAttributeValue:(id)a0;
- (struct CGSize { double x0; double x1; })cellSizeForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setBackgroundStyle:(long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })imageRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_textAttributes;
- (id)_interiorBackgroundFillColor;
- (BOOL)_shouldUseStyledTextInView:(id)a0;
- (BOOL)_hasRolloverContentArt;
- (id)_buttonCellAccessibilityRoleAttribute;
- (void)_addSourceListAttributes:(id)a0 emphasizedBackground:(BOOL)a1;
- (void)_addLegacySourceListAttributes:(id)a0 emphasizedBackground:(BOOL)a1;
- (id)_titleString;
- (void)_updateTitle;

@end
