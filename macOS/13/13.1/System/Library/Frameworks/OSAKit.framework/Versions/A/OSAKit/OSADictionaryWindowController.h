@class NSMutableDictionary, NSString, NSSearchField, OSADictionary, NSPopUpButton, OSADictionaryController, NSSegmentedControl;

@interface OSADictionaryWindowController : NSWindowController <NSToolbarDelegate> {
    OSADictionaryController *_dictionaryController;
    NSSegmentedControl *_navigationControl;
    NSSegmentedControl *_textSizeControl;
    NSSegmentedControl *_viewModeControl;
    NSPopUpButton *_languageControl;
    NSSearchField *_searchField;
    OSADictionary *_dictionary;
    NSMutableDictionary *_toolbarInfo;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)setDictionary:(id)a0;
- (id)dictionary;
- (id)initWithDictionary:(id)a0;
- (void)awakeFromNib;
- (id)searchField;
- (id)toolbar:(id)a0 itemForItemIdentifier:(id)a1 willBeInsertedIntoToolbar:(BOOL)a2;
- (id)toolbarDefaultItemIdentifiers:(id)a0;
- (id)toolbarAllowedItemIdentifiers:(id)a0;
- (void)setSearchField:(id)a0;
- (void)setDictionaryController:(id)a0;
- (id)dictionaryController;
- (long long)viewMode;
- (void)setViewMode:(long long)a0;
- (id)navigationControl;
- (void)goBackForward:(id)a0;
- (void)changeTextSize:(id)a0;
- (void)changeViewMode:(id)a0;
- (void)changeSearch:(id)a0;
- (void)changeLanguage:(id)a0;
- (void)setNavigationControl:(id)a0;
- (id)textSizeControl;
- (void)setTextSizeControl:(id)a0;
- (id)viewModeControl;
- (void)setViewModeControl:(id)a0;
- (id)languageControl;
- (void)setLanguageControl:(id)a0;

@end
