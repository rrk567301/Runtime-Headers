@class SFSearchResult_SpotlightExtras, NSArray, SPSearchQueryContext;

@interface SSResultBuilder : NSObject

@property (retain, nonatomic) SFSearchResult_SpotlightExtras *result;
@property (retain, nonatomic) NSArray *matchedStrings;
@property (nonatomic) BOOL isTopHit;
@property (retain, nonatomic) SPSearchQueryContext *queryContext;

+ (id)bundleId;
+ (id)resultBuilderWithResult:(id)a0;
+ (struct CGSize { double x0; double x1; })defaultThumbnailSize;
+ (BOOL)supportsResult:(id)a0;
+ (id)richTextsFromStrings:(id)a0;
+ (BOOL)isCoreSpotlightResult;
+ (Class)resultBuilderClassForResult:(id)a0;
+ (void)setMaxLinesForDescriptions:(id)a0;

- (void).cxx_destruct;
- (id)initWithResult:(id)a0;
- (id)buildCommand;
- (id)buildResult;
- (id)buildCompactCard;
- (id)buildInlineCardSection;
- (id)buildThumbnail;
- (id)buildInlineCardSections;
- (id)subclassBuildHorizontallyScrollingCardSection;
- (id)buildDescriptions;
- (id)buildFootnote;
- (id)buildSecondaryTitle;
- (BOOL)buildSecondaryTitleIsDetached;
- (BOOL)buildButtonItemsAreTrailing;
- (id)buildButtonItems;
- (id)buildDetailedRowCardSection;
- (id)buildCompactCardSection;
- (id)buildTitle;
- (id)buildSecondaryTitleImage;
- (id)coreSpotlightId;
- (id)buildHighlightedMatchedTextWithTitle:(id)a0 headTruncation:(BOOL)a1;
- (id)buildPreviewButtonItems;
- (id)buildInlineCard;
- (id)buildCompactCardSections;
- (id)buildPunchouts;
- (void)buildDefaultPropertiesForCardSection:(id)a0;
- (id)buildTrailingTopText;
- (id)buildTrailingMiddleText;
- (id)buildTrailingBottomText;
- (id)buildAction;
- (BOOL)buildPreventThumbnailImageScaling;
- (id)resultAppBundleId;
- (id)buildHorizontallyScrollingCardSection;

@end
