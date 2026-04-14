@class NSWindow;

@interface PreferencesUIController : NSPreferences {
    BOOL _isCanceling;
    BOOL _snapshotsArePermitted;
    BOOL _isShowingDeveloperPreferences;
}

@property (readonly, nonatomic) NSWindow *window;

+ (void)restoreWindowWithIdentifier:(id)a0 state:(id)a1 completionHandler:(id /* block */)a2;
+ (int)newTabBehaviorWithPrivateBrowsingEnabled:(BOOL)a0 withWebExtensionsController:(id)a1;
+ (int)newWindowBehaviorWithPrivateBrowsingEnabled:(BOOL)a0 withWebExtensionsController:(id)a1;
+ (id)preferencesModuleNameFromIdentifier:(int)a0;
+ (void)setShouldAlwaysPromptForDownloadPath:(BOOL)a0;
+ (BOOL)shouldAlwaysPromptForDownloadPath;

- (id)init;
- (void)cancel:(id)a0;
- (void)showPreferencesPanelForOwner:(id)a0;
- (BOOL)usesButtons;
- (BOOL)windowShouldClose:(id)a0;
- (void)windowWillClose:(id)a0;
- (void)_addPreferenceNamed:(id)a0 withOwner:(id)a1 afterOwner:(id)a2;
- (id)_cachedPreferencesModulesMinimumWidths;
- (void)_computeToolbarWidthAndDisplay;
- (double)_minimumWidthEnsuringVisibilityOfAllPanelToolbarItems;
- (double)_preferenceModuleWidthsRecomputedForToolbarMinimumWidth:(double)a0;
- (void)_removePreferenceNamed:(id)a0 withOwner:(id)a1;
- (void)_removeToolbarItemForPreferenceNamed:(id)a0;
- (void)_storeCachedPreferencesModulesSizes;
- (double)_widthOfWidestPreferenceModuleAfterRecomputingWidths;
- (void)focusContentSearchField:(id)a0;
- (BOOL)isCanceling;
- (void)setSnapshotsOfPreferencesWindowArePermitted:(BOOL)a0;
- (void)updateDeveloperPreferencesVisibility;
- (BOOL)validate_focusContentSearchField:(id)a0;

@end
