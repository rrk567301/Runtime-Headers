@class NSLayoutConstraint;

@interface QLPreviewTitleBarView : NSStackView

@property (retain) NSLayoutConstraint *titleBaselineOffsetConstraint;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)minimumWidth;
- (void).cxx_destruct;
- (BOOL)acceptsFirstMouse:(id)a0;
- (void)updateWindowButtons;

@end
