@interface SSFilesBrowseSectionBuilder : SSBrowseSectionBuilder

+ (id)sectionBundleIdentifier;
+ (BOOL)supportsSection:(id)a0 queryContext:(id)a1;
+ (BOOL)useResultBuilderForThumbnailAndCommand;

- (id)buildSection;

@end
