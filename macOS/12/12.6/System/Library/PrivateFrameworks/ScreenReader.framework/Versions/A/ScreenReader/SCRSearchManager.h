@class SCRVisualsManager, SCRUIElement, _SCRSearchData, NSMutableString, NSMutableArray;

@interface SCRSearchManager : NSObject {
    NSMutableArray *_findTextSearchHistory;
    BOOL _findTextSearchHistoryModified;
    NSMutableString *_currentFindTextBuffer;
    long long _findTextCurrentSearchPosition;
    unsigned long long _currentFindTextInsertionPoint;
    BOOL _isFindTextSelected;
    long long _previousHeadingLevel;
    long long _previousTableItemLevel;
}

@property (readonly, nonatomic) SCRVisualsManager *_visualsManager;
@property (retain, nonatomic) _SCRSearchData *_searchData;
@property (retain, nonatomic) SCRUIElement *_previouslyFoundUIElementFromMarker;
@property (nonatomic) long long _previouslyFocusedElementHash;

+ (void)initialize;
+ (id)searchManager;

- (id)init;
- (void).cxx_destruct;
- (long long)performSearchWithSearchString:(id)a0 orAttribute:(long long)a1 inDirection:(long long)a2 request:(id)a3 element:(id)a4 stayWithin:(id)a5;
- (BOOL)handleTaggedOperationWithEvent:(id)a0 request:(id)a1 element:(id)a2;
- (BOOL)handleSearchOperationWithEvent:(id)a0 request:(id)a1 element:(id)a2;
- (BOOL)enableFindTextModeWithRequest:(id)a0 element:(id)a1;
- (void)_setSearchWindowEnabled:(BOOL)a0;
- (BOOL)_switchStringBuffer:(long long)a0 request:(id)a1;
- (BOOL)_outputFindText:(id)a0 request:(id)a1;
- (BOOL)_deleteFindText:(id)a0 request:(id)a1;
- (BOOL)_handlePasteCommand:(id)a0;
- (BOOL)_moveFindTextInsertionPointForward:(BOOL)a0 request:(id)a1;
- (BOOL)_processFindTextCharacterEntryWithEvent:(id)a0 request:(id)a1;
- (void)_updateFindTextDisplay;
- (void)_saveFindTextSearchHistory;
- (void)_setCurrentFindTextBuffer:(id)a0;
- (void)_setSearchWindowText:(id)a0;
- (void)_addFindTextSearchStringToHistory:(id)a0;
- (void)_sendBrailleLineForSearch:(id)a0 withSelection:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)_setSearchWindowSelectionRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (long long)_findText:(id)a0 inDirection:(long long)a1 request:(id)a2 element:(id)a3;
- (void)_updateElementRotor:(long long)a0;
- (void)_fallbackOnFailedSearchWithElement:(id)a0 request:(id)a1;
- (id)_elementSearchContainerForElement:(id)a0;
- (BOOL)_findString:(id)a0 inString:(id)a1 position:(long long)a2 searchOptions:(unsigned long long)a3;
- (id)_elementSearchWithStartElement:(id)a0;
- (id)_searchResultMarkerForWebTextField:(id)a0;
- (id)_markerForElement:(id)a0;
- (BOOL)_compareMarker:(id)a0 withString:(id)a1 position:(long long)a2;
- (BOOL)_compareSearchDataAttributeForMarker:(id)a0 forElement:(id)a1;
- (id)_findMatchingMarkerForElement:(id)a0 dove:(BOOL)a1 diveLevel:(long long)a2;
- (id)_replaceImageContainedByLinkWithLinkIfNeeded:(id)a0;
- (id)_moveToNonWebTextElement:(id)a0 uiElement:(id)a1;
- (long long)_performSearchWithSearchString:(id)a0 webText:(id)a1 uiElement:(id)a2 direction:(long long)a3 marker:(id)a4 request:(id)a5;
- (id)_searchNotFoundString;
- (id)_searchNoExistingTypeString;
- (long long)_iOSPerformSearchWithSearchString:(id)a0 orAttribute:(long long)a1 inDirection:(long long)a2 request:(id)a3 element:(id)a4 stayWithin:(id)a5;
- (id)_performRemoteSearchWithSearchString:(id)a0 searchKey:(long long)a1 direction:(long long)a2 element:(id)a3;
- (long long)_handleTextSearchResult:(id)a0 fromElement:(id)a1 request:(id)a2;
- (void)_populateDataWithStitchedTextElement:(id)a0 direction:(long long)a1;
- (id)_populateDataWithWebTextElement:(id)a0 direction:(long long)a1;
- (void)_populateDataWithTextElement:(id)a0;
- (id)_performWrapWithElement:(id)a0 direction:(long long)a1;
- (long long)_performSearchWithSearchString:(id)a0 searchAttribute:(long long)a1 element:(id)a2 container:(id)a3 direction:(long long)a4 marker:(id)a5 request:(id)a6 brailleFocusedElement:(id *)a7;
- (id)_validProviderNearElement:(id)a0 attribute:(long long)a1;
- (id)_iOSGetElementForSearchWithSearchAttribute:(long long)a0 inDirection:(long long)a1 request:(id)a2 element:(id)a3 stayWithin:(id)a4 provider:(id)a5;
- (BOOL)_handleSearchCanceledWithEvent:(id)a0 request:(id)a1 element:(id)a2;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeForAttribute:(long long)a0 direction:(long long)a1 fromLocation:(double)a2 element:(id)a3;

@end
