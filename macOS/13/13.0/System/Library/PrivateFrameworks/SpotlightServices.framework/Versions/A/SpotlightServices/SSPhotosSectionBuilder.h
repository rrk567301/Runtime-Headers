@interface SSPhotosSectionBuilder : SSSectionBuilder

+ (id)supportedBundleIds;

- (long long)maxCardSections;
- (id)buildCollectionStyle;
- (id)buildCardSectionWithResult:(id)a0 resultBuilder:(id)a1;

@end
