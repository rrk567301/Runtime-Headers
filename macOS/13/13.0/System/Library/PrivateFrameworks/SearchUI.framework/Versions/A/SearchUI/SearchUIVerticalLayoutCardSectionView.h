@class SearchUIImageView, NUIContainerBoxView, SearchUILabel, NUIContainerStackView, NSImageView, SFVerticalLayoutCardSection;

@interface SearchUIVerticalLayoutCardSectionView : SearchUICardSectionView

@property (retain, nonatomic) NUIContainerStackView *contentView;
@property (retain, nonatomic) SearchUIImageView *thumbnailView;
@property (retain, nonatomic) SearchUILabel *titleLabel;
@property (retain, nonatomic) SearchUILabel *footnoteLabel;
@property (retain, nonatomic) NUIContainerBoxView *thumbnailOverlayContainer;
@property (retain, nonatomic) NSImageView *gradientImageView;
@property (retain, nonatomic) SearchUILabel *thumbnailOverlayLabel;
@property (retain, nonatomic) SearchUIImageView *thumbnailOverlayImageView;
@property (retain, nonatomic) SFVerticalLayoutCardSection *section;

+ (BOOL)supportsRecyclingForCardSection:(id)a0;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })highlightFrame;
- (id)setupContentView;
- (void)updateWithRowModel:(id)a0;
- (id)highlightReferenceView;
- (void)updateChevronVisible:(BOOL)a0 leaveSpaceForChevron:(BOOL)a1;
- (void)buildThumbnailOverlayContainerIfNecessary;
- (void)updateThumbnailOverlayContainerWithText:(id)a0;

@end
