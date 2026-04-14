@class NSWindow;

@interface PreferencesUIController : NSPreferences {
    BOOL _isCanceling;
    BOOL _snapshotsArePermitted;
}

@property (readonly, nonatomic) NSWindow *window;

+ (BOOL)shouldAlwaysPromptForDownloadPath;
+ (int)newTabBehavior;
+ (int)newWindowBehavior;
+ (id)preferencesModuleNameFromIdentifier:(int)a0;
+ (void)setShouldAlwaysPromptForDownloadPath:(BOOL)a0;

- (id)init;
- (BOOL)windowShouldClose:(id)a0;
- (void)windowWillClose:(id)a0;
- (void)cancel:(id)a0;
- (BOOL)usesButtons;
- (BOOL)isCanceling;
- (BOOL)validate_focusContentSearchField:(id)a0;
- (void)focusContentSearchField:(id)a0;
- (void)setSnapshotsOfPreferencesWindowArePermitted:(BOOL)a0;
- (id)_cachedPreferencesModulesMinimumWidths;
- (void)_storeCachedPreferencesModulesSizes;

@end
