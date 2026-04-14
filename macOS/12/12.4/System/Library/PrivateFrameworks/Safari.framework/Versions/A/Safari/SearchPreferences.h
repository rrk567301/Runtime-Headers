@class NSTextField, WebsiteSpecificSearchEditor, NSButton, NSPopUpButton;

@interface SearchPreferences : PreferencesModule

@property (retain, nonatomic) WebsiteSpecificSearchEditor *websiteSpecificSearchEditor;
@property (weak, nonatomic) NSPopUpButton *defaultSearchEnginePopUpButton;
@property (weak, nonatomic) NSButton *enableParsecCheckbox;
@property (weak, nonatomic) NSButton *showFavoritesCheckbox;
@property (weak, nonatomic) NSTextField *searchEngineLabel;
@property (weak, nonatomic) NSTextField *smartSearchFieldLabel;

- (void).cxx_destruct;
- (void)awakeFromNib;
- (id)imageForPreferenceNamed:(id)a0;
- (void)moduleWillBeRemoved;
- (void)initializeFromDefaults;
- (void)moduleWasInstalled;
- (id)safariHelpAnchor;
- (void)_updateDefaultSearchEngineMenu;
- (void)_updateParsecCheckboxState;
- (void)toggleParsecEnabled:(id)a0;
- (void)suppressSearchSuggestionsPreferenceDidChange:(id)a0;
- (void)changeDefaultSearchEngine:(id)a0;

@end
