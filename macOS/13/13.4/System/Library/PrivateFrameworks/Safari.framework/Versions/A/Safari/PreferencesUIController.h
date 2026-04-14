@class NSWindow;

@interface PreferencesUIController : NSPreferences {
    BOOL _isCanceling;
    BOOL _snapshotsArePermitted;
}

@property (readonly, nonatomic) NSWindow *window;

+ (void)restoreWindowWithIdentifier:(id)a0 state:(id)a1 completionHandler:(id /* block */)a2;
+ (int)newTabBehavior;
+ (int)newWindowBehavior;
+ (id)preferencesModuleNameFromIdentifier:(int)a0;
+ (void)setShouldAlwaysPromptForDownloadPath:(BOOL)a0;
+ (BOOL)shouldAlwaysPromptForDownloadPath;

- (id)init;
- (void)cancel:(id)a0;
- (void)showPreferencesPanel;
- (BOOL)usesButtons;
- (BOOL)windowShouldClose:(id)a0;
- (void)windowWillClose:(id)a0;
- (id)_cachedPreferencesModulesMinimumWidths;
- (void)_computeToolbarWidthAndDisplay;
- (double)_preferenceModuleWidthsRecomputedForToolbarMinimumWidth:(double)a0;
- (void)_storeCachedPreferencesModulesSizes;
- (double)_widthOfWidestPreferenceModuleAfterRecomputingWidths;
- (void)focusContentSearchField:(id)a0;
- (BOOL)isCanceling;
- (void)setSnapshotsOfPreferencesWindowArePermitted:(BOOL)a0;
- (BOOL)validate_focusContentSearchField:(id)a0;

@end
