@interface SSBrowseSectionBuilder : SSSectionBuilder

+ (id)sectionBundleIdentifier;
+ (BOOL)useAppIconMetrics;
+ (id)commandForResult:(id)a0 resultBuilder:(id)a1;
+ (id)_configureResultForAppList:(id)a0 sectionBundleIdentifier:(id)a1;
+ (void)_fillSection:(id)a0 withListResults:(id)a1;
+ (id)_resultCardSectionForResult:(id)a0 highDensity:(BOOL)a1;
+ (id)_sectionResultForResults:(id)a0 style:(int)a1 highDensity:(BOOL)a2 withSectionTitle:(id)a3;
+ (id)imageForResult:(id)a0 resultBuilder:(id)a1 size:(unsigned long long)a2;
+ (id)resultCardForResult:(id)a0;
+ (id)sectionWithTitle:(id)a0 identifier:(id)a1 style:(int)a2 highDensity:(BOOL)a3 results:(id)a4;
+ (id)sectionWithTitle:(id)a0 identifier:(id)a1 style:(int)a2 results:(id)a3;
+ (unsigned long long)titleMaxLinesForGridView;
+ (BOOL)useResultBuilderForThumbnailAndCommand;

@end
