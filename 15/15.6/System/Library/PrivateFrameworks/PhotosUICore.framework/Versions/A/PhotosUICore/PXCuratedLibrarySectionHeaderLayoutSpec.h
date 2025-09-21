@class PXTitleSubtitleLabelSpec, NSDateFormatter, PXCuratedLibraryStyleGuide, PXExtendedImageConfiguration, NSColor;

@interface PXCuratedLibrarySectionHeaderLayoutSpec : PXFeatureSpec

@property (nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } padding;
@property (nonatomic) struct { union { struct { float topLeft; float topRight; float bottomLeft; float bottomRight; } ; float byIndex[4]; } ; } cornerRadius;
@property (nonatomic) char isFloating;
@property (nonatomic) long long variant;
@property (nonatomic) char ellipsisButtonSpecialTreatment;
@property (nonatomic) double buttonHeight;
@property (nonatomic) double buttonSpacing;
@property (nonatomic) double buttonHorizontalPadding;
@property (nonatomic) char canShowEllipsisButton;
@property (nonatomic) char canShowSelectButton;
@property (nonatomic) char canShowCancelButton;
@property (nonatomic) char canShowZoomButtons;
@property (nonatomic) char canShowAspectFitButtons;
@property (nonatomic) char wantsTitle;
@property (nonatomic) char wantsSubtitle;
@property (nonatomic) char shouldOmitYear;
@property (nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } contentPadding;
@property (nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } titlePadding;
@property (nonatomic) char shouldAvoidOverlapWithSecondaryToolbar;
@property (copy, nonatomic) PXTitleSubtitleLabelSpec *titleSubtitleLabelSpec;
@property (copy, nonatomic) PXTitleSubtitleLabelSpec *debugInterestingTitleSubtitleLabelSpec;
@property (copy, nonatomic) PXTitleSubtitleLabelSpec *debugNonInterestingTitleSubtitleLabelSpec;
@property (nonatomic) char wantsInlineHeader;
@property (nonatomic) char requiresTitleRenderedAsView;
@property (nonatomic) unsigned long long inlineHeaderStyle;
@property (nonatomic) char swapTitleWithSubtitle;
@property (copy, nonatomic) NSDateFormatter *titleDateFormatter;
@property (copy, nonatomic) NSDateFormatter *subtitleDateFormatter;
@property (nonatomic) char shouldTextFadeOutWhenReachingTop;
@property (nonatomic) char shouldButtonsFadeOutWhenReachingTop;
@property (nonatomic) double fadeOutDistanceFromSafeAreaTop;
@property (nonatomic) double fadeOutDistance;
@property (nonatomic) double textFadeOutMinimumAlpha;
@property (nonatomic) double buttonsFadeOutMinimumAlpha;
@property (nonatomic) char shouldAccommodateLeadingButtonsLayout;
@property (nonatomic) double gradientAlpha;
@property (nonatomic) double gradientHeight;
@property (nonatomic) char gradientRespectsSafeArea;
@property (retain, nonatomic) PXCuratedLibrarySectionHeaderLayoutSpec *smallVariantSpec;
@property (retain, nonatomic) PXCuratedLibrarySectionHeaderLayoutSpec *firstCardVariantSpec;
@property (readonly, nonatomic) double maximumTitleSubtitleHeight;
@property (readonly, nonatomic) NSColor *titleSubtitleColorOverBackground;
@property (readonly, nonatomic) PXExtendedImageConfiguration *headerGradientImageConfiguration;
@property (readonly, nonatomic) double minimumSpacingBetweenTopSafeAreaAndContentTop;
@property (readonly, nonatomic) double minimumSpacingBetweenTopSafeAreaAndTitleTop;
@property (readonly, nonatomic) PXCuratedLibraryStyleGuide *styleGuide;

- (void).cxx_destruct;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })adjustedContentPadding:(struct NSEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })curatedLibraryEdgeToEdgeContentDefaultPadding;
- (id)initWithExtendedTraitCollection:(id)a0 options:(unsigned long long)a1;
- (id)initWithExtendedTraitCollection:(id)a0 options:(unsigned long long)a1 variant:(long long)a2;
- (char)showMainEllipsisButtonWhenSecondaryEllipsisButtonIsShown:(char)a0 selectButtonIsShown:(char)a1;

@end
