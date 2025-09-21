@interface SSRelatedSearchesSectionBuilder : SSSectionBuilder

+ (id)supportedBundleIds;

- (id)buildCardSections;
- (id)buildTitle;
- (char)shouldSkipSection;
- (char)useHorizontallyScrollingCardSectionUI;

@end
