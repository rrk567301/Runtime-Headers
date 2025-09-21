@class NSString, SFImage, NUIContainerBoxView, NSVisualEffectView, SearchUILabel, NUIContainerStackView, SFHeroCardSection, SearchUIButtonItemStackView, SearchUIImageView;

@interface SearchUIHeroCardSectionView : SearchUICardSectionView <TLKImageViewDelegate, NUIContainerViewDelegate>

@property (retain) SearchUIImageView *backgroundImageView;
@property (retain) SearchUIImageView *thumbnailImageView;
@property (retain) SearchUIImageView *punchoutIndicatorImageView;
@property (retain) NUIContainerStackView *thumbnailAndLabelsStackView;
@property (retain) NUIContainerStackView *labelsStackView;
@property (retain) SearchUILabel *titleLabel;
@property (retain) SearchUILabel *subtitleLabel;
@property (retain) NUIContainerStackView *containerStackView;
@property (retain) NUIContainerStackView *buttonStackView;
@property (retain) SFImage *currentImage;
@property (readonly, nonatomic) SFHeroCardSection *section;
@property (retain) NUIContainerBoxView *contentView;
@property (retain, nonatomic) SearchUIButtonItemStackView *buttonItemStackView;
@property (retain) NSVisualEffectView *punchoutIndicatorBackgroundBlurView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (int)defaultSeparatorStyleForRowModel:(id)a0;
+ (char)fillsBackgroundWithContentForRowModel:(id)a0;
+ (char)showsBackgroundImageViewForRowModel:(id)a0;
+ (char)supportsRecyclingForCardSection:(id)a0;

- (void).cxx_destruct;
- (void)buttonPressed:(id)a0;
- (struct CGSize { double x0; double x1; })containerView:(id)a0 systemLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a1 forArrangedSubview:(id)a2;
- (char)hasBackground;
- (void)didFailToLoadImage;
- (void)didUpdateWithImage:(id)a0;
- (id)setupContentView;
- (id)highlightReferenceView;
- (id)initWithRowModel:(id)a0 feedbackDelegate:(id)a1;
- (char)showBackgroundImageView;
- (void)showGradientAnimated:(char)a0;
- (void)updateButtonsForCardSection:(id)a0;
- (void)updatePunchoutIconForRowModel:(id)a0;
- (void)updatePunchoutImageWithBundleIdentifier:(id)a0;
- (void)updateWithButtonViews:(id)a0 visible:(char)a1 addBackground:(char)a2 animate:(char)a3;
- (void)updateWithPunchoutImage:(id)a0;
- (void)updateWithRowModel:(id)a0;

@end
