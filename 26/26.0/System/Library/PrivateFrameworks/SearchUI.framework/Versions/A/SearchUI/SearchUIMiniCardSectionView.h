@class SearchUILabel, SearchUIImageView;

@interface SearchUIMiniCardSectionView : SearchUICardSectionView

@property (retain) SearchUIImageView *imageView;
@property (retain) SearchUILabel *titleLabel;
@property (retain) SearchUILabel *subtitleLabel;

+ (id)dragTitleForCardSection:(id)a0;
+ (BOOL)supportsRecyclingForCardSection:(id)a0;

- (void).cxx_destruct;
- (id)setupContentView;
- (BOOL)highlightFrameMatchesHighlightView;
- (void)updateImplicitVisibilityForWatchNowCardSection:(id)a0 animated:(BOOL)a1;
- (void)updateWithRowModel:(id)a0;

@end
