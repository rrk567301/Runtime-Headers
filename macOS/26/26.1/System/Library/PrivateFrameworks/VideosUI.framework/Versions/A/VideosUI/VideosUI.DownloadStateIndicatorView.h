@interface VideosUI.DownloadStateIndicatorView : VUIBaseView {
    void /* unknown type, empty encoding */ imageView;
    void /* unknown type, empty encoding */ progressView;
    void /* unknown type, empty encoding */ viewModel;
    void /* unknown type, empty encoding */ preferredLayout;
    void /* unknown type, empty encoding */ imageObserver;
    void /* unknown type, empty encoding */ progressObserver;
    void /* unknown type, empty encoding */ hasVisibleState;
}

- (id)accessibilityTitle;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)accessibilityChildren;
- (struct CGSize { double x0; double x1; })vui_layoutSubviews:(struct CGSize { double x0; double x1; })a0 computationOnly:(BOOL)a1;

@end
