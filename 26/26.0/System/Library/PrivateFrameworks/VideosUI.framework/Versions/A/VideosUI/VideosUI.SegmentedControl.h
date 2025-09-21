@interface VideosUI.SegmentedControl : NSSegmentedControl {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ handleActionForHostedView;
    void /* unknown type, empty encoding */ defaultSegmentPadding;
    void /* unknown type, empty encoding */ defaultSegmentWidth;
}

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)segmentSelectionChanged;
- (struct CGSize { double x0; double x1; })vui_sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
