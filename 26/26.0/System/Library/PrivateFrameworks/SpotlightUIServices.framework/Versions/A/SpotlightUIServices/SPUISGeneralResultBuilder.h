@interface SPUISGeneralResultBuilder : SPUISResultBuilder

+ (BOOL)supportsResult:(id)a0;
+ (BOOL)isCoreSpotlightResult;

- (id)buildDescriptions;
- (id)buildDetailedRowCardSection;
- (id)buildFootnote;
- (id)buildSecondaryTitle;
- (id)buildSecondaryTitleImage;
- (id)buildTitle;

@end
