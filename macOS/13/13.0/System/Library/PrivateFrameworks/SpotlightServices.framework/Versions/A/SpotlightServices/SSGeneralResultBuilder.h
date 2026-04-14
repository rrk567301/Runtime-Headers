@interface SSGeneralResultBuilder : SSResultBuilder

+ (BOOL)isCoreSpotlightResult;
+ (BOOL)supportsResult:(id)a0;

- (id)buildInlineCardSections;
- (id)buildDescriptions;
- (id)buildFootnote;
- (id)buildSecondaryTitle;
- (id)buildDetailedRowCardSection;
- (id)buildSecondaryTitleImage;

@end
