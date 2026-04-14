@class PXAssetsSectionLayoutSpec, NSString, PXPhotosSectionHeaderLayoutSpec, PXExtendedImageConfiguration, NSFont, NSColor;

@interface PXPhotosLayoutSpec : PXFeatureSpec

@property (readonly, nonatomic) PXAssetsSectionLayoutSpec *assetsSpec;
@property (readonly, nonatomic) PXPhotosSectionHeaderLayoutSpec *sectionHeaderSpec;
@property (readonly, nonatomic) double headerTitleLeadingSpacing;
@property (readonly, nonatomic) double headerTitleButtonAlignmentSpacing;
@property (readonly, nonatomic) double headerTitleTopSpacing;
@property (readonly, nonatomic) double headerTitleBottomSpacing;
@property (readonly, nonatomic) NSFont *headerTitleFont;
@property (readonly, nonatomic) NSColor *headerTitleOverBackgroundColor;
@property (readonly, nonatomic) NSColor *headerTitleOverContentColor;
@property (readonly, nonatomic) double aspectFitContentVerticalPadding;
@property (readonly, nonatomic) double squareContentVerticalPadding;
@property (readonly, nonatomic) PXExtendedImageConfiguration *backgroundGradientImageConfiguration;
@property (readonly, nonatomic) PXExtendedImageConfiguration *behindContentBackgroundGradientImageConfiguration;
@property (readonly, nonatomic) double interSectionSpacing;
@property (readonly, nonatomic) NSString *visualEffectViewGroupName;
@property (readonly, nonatomic) double interButtonSpacing;
@property (readonly, nonatomic) double endButtonSpacing;

- (void).cxx_destruct;
- (id)initWithExtendedTraitCollection:(id)a0 options:(unsigned long long)a1;

@end
