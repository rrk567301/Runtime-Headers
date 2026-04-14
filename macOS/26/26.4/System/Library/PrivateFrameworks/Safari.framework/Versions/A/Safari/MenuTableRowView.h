@interface MenuTableRowView : NSTableRowView

@property (nonatomic) BOOL usesInactiveSelectionAppearance;

- (BOOL)isEmphasized;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_backgroundRect;
- (id)_makeSelectionBlurBackgroundView;
- (BOOL)_needsSelectionBlurBackgroundView;
- (void)_setDefaultKeyViewLoop;
- (long long)interiorBackgroundStyle;
- (void)_commonMenuTableRowViewInit;

@end
