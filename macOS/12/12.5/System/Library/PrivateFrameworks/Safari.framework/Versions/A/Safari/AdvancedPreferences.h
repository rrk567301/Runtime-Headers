@class NSTextField, EnableDevelopMenuButtonHostViewController, NSView, NSPopUpButton, NSButton, NSComboBox;

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
}

@property (weak, nonatomic) NSView *contentView;
@property (weak, nonatomic) NSTextField *smartSearchFieldSectionLabel;
@property (weak, nonatomic) NSButton *smartSearchFieldShowsFullURLCheckbox;
@property (weak, nonatomic) NSButton *showColorInTabBarButton;
@property (weak, nonatomic) NSButton *saveReadingListItemsAutomaticallyCheckbox;
@property (weak, nonatomic) NSView *includeDevelopMenuButtonContainerView;

+ (void)setShowDevelopMenu:(BOOL)a0;

- (void).cxx_destruct;
- (void)awakeFromNib;
- (id)imageForPreferenceNamed:(id)a0;
- (void)comboBoxSelectionDidChange:(id)a0;
- (void)moduleWillBeRemoved;
- (void)initializeFromDefaults;
- (void)moduleWasInstalled;
- (void)setUserStyleSheetEnabled:(BOOL)a0;
- (BOOL)userStyleSheetEnabled;
- (id)_styleSheetPathPreference;
- (void)takeStyleSheetFromMenuItem:(id)a0;
- (void)disableUserStyleSheet:(id)a0;
- (void)chooseStyleSheetFromFileBrowser:(id)a0;
- (void)_setStyleSheetPathPreference:(id)a0;
- (void)updateStyleSheetMenu;
- (void)choseStyleSheetFromPanel:(id)a0 returnCode:(long long)a1;
- (void)updateDefaultCharacterSetPopup;
- (double)_widthOfTextField:(id)a0 usingString:(id)a1;
- (void)takeDefaultCharacterSetFrom:(id)a0;
- (void)_setWidthConstraintForTabToAllOptionHintTextField;
- (long long)sanityCheckMinimumFontSize:(long long)a0;
- (void)updateTabToAllViews;
- (void)updateMinFontSizeViews;
- (void)_updateSmartSearchFieldShowsFullURLButton;
- (void)_updateShowColorInTabBarButton;
- (void)updateProxiesButton;
- (void)updateIncludeDevelopMenuButton;
- (void)_updateReadingListSaveOfflineAutomaticallyCheckbox;
- (void)keyboardUIModeDidChange:(id)a0;
- (void)openProxyPreferences:(id)a0;
- (void)toggleSavingArticlesOfflineAutomatically:(id)a0;
- (void)toggleSmartSearchFieldShowsFullURL:(id)a0;
- (void)toggleUseMinimumFontSize:(id)a0;
- (void)takeMinimumFontSizeFrom:(id)a0;
- (void)toggleTabToAll:(id)a0;
- (void)toggleShowColorInTabBar:(id)a0;
- (void)toggleIncludeDevelopMenu:(id)a0;
- (id)safariHelpAnchor;

@end
