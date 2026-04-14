@class NSLayoutConstraint, NSTextField;

@interface PRSTwoColumnsSliceView : PRSColumnsSliceView

@property NSTextField *columnOneTextField;
@property NSTextField *columnTwoTextField;
@property NSLayoutConstraint *firstColumnWidth;
@property NSLayoutConstraint *columnToViewTopSpacing;
@property NSLayoutConstraint *columnTitleToViewTopSpacing;
@property NSLayoutConstraint *columnToViewBottomSpacing;

- (unsigned long long)columnCount;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isAccessibilityElement;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)columnTextFieldAtIndex:(unsigned long long)a0;
- (void)setConstraintsForFirstColumnWidth:(unsigned long long)a0 columnToViewTopSpacing:(unsigned long long)a1 columnToViewBottomSpacing:(unsigned long long)a2;

@end
