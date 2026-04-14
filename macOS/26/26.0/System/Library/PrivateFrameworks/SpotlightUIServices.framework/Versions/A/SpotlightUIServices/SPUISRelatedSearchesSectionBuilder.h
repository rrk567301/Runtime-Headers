@interface SPUISRelatedSearchesSectionBuilder : SPUISSectionBuilder

+ (id)supportedBundleIds;

- (id)buildCardSections;
- (id)buildTitle;
- (BOOL)shouldSkipSection;
- (BOOL)useHorizontallyScrollingCardSectionUI;

@end
