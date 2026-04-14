@interface SSRelatedSearchesSectionBuilder : SSSectionBuilder

+ (id)supportedBundleIds;

- (id)buildCardSections;
- (BOOL)shouldSkipSection;
- (id)buildTitle;
- (BOOL)useHorizontallyScrollingCardSectionUI;

@end
