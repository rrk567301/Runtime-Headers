@interface _PXPPreferencesGridZeroSettingsProvider : PXGridZeroSettingsProvider <PXPreferencesObserver>

- (id)init;
- (void)dealloc;
- (BOOL)isStacksEnabled;
- (BOOL)isSharedLibraryBadgingEnabled;
- (BOOL)isVideoAutoplayEnabled;
- (void)preferencesDidChange;

@end
