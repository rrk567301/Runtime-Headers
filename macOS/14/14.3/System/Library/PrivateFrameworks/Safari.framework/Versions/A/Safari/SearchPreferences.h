@class NSButton, NSTextField, NSView, WebsiteSpecificSearchEditor, NSPopUpButton, NSLayoutConstraint;

@interface SearchPreferences : PreferencesModule

@property (retain, nonatomic) WebsiteSpecificSearchEditor *websiteSpecificSearchEditor;
@property (weak, nonatomic) NSView *mainContentView;
@property (weak, nonatomic) NSPopUpButton *defaultSearchEnginePopUpButton;
@property (weak, nonatomic) NSLayoutConstraint *popupButtonBottomConstraint;
@property (weak, nonatomic) NSLayoutConstraint *safariSuggestionsCheckboxTopConstraint;
@property (weak, nonatomic) NSButton *searchSuggestionsCheckbox;
@property (weak, nonatomic) NSButton *enableParsecCheckbox;
@property (weak, nonatomic) NSButton *showFavoritesCheckbox;
@property (weak, nonatomic) NSTextField *searchEngineLabel;
@property (weak, nonatomic) NSTextField *smartSearchFieldLabel;
@property (retain, nonatomic) NSButton *privateSearchEngineUsesNormalSearchEngineToggle;
@property (retain, nonatomic) NSTextField *privateSearchEngineLabel;
@property (retain, nonatomic) NSPopUpButton *privateSearchEnginePopUpButton;
@property (retain, nonatomic) NSTextField *searchSuggestionText;

- (void).cxx_destruct;
- (void)awakeFromNib;
- (id)imageForPreferenceNamed:(id)a0;
- (void)initializeFromDefaults;
- (void)moduleWasInstalled;
- (void)moduleWillBeRemoved;
- (void)_appendSearchSuggestionTextIfNecessary;
- (void)_removeSearchSuggestionTextIfNecesssary;
- (void)_updateDefaultPrivateSearchEngineUseNormalSearchEngineToggleValue;
- (void)_updateDefaultSearchEngineForPopupButton:(id)a0;
- (void)_updateDefaultSearchEngineMenu;
- (void)_updateParsecCheckboxState;
- (void)changeDefaultSearchEngine:(id)a0;
- (void)didToggleUsingNormalBrowsingSearchEngineInPriavteBrowsing:(id)a0;
- (id)safariHelpAnchor;
- (void)setPrivateSearchEngineTo:(id)a0;
- (void)suppressSearchSuggestionsPreferenceDidChange:(id)a0;
- (void)toggleParsecEnabled:(id)a0;

@end
