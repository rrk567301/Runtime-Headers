@interface SSAppBrowseSectionBuilder : SSBrowseSectionBuilder

+ (void)updateBundleIdToOnenessBundleIdMapping:(id)a0;
+ (BOOL)useAppIconMetrics;
+ (id)_bundleIdToOnenessBundleId;
+ (id)_resultForAppIdentity:(id)a0 bundleIdToOnenessBundleIdMapping:(id)a1;
+ (id)appSectionWithTitle:(id)a0 identifier:(id)a1 style:(int)a2 appIdentities:(id)a3;
+ (id)appSectionWithTitle:(id)a0 identifier:(id)a1 style:(int)a2 results:(id)a3;
+ (BOOL)supportsSection:(id)a0 queryContext:(id)a1;
+ (unsigned long long)titleMaxLinesForGridView;
+ (BOOL)useWiderBrowseView;

- (id)buildSection;

@end
