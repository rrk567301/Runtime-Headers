@interface SSLinksSectionBuilder : SSSectionBuilder

+ (id)supportedBundleId;

- (id)buildCardSectionWithResult:(id)a0 resultBuilder:(id)a1;
- (id)buildCollectionStyle;
- (BOOL)useCompactRowOnMac;
- (BOOL)useHorizontallyScrollingCardSectionUI;

@end
