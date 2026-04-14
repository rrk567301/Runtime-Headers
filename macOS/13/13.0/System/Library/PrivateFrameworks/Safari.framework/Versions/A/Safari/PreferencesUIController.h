@class NSWindow;

@interface PreferencesUIController : NSPreferences {
    BOOL _isCanceling;
    BOOL _snapshotsArePermitted;
}

@property (readonly, nonatomic) NSWindow *window;

+ (id)preferencesModuleNameFromIdentifier:(int)a0;
+ (int)newTabBehavior;
+ (int)newWindowBehavior;
+ (BOOL)shouldAlwaysPromptForDownloadPath;
+ (void)setShouldAlwaysPromptForDownloadPath:(BOOL)a0;

- (id)init;
- (BOOL)windowShouldClose:(id)a0;
- (void)windowWillClose:(id)a0;
- (void)cancel:(id)a0;
- (BOOL)usesButtons;
- (BOOL)validate_focusContentSearchField:(id)a0;
- (void)focusContentSearchField:(id)a0;
- (id)_cachedPreferencesModulesMinimumWidths;
- (void)_storeCachedPreferencesModulesSizes;
- (BOOL)isCanceling;
- (void)setSnapshotsOfPreferencesWindowArePermitted:(BOOL)a0;

@end
