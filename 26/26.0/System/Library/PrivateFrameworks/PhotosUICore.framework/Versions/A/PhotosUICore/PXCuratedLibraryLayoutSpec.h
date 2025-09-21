@class PXExtendedImageConfiguration, PXAssetsSectionLayoutSpec, NSColor, PXYearsLayoutMetrics, PXCuratedLibrarySectionHeaderLayoutSpec, PXMonthsLayoutMetrics, NSNumber;

@interface PXCuratedLibraryLayoutSpec : PXFeatureSpec <PXAssetsSectionLayoutSpecConfiguratorSource> {
    double _estimatedSpacingBetweenMonths;
    double _spacingBetweenYears;
    double _spacingBetweenMonths;
    double _spacingBetweenDays;
}

@property (readonly, nonatomic) long long variant;
@property (readonly, nonatomic) long long axis;
@property (readonly, nonatomic) PXCuratedLibrarySectionHeaderLayoutSpec *yearsTopHeaderSpec;
@property (readonly, nonatomic) PXCuratedLibrarySectionHeaderLayoutSpec *monthsTopHeaderSpec;
@property (readonly, nonatomic) PXCuratedLibrarySectionHeaderLayoutSpec *daysTopHeaderSpec;
@property (readonly, nonatomic) PXCuratedLibrarySectionHeaderLayoutSpec *allPhotosFloatingHeaderSpec;
@property (readonly, nonatomic) PXAssetsSectionLayoutSpec *sectionLayoutSpec;
@property (readonly, nonatomic) unsigned long long layoutStyle;
@property (readonly, nonatomic) PXYearsLayoutMetrics *yearsLayoutMetrics;
@property (readonly, nonatomic) PXMonthsLayoutMetrics *monthsLayoutMetrics;
@property (readonly, nonatomic) double spacingBetweenSafeAreaTopAndFirstYearCard;
@property (readonly, nonatomic) double spacingBetweenSafeAreaTopAndFirstMonthTitle;
@property (readonly, nonatomic) double spacingBetweenHeaderLastBaselineAndAllPhotosTop;
@property (readonly, nonatomic) NSNumber *inlineHeaderOverlayTopInsetOverride;
@property (readonly, nonatomic) BOOL isTopSafeAreaFullyCovered;
@property (readonly, nonatomic) BOOL allowsPaginatedScrollingInYearsAndMonths;
@property (readonly, nonatomic) BOOL allowsSlideshowInYears;
@property (readonly, nonatomic) PXExtendedImageConfiguration *statusBarGradientImageConfiguration;
@property (readonly, nonatomic) double interbuttonSpacing;
@property (readonly, nonatomic) BOOL wantsStatusBarGradient;
@property (readonly, nonatomic) BOOL wantsBlurredSecondaryToolbarTransition;
@property (readonly, nonatomic) BOOL wantsBlurredBackground;
@property (readonly, nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } blurredBackgroundEdgeInsets;
@property (readonly, nonatomic) NSColor *backgroundColor;
@property (readonly, nonatomic) NSColor *contentUnavailableBackgroundColor;
@property (readonly, nonatomic) NSColor *contentBackgroundColor;

- (void).cxx_destruct;
- (BOOL)assetsSectionLayoutSpec:(id)a0 collectionRepresentsMonthsChapter:(id)a1;
- (id)assetsSectionLayoutSpec:(id)a0 createSectionConfiguratorForType:(long long)a1;
- (double)blurredBackgroundInitialOpacityForZoomLevel:(long long)a0;
- (double)blurredBackgroundOpacityForZoomLevel:(long long)a0;
- (double)defaultInterlayoutSpacingForZoomLevel:(long long)a0;
- (id)initWithExtendedTraitCollection:(id)a0 options:(unsigned long long)a1;
- (id)initWithExtendedTraitCollection:(id)a0 options:(unsigned long long)a1 variant:(long long)a2;
- (BOOL)shouldExcludeNonLibraryRelatedActionsFromTopLevelEllipsisMenuForZoomLevel:(long long)a0;

@end
