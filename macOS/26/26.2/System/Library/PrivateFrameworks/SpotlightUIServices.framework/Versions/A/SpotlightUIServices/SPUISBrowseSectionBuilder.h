@interface SPUISBrowseSectionBuilder : SPUISSectionBuilder

+ (BOOL)useAppIconMetrics;
+ (id)_configureResultForAppList:(id)a0 sectionBundleIdentifier:(id)a1;
+ (void)_fillSection:(id)a0 withListResults:(id)a1;
+ (id)_resultCardSectionForResult:(id)a0;
+ (id)_sectionResultForResults:(id)a0 style:(int)a1 sectionTitle:(id)a2 sectionIdentifier:(id)a3;
+ (id)resultCardForResult:(id)a0;
+ (id)sectionWithTitle:(id)a0 identifier:(id)a1 style:(int)a2 results:(id)a3;
+ (unsigned long long)titleMaxLinesForGridView;
+ (BOOL)useWiderBrowseView;

@end
