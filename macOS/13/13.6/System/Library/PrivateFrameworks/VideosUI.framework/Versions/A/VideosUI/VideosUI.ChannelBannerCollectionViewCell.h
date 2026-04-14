@interface VideosUI.ChannelBannerCollectionViewCell : VUIBaseCollectionViewCell <VUINSNavigationBarVisibilityThresholdProviding> {
    void /* unknown type, empty encoding */ layout;
    void /* unknown type, empty encoding */ bannerView;
    void /* unknown type, empty encoding */ bgImageViewModel;
    void /* unknown type, empty encoding */ previousSize;
}

- (double)visibilityThreshold;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (struct CGSize { double x0; double x1; })vui_layoutSubviews:(struct CGSize { double x0; double x1; })a0 computationOnly:(BOOL)a1;

@end
