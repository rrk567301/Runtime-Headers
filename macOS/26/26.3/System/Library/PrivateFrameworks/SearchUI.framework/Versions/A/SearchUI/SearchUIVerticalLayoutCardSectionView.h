@class NSTrackingArea, SFVerticalLayoutCardSection, NUIContainerBoxView, SearchUILabel, NUIContainerStackView, NSWindow, NSImageView, SearchUIImageView;

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
@property (nonatomic) BOOL useAppIconMetrics;
@property (nonatomic) BOOL useToolTips;
@property (retain, nonatomic) NSWindow *tooltipWindow;
@property (retain, nonatomic) NSTrackingArea *mouseTrackingArea;

+ (id)dragTitleForCardSection:(id)a0;
+ (BOOL)supportsRecyclingForCardSection:(id)a0;

- (void)mouseExited:(id)a0;
- (void)mouseEntered:(id)a0;
- (void)viewDidChangeEffectiveAppearance;
- (void)tlk_updateForAppearance:(id)a0;
- (void)viewDidMoveToWindow;
- (void)updateTrackingAreas;
- (void).cxx_destruct;
- (void)containerView:(id)a0 willMeasureArrangedSubviewsFittingSize:(struct CGSize { double x0; double x1; })a1 forReason:(long long)a2;
- (void)containerViewDidLayoutArrangedSubviews:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })highlightFrame;
- (id)setupContentView;
- (void)buildThumbnailOverlayContainerIfNecessary;
- (void)dismissToolTip;
- (double)highlightFrameCornerRadius;
- (id)highlightReferenceView;
- (void)showToolTip;
- (void)updateChevronVisible:(BOOL)a0 leaveSpaceForChevron:(BOOL)a1;
- (void)updateThumbnailOverlayContainerWithText:(id)a0;
- (void)updateWithRowModel:(id)a0;

@end
