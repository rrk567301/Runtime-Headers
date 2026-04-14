@class NSTextField, TabsLayoutPreviewButton, NSView, NSArray, NSPopUpButton, NSStackView, NSButton;

@interface TabsPreferences : PreferencesModule {
    NSArray *_finePrintConstraints;
    BOOL _didAwakeFromNib;
}

@property (weak, nonatomic) NSView *mainContentView;
@property (weak, nonatomic) NSStackView *checkBoxStackView;
@property (weak, nonatomic) NSStackView *tabLayoutPolicyView;
@property (weak, nonatomic) TabsLayoutPreviewButton *compactTabLayoutButton;
@property (weak, nonatomic) TabsLayoutPreviewButton *separateTabLayoutButton;
@property (weak, nonatomic) NSButton *alwaysShowTitlesCheckbox;
@property (weak, nonatomic) NSPopUpButton *tabCreationPolicyPopUp;
@property (weak, nonatomic) NSButton *commandClickMakesTabsCheckbox;
@property (weak, nonatomic) NSButton *selectNewTabsCheckbox;
@property (weak, nonatomic) NSButton *command1Through9SwitchesTabsCheckbox;
@property (weak, nonatomic) NSView *finePrintContainerView;
@property (weak, nonatomic) NSTextField *commandClickLabel;
@property (weak, nonatomic) NSTextField *commandShiftClickLabel;
@property (weak, nonatomic) NSTextField *commandOptionClickLabel;
@property (weak, nonatomic) NSTextField *commandOptionShiftClickLabel;
@property (weak, nonatomic) NSTextField *openInNewActiveTabLabel;
@property (weak, nonatomic) NSTextField *openInNewTabLabel;
@property (weak, nonatomic) NSTextField *openInNewActiveWindowLabel;
@property (weak, nonatomic) NSTextField *openInNewWindowLabel;

- (void).cxx_destruct;
- (void)awakeFromNib;
- (id)preferencesNibName;
- (id)imageForPreferenceNamed:(id)a0;
- (void)initializeFromDefaults;
- (void)updateViews;
- (id)safariHelpAnchor;
- (void)_setupTabLayoutPreference;
- (void)selectTabLayout:(id)a0;
- (id)_checkboxWithTitle:(id)a0 action:(SEL)a1;
- (void)_updatePopUp:(id)a0 toMatchPreferenceWithKey:(id)a1;
- (void)_updateTabCreationPolicyPopUp;
- (void)takeTabCreationPolicyFrom:(id)a0;
- (void)toggleCommandClickMakesTabs:(id)a0;
- (void)toggleNarrowTabs:(id)a0;
- (void)toggleSelectNewTabs:(id)a0;
- (void)toggleCommand1Through9SwitchesTabs:(id)a0;

@end
