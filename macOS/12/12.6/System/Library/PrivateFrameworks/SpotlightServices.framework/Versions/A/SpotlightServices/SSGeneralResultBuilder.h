@interface SSGeneralResultBuilder : SSResultBuilder

+ (BOOL)supportsResult:(id)a0;
+ (BOOL)isCoreSpotlightResult;

- (id)buildInlineCardSections;
- (id)buildDescriptions;
- (id)buildFootnote;
- (id)buildSecondaryTitle;
- (id)buildDetailedRowCardSection;
- (id)buildSecondaryTitleImage;

@end
