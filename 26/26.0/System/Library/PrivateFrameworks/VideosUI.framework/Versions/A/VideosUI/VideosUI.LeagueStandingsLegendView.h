@interface VideosUI.LeagueStandingsLegendView : VUIBaseView {
    void /* unknown type, empty encoding */ viewModel;
    void /* unknown type, empty encoding */ legendLayout;
    void /* unknown type, empty encoding */ stackItems;
    void /* unknown type, empty encoding */ containerWidth;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layout;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })vui_layoutSubviews:(struct CGSize { double x0; double x1; })a0 computationOnly:(BOOL)a1;

@end
