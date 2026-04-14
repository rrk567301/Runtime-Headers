@class NSTextField, EnableDevelopMenuButtonHostViewController, NSView, WKWebpagePreferences, NSPopUpButton, NSButton, NSComboBox;

@interface AdvancedPreferences : PreferencesModule {
    NSPopUpButton *styleSheetPopUp;
    NSButton *minFontSizeCheckbox;
    NSComboBox *minFontSizeComboBox;
    NSButton *tabToAllButton;
    NSTextField *tabToAllOptionHint;
    NSButton *openProxyPreferencesButton;
    NSPopUpButton *defaultCharacterSetMenu;
    NSButton *includeDevelopMenuButton;
    EnableDevelopMenuButtonHostViewController *_remoteDevelopMenuButtonViewController;
    BOOL _updatingMinFontSizeViews;
    WKWebpagePreferences *_defaultWebpagePreferences;
}

@property (weak, nonatomic) NSView *contentView;
@property (weak, nonatomic) NSTextField *smartSearchFieldSectionLabel;
@property (weak, nonatomic) NSButton *smartSearchFieldShowsFullURLCheckbox;
@property (weak, nonatomic) NSButton *showColorInTabBarButton;
@property (weak, nonatomic) NSButton *saveReadingListItemsAutomaticallyCheckbox;
@property (weak, nonatomic) NSView *includeDevelopMenuButtonContainerView;

+ (void)setShowDevelopMenu:(BOOL)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)awakeFromNib;
- (id)imageForPreferenceNamed:(id)a0;
- (void)comboBoxSelectionDidChange:(id)a0;
- (void)moduleWillBeRemoved;
- (void)moduleWasInstalled;
- (void)initializeFromDefaults;
- (void)setUserStyleSheetEnabled:(BOOL)a0;
- (BOOL)userStyleSheetEnabled;
- (void)takeStyleSheetFromMenuItem:(id)a0;
- (void)disableUserStyleSheet:(id)a0;
- (void)chooseStyleSheetFromFileBrowser:(id)a0;
- (void)takeDefaultCharacterSetFrom:(id)a0;
- (void)keyboardUIModeDidChange:(id)a0;
- (void)openProxyPreferences:(id)a0;
- (void)_setStyleSheetPathPreference:(id)a0;
- (id)_styleSheetPathPreference;
- (void)updateStyleSheetMenu;
- (void)choseStyleSheetFromPanel:(id)a0 returnCode:(long long)a1;
- (void)updateDefaultCharacterSetPopup;
- (double)_widthOfTextField:(id)a0 usingString:(id)a1;
- (void)_setWidthConstraintForTabToAllOptionHintTextField;
- (void)toggleSavingArticlesOfflineAutomatically:(id)a0;
- (long long)sanityCheckMinimumFontSize:(long long)a0;
- (void)_updateSmartSearchFieldShowsFullURLButton;
- (void)_updateReadingListSaveOfflineAutomaticallyCheckbox;
- (void)updateMinFontSizeViews;
- (void)updateTabToAllViews;
- (void)updateProxiesButton;
- (void)toggleSmartSearchFieldShowsFullURL:(id)a0;
- (void)toggleUseMinimumFontSize:(id)a0;
- (void)takeMinimumFontSizeFrom:(id)a0;
- (void)toggleTabToAll:(id)a0;
- (void)toggleShowColorInTabBar:(id)a0;
- (void)_updateShowColorInTabBarButton;
- (void)toggleIncludeDevelopMenu:(id)a0;
- (void)updateIncludeDevelopMenuButton;
- (id)safariHelpAnchor;

@end
