@class NUIContainerStackView, SearchUILabel, SearchUIImageView;

@interface SearchUINewsCardSectionView : SearchUICardSectionView

@property (retain) NUIContainerStackView *contentView;
@property (retain) SearchUIImageView *thumbnailImageView;
@property (retain) SearchUIImageView *providerImageView;
@property (retain) SearchUILabel *providerLabel;
@property (retain) SearchUILabel *titleLabel;
@property (retain) SearchUILabel *subtitleLabel;

+ (BOOL)supportsRecyclingForCardSection:(id)a0;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })highlightFrame;
- (id)setupContentView;
- (id)highlightReferenceView;
- (double)minThumbnailBottomSpacing;
- (double)providerImageVerticalOffset;
- (double)providerImageVerticalSizeDelta;
- (void)updateWithRowModel:(id)a0;

@end
