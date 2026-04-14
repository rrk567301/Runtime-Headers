@interface SSAppBrowseSectionBuilder : SSBrowseSectionBuilder

+ (id)sectionBundleIdentifier;
+ (BOOL)useAppIconMetrics;
+ (id)appSectionWithTitle:(id)a0 identifier:(id)a1 style:(int)a2 highDensity:(BOOL)a3 appIdentities:(id)a4;
+ (id)commandForResult:(id)a0 resultBuilder:(id)a1;
+ (id)_appIconImageForAppInfo:(id)a0 size:(unsigned long long)a1;
+ (id)_appInfoForBundleID:(id)a0;
+ (id)_resultForAppIdentity:(id)a0;
+ (id)appSectionWithTitle:(id)a0 identifier:(id)a1 style:(int)a2 appIdentities:(id)a3;
+ (id)appSectionWithTitle:(id)a0 identifier:(id)a1 style:(int)a2 highDensity:(BOOL)a3 results:(id)a4;
+ (id)appSectionWithTitle:(id)a0 identifier:(id)a1 style:(int)a2 results:(id)a3;
+ (id)imageForResult:(id)a0 resultBuilder:(id)a1 size:(unsigned long long)a2;
+ (BOOL)supportsSection:(id)a0 queryContext:(id)a1;
+ (unsigned long long)titleMaxLinesForGridView;
+ (BOOL)useResultBuilderForThumbnailAndCommand;

- (id)buildSection;

@end
