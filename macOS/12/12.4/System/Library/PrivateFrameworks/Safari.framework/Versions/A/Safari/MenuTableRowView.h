@interface MenuTableRowView : NSTableRowView

- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (long long)interiorBackgroundStyle;
- (BOOL)isEmphasized;
- (void)_setDefaultKeyViewLoop;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_backgroundRect;
- (BOOL)_needsSelectionBlurBackgroundView;
- (id)_makeSelectionBlurBackgroundView;
- (void)_commonMenuTableRowViewInit;

@end
