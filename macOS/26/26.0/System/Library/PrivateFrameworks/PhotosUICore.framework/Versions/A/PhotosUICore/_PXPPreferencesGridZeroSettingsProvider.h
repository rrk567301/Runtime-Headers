@interface _PXPPreferencesGridZeroSettingsProvider : PXGridZeroSettingsProvider <PXPreferencesObserver>

- (void)dealloc;
- (id)init;
- (BOOL)isStacksEnabled;
- (BOOL)isSharedLibraryBadgingEnabled;
- (BOOL)isVideoAutoplayEnabled;
- (void)preferencesDidChange;

@end
