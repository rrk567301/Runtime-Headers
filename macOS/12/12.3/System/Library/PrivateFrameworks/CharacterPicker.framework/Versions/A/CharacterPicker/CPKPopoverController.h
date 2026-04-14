@class CPKCharactersView, NSString, NSArray, CPKCategoriesView, CPKDataProvider, CPKSearchView, NSMutableArray, NSDictionary, CPSearchManager, CPKBottomView;

@interface CPKPopoverController : NSViewController <CPKCharactersViewDelegate, CPKCharactersViewDataSource, NSSearchFieldDelegate, NSWindowDelegate> {
    CPKBottomView *_bottomView;
    CPSearchManager *_searchManager;
    long long _lastCategoryIndex;
    NSMutableArray *_categorySectionTitle;
    NSDictionary *_wholeCharCache;
    long long _maxSearchCount;
    long long _numberOfRecentsCategories;
    BOOL _searchViewShown;
    BOOL _nowSearching;
    BOOL _madeSelectionWhileSearching;
    BOOL _symbolCategoriesInitialized;
}

@property (readonly) CPKDataProvider *dataProvider;
@property (readonly) CPKCategoriesView *categoriesView;
@property (readonly) CPKCharactersView *charactersView;
@property (readonly) CPKSearchView *searchView;
@property (retain) NSArray *lastSearchResult;
@property (nonatomic) BOOL detachedWindow;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly) BOOL isEmojiIMMode;
@property (copy) NSArray *savedRecents;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (long long)numberOfSections;
- (id)initWithController:(id)a0;
- (void)setDataProvider:(id)a0;
- (void)_characterViewerButtonClicked:(id)a0;
- (void)openExternalCharacterViewerWindow;
- (void)prepareRelease;
- (BOOL)isEmojiCategorySelectedInLastState:(id)a0 withDataSource:(id)a1;
- (void)popoverWillClosed;
- (void)popoverDidClosed;
- (void)popoverDidOpened;
- (void)_searchFieldTextDidChange:(id)a0;
- (void)categoryMatrixSelectionWillChanged:(id)a0;
- (void)categoryMatrixSelectionDidChanged:(id)a0;
- (void)characterDidSelectedInController:(id)a0;
- (void)prefsUpdatedExternally:(id)a0;
- (void)searchFieldDidFocused:(id)a0;
- (void)searchFieldTextChangedImmediately:(id)a0;
- (void)_setupInitialFirstResponder;
- (void)_lastPhasedInitialization;
- (BOOL)_isEmojiCategoriesIndex:(long long)a0 withDataSource:(id)a1;
- (void)_symbolCategoriesInitializationSync;
- (void)_rootCategorySelected:(long long)a0 scrollCharacters:(BOOL)a1 clearSearch:(BOOL)a2 forceUpdate:(BOOL)a3;
- (long long)_dataSectionFromCategory:(long long)a0;
- (long long)_dataSectionFromTableSection:(long long)a0;
- (long long)_categoryFromDataSection:(long long)a0;
- (BOOL)hasShownDiversityAlert;
- (void)_showSkinToneHelpWithCharacterInfo:(id)a0;
- (void)_handleConfirmCharacterInfo:(id)a0;
- (void)setHasShownDiversityAlert;
- (long long)numberOfCharactersOfSection:(long long)a0;
- (BOOL)_isEmojiFontPreferredSection:(long long)a0;
- (void)charactersView:(id)a0 didChangedHighlightToIndex:(long long)a1 ofSection:(long long)a2 byMouse:(BOOL)a3;
- (void)charactersView:(id)a0 didConfirmCharacter:(id)a1 withFont:(id)a2 byDrag:(BOOL)a3;
- (void)charactersView:(id)a0 didScrolledToSection:(long long)a1 fromSection:(long long)a2;
- (void)charactersViewDidCancelOperation:(id)a0;
- (id)titleOfSection:(long long)a0 localized:(BOOL)a1;
- (BOOL)isValidIndex:(long long)a0 ofSection:(long long)a1;
- (id)characterAtIndex:(long long)a0 ofSection:(long long)a1 withSpecificFont:(id *)a2;
- (BOOL)hasSkinToneVariantsAtIndex:(long long)a0 ofSection:(long long)a1 hasSelected:(BOOL *)a2;
- (id)preferredFontsOfSection:(long long)a0 fallbackType:(long long *)a1;
- (BOOL)_isEmojiSection:(long long)a0;
- (BOOL)_isEmojiCategory:(long long)a0;

@end
