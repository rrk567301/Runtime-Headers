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
@property (nonatomic) char useAppIconMetrics;

+ (char)supportsRecyclingForCardSection:(id)a0;

- (void).cxx_destruct;
- (void)viewDidChangeEffectiveAppearance;
- (void)viewDidMoveToWindow;
- (void)containerView:(id)a0 willMeasureArrangedSubviewsFittingSize:(struct CGSize { double x0; double x1; })a1 forReason:(long long)a2;
- (void)containerViewDidLayoutArrangedSubviews:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })highlightFrame;
- (id)setupContentView;
- (void)tlk_updateForAppearance:(id)a0;
- (void)buildThumbnailOverlayContainerIfNecessary;
- (id)highlightReferenceView;
- (void)updateChevronVisible:(char)a0 leaveSpaceForChevron:(char)a1;
- (void)updateThumbnailOverlayContainerWithText:(id)a0;
- (void)updateWithRowModel:(id)a0;

@end
