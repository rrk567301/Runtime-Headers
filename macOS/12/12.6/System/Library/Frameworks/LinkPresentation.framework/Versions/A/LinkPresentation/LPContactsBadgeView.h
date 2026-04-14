@class LPContactsBadgeStyle;

@interface LPContactsBadgeView : LPComponentView {
    LPContactsBadgeStyle *_style;
}

- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithHost:(id)a0;
- (void)layoutComponentView;
- (id)initWithHost:(id)a0 contacts:(id)a1 highlighted:(BOOL)a2 style:(id)a3;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })layoutExclusionRect;

@end
