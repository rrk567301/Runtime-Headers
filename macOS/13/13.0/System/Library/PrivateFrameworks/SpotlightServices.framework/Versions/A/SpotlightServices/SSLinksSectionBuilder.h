@interface SSLinksSectionBuilder : SSSectionBuilder

+ (id)supportedBundleId;

- (long long)maxCardSections;
- (BOOL)useCompactRowOnMac;
- (id)buildCollectionStyle;
- (id)buildCardSectionWithResult:(id)a0 resultBuilder:(id)a1;

@end
