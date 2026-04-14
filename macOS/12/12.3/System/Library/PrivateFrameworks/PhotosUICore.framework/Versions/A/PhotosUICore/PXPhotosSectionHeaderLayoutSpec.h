@class NSColor, PXExtendedImageConfiguration, NSFont;

@interface PXPhotosSectionHeaderLayoutSpec : PXFeatureSpec

@property (readonly, nonatomic) NSColor *dividerColor;
@property (readonly, nonatomic) NSColor *titleColor;
@property (readonly, nonatomic) NSColor *subtitleColor;
@property (readonly, nonatomic) NSFont *titleFont;
@property (readonly, nonatomic) NSFont *subtitleFont;
@property (readonly, nonatomic) double minimumHeaderContentHeight;
@property (readonly, nonatomic) double titleHorizontalInset;
@property (readonly, nonatomic) double titleSubtitleHorizontalSpacing;
@property (readonly, nonatomic) double dividerBaselineToTextBaselineSpacing;
@property (readonly, nonatomic) double chevronSpacing;
@property (readonly, nonatomic) struct CGSize { double width; double height; } chevronSize;
@property (readonly, nonatomic) double chevronAlpha;
@property (readonly, nonatomic) PXExtendedImageConfiguration *chevronImageConfiguration;
@property (readonly, nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } padding;
@property (readonly, nonatomic) double gradientAlpha;
@property (readonly, nonatomic) double gradientOverhang;

- (void).cxx_destruct;
- (id)initWithExtendedTraitCollection:(id)a0 options:(unsigned long long)a1;

@end
