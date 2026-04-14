@class SearchUILabel, SearchUIImageView;

@interface SearchUIMiniCardSectionView : SearchUICardSectionView

@property (retain) SearchUIImageView *imageView;
@property (retain) SearchUILabel *titleLabel;
@property (retain) SearchUILabel *subtitleLabel;

+ (BOOL)supportsRecyclingForCardSection:(id)a0;

- (void).cxx_destruct;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })layoutMargins;
- (id)setupContentView;
- (void)updateWithRowModel:(id)a0;
- (id)highlightReferenceView;
- (BOOL)highlightFrameMatchesHighlightView;
- (void)updateImplicitVisibilityForWatchNowCardSection:(id)a0 animated:(BOOL)a1;

@end
