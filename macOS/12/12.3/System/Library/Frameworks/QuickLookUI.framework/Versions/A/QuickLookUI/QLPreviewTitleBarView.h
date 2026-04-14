@class NSLayoutConstraint;

@interface QLPreviewTitleBarView : NSStackView

@property (retain) NSLayoutConstraint *titleBaselineOffsetConstraint;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)acceptsFirstMouse:(id)a0;
- (double)minimumWidth;
- (void)updateWindowButtons;

@end
