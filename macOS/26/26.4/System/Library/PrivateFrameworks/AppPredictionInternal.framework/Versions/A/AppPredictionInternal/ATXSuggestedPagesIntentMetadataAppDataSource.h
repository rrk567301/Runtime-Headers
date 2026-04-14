@interface ATXSuggestedPagesIntentMetadataAppDataSource : NSObject <ATXSuggestedPagesAppDataSource>

- (id)provideAppsForSuggestedPageType:(long long)a0 environment:(id)a1;
- (id)_appsMatchingShortcutAvailability:(unsigned long long)a0;

@end
