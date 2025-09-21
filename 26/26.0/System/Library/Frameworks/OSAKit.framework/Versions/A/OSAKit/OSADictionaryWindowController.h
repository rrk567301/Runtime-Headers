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

- (id)initWithDictionary:(id)a0;
- (void)setViewMode:(long long)a0;
- (void)dealloc;
- (id)searchField;
- (void)setSearchField:(id)a0;
- (void)setDictionary:(id)a0;
- (id)dictionary;
- (long long)viewMode;
- (void)awakeFromNib;
- (id)dictionaryController;
- (void)setDictionaryController:(id)a0;
- (id)toolbar:(id)a0 itemForItemIdentifier:(id)a1 willBeInsertedIntoToolbar:(BOOL)a2;
- (id)toolbarAllowedItemIdentifiers:(id)a0;
- (id)toolbarDefaultItemIdentifiers:(id)a0;
- (id)navigationControl;
- (void)changeTextSize:(id)a0;
- (id)languageControl;
- (id)textSizeControl;
- (void)changeLanguage:(id)a0;
- (void)changeViewMode:(id)a0;
- (id)viewModeControl;
- (void)changeSearch:(id)a0;
- (void)goBackForward:(id)a0;
- (void)setLanguageControl:(id)a0;
- (void)setNavigationControl:(id)a0;
- (void)setTextSizeControl:(id)a0;
- (void)setViewModeControl:(id)a0;

@end
