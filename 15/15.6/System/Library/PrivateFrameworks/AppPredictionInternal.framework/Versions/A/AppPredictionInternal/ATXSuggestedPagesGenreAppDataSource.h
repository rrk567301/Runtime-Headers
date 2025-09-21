@interface ATXSuggestedPagesGenreAppDataSource : NSObject <ATXSuggestedPagesAppDataSource>

- (char)_appLaunchDataPassesThreshold:(id)a0 forPageType:(long long)a1 bundleId:(id)a2;
- (char)_pageType:(long long)a0 matchesGenreId:(unsigned long long)a1 forBundleId:(id)a2;
- (id)provideAppsForSuggestedPageType:(long long)a0 environment:(id)a1;

@end
