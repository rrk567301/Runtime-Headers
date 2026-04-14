@interface VideosUI.RoomBannerCollectionViewCell : VUIBaseCollectionViewCell <VUINSNavigationBarVisibilityThresholdProviding> {
    void /* unknown type, empty encoding */ imageViewModel;
    void /* unknown type, empty encoding */ roomBannerLayout;
    void /* unknown type, empty encoding */ gradientView;
    void /* unknown type, empty encoding */ gradientLayer;
    void /* unknown type, empty encoding */ bannerImage;
    void /* unknown type, empty encoding */ descriptionView;
}

- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (double)visibilityThreshold;
- (struct CGSize { double x0; double x1; })vui_layoutSubviews:(struct CGSize { double x0; double x1; })a0 computationOnly:(BOOL)a1;

@end
