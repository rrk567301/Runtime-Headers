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
- (void)comboBoxSelectionDidChange:(id)a0;
- (id)imageForPreferenceNamed:(id)a0;
- (void)initializeFromDefaults;
- (void)moduleWasInstalled;
- (void)moduleWillBeRemoved;
- (void)setUserStyleSheetEnabled:(BOOL)a0;
- (BOOL)userStyleSheetEnabled;
- (void)toggleTabToAll:(id)a0;
- (void)_setStyleSheetPathPreference:(id)a0;
- (void)_setWidthConstraintForTabToAllOptionHintTextField;
- (id)_styleSheetPathPreference;
- (void)_updateReadingListSaveOfflineAutomaticallyCheckbox;
- (void)_updateShowColorInTabBarButton;
- (void)_updateSmartSearchFieldShowsFullURLButton;
- (double)_widthOfTextField:(id)a0 usingString:(id)a1;
- (void)chooseStyleSheetFromFileBrowser:(id)a0;
- (void)choseStyleSheetFromPanel:(id)a0 returnCode:(long long)a1;
- (void)disableUserStyleSheet:(id)a0;
- (void)keyboardUIModeDidChange:(id)a0;
- (void)openProxyPreferences:(id)a0;
- (id)safariHelpAnchor;
- (long long)sanityCheckMinimumFontSize:(long long)a0;
- (void)takeDefaultCharacterSetFrom:(id)a0;
- (void)takeMinimumFontSizeFrom:(id)a0;
- (void)takeStyleSheetFromMenuItem:(id)a0;
- (void)toggleIncludeDevelopMenu:(id)a0;
- (void)toggleSavingArticlesOfflineAutomatically:(id)a0;
- (void)toggleShowColorInTabBar:(id)a0;
- (void)toggleSmartSearchFieldShowsFullURL:(id)a0;
- (void)toggleUseMinimumFontSize:(id)a0;
- (void)updateDefaultCharacterSetPopup;
- (void)updateIncludeDevelopMenuButton;
- (void)updateMinFontSizeViews;
- (void)updateProxiesButton;
- (void)updateStyleSheetMenu;
- (void)updateTabToAllViews;

@end
