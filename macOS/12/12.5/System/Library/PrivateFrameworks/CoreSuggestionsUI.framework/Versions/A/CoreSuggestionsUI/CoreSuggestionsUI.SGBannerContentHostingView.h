@interface CoreSuggestionsUI.SGBannerContentHostingView : NSView {
    void /* unknown type, empty encoding */ hostingController;
    void /* unknown type, empty encoding */ banner;
    void /* unknown type, empty encoding */ suggestionStore;
    void /* unknown type, empty encoding */ invalidateBannerConstraints;
}

- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)reload;
- (id)initWithBanner:(id)a0;
- (void)updateWithBanner:(id)a0;
- (void)setSuggestionWithStore:(id)a0;
- (void)invalidateBannerView;
- (double)actionButtonLeadingEdgeOffset;

@end
