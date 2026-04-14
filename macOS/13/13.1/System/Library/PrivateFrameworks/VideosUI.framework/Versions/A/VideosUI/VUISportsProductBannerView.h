@class NSArray, VUILabel, SLAttributionView, NSView;

@interface VUISportsProductBannerView : VUIBaseView

@property (retain, nonatomic) VUILabel *titleLabel;
@property (retain, nonatomic) NSArray *rowLabels;
@property (retain, nonatomic) NSArray *scoreLabels;
@property (retain, nonatomic) NSArray *descriptionLabels;
@property (retain, nonatomic) VUILabel *footerLabel;
@property (retain, nonatomic) NSArray *buttonViews;
@property (retain, nonatomic) SLAttributionView *attributionView;
@property (retain, nonatomic) VUILabel *availabilityTextView;
@property (retain, nonatomic) NSView *availabilityImageView;
@property (nonatomic) double availabilityImageViewLeftMargin;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })vui_layoutSubviews:(struct CGSize { double x0; double x1; })a0 computationOnly:(BOOL)a1;
- (void)_tvOS_OSX_layoutSubviewsWithSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })_availabilityImageSizeWithSize:(struct CGSize { double x0; double x1; })a0;
- (double)_availabilityImageViewLeftMargin;
- (double)_totalMaxScoreWidthWithAvailableWidth:(double)a0;
- (double)_maxScoreWidthForColumn:(unsigned long long)a0 availableWidth:(double)a1;

@end
