@class SearchUILabel, SearchUIImageView;

@interface SearchUIMiniCardSectionView : SearchUICardSectionView

@property (retain) SearchUIImageView *imageView;
@property (retain) SearchUILabel *titleLabel;
@property (retain) SearchUILabel *subtitleLabel;

+ (char)supportsRecyclingForCardSection:(id)a0;

- (void).cxx_destruct;
- (id)setupContentView;
- (char)highlightFrameMatchesHighlightView;
- (void)updateImplicitVisibilityForWatchNowCardSection:(id)a0 animated:(char)a1;
- (void)updateWithRowModel:(id)a0;

@end
