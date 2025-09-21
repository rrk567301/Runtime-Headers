@class NSStackView, NSTabViewController, NSSegmentedControl, GeneralProfilesPreferencesViewController, NSButton, NSImageView, ExtensionsProfilesPreferencesViewController, NSString, TableViewPlus, NSViewController, NSArray, NSView, CreateProfilePreferencesViewController, NSTextField;

@interface ProfilesPreferences : SecurePreferencesModule <NSTextFieldDelegate, WBTabGroupManagerObserver, NSTableViewDataSource, NSTableViewDelegate> {
    NSTabViewController *_detailsTabViewController;
    NSArray *_profiles;
    GeneralProfilesPreferencesViewController *_generalProfilePreferences;
    ExtensionsProfilesPreferencesViewController *_extensionsProfilePreferences;
    char _isCreatingNewProfile;
    char _isReloading;
    char _isEditing;
    NSViewController *_createProfilePresentingViewController;
    CreateProfilePreferencesViewController *_createProfileViewController;
    NSTextField *_noProfilesLabel;
}

@property (weak) TableViewPlus *profilesTableView;
@property (weak) NSButton *startUsingProfilesButton;
@property (weak) NSStackView *iconStackView;
@property (weak) NSTextField *explanationLabel;
@property (weak) NSSegmentedControl *addDeleteProfileSegmentedControl;
@property (weak) NSView *emptyView;
@property (weak) NSView *noProfileSelectedView;
@property (weak) NSView *profilesView;
@property (weak) NSView *settingsView;
@property (weak) NSImageView *workImageView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)willBeDisplayed;
- (void)awakeFromNib;
- (void)controlTextDidBeginEditing:(id)a0;
- (void)controlTextDidEndEditing:(id)a0;
- (id)imageForPreferenceNamed:(id)a0;
- (void)initializeFromDefaults;
- (long long)numberOfRowsInTableView:(id)a0;
- (id)tableView:(id)a0 objectValueForTableColumn:(id)a1 row:(long long)a2;
- (char)tableView:(id)a0 shouldSelectRow:(long long)a1;
- (id)tableView:(id)a0 viewForTableColumn:(id)a1 row:(long long)a2;
- (void)tableViewSelectionDidChange:(id)a0;
- (void)didSuccessfullyCreateNewProfile;
- (void)didUpdateProfileWithSymbolName:(id)a0;
- (char)_canDeleteSelectedProfile;
- (void)_configureDetailsBox;
- (void)_configureEmptyView;
- (void)_configureProfilePreferencesAccessibility;
- (void)_createLearnMoreLink;
- (void)_createNewProfile:(id)a0;
- (void)_createProfileExplanationSubtextFieldIfNeeded;
- (id)_createProfilePresentingViewController;
- (void)_deleteSelectedProfile;
- (char)_isSelectedProfilesTableViewRowValid;
- (void)_reloadProfilesData;
- (void)_resetSymbolToOutline;
- (void)_selectGeneralTabItem;
- (void)_setFilledSymbolForRow:(long long)a0;
- (void)_setProfilesViewHidden:(char)a0;
- (char)_shouldUseFilledSymbolForRow:(long long)a0;
- (id)safariHelpAnchor;
- (void)segmentedControlClicked:(id)a0;
- (void)selectExtensionsTabAndScrollToExtensionWithComposedIdentifier:(id)a0;
- (void)tabGroupManager:(id)a0 didUpdateProfileWithIdentifier:(id)a1 difference:(id)a2;
- (void)tabGroupManagerDidUpdateProfiles:(id)a0;
- (char)tableView:(id)a0 keyDown:(id)a1;
- (char)tableView:(id)a0 shouldEditOnSingleClick:(id)a1 inRow:(long long)a2 tableColumn:(id)a3;

@end
