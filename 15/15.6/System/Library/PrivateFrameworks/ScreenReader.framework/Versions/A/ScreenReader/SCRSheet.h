@class NSString, NSMutableArray, SCRElementHistory;

@interface SCRSheet : SCRMapElement <SCRElementHistoryVendor> {
    char _hasToolbarPalette;
    SCRElementHistory *_elementHistory;
}

@property (retain, nonatomic) NSMutableArray *_trackedItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (char)isValid;
- (void).cxx_destruct;
- (id)typeDescription;
- (id)_elementHistory;
- (id)prepareUIChildrenForNavigation:(id)a0;
- (char)_handleNavigateToFirstLastElement:(id)a0 commandKey:(id)a1 event:(id)a2 request:(id)a3;
- (char)_moveFirstInSheetWithEvent:(id)a0 request:(id)a1;
- (char)_moveLastInSheetWithEvent:(id)a0 request:(id)a1;
- (char)_moveToToolbarWithEvent:(id)a0 request:(id)a1;
- (void)_regenerateSystemSections;
- (void)_removeAllTrackedElements;
- (void)_removeTrackedElementsForKey:(id)a0;
- (void)addElementToHistory:(id)a0;
- (void)addElementToHistory:(id)a0 event:(id)a1;
- (void)addToHistory;
- (id)allTrackedItemsInfoWithUpdate:(char)a0;
- (id)buildDefaultChildrenWithUIElements:(id)a0;
- (void)buildResizeOptionsMenu:(id)a0;
- (char)enableResizeModeWithRequest:(id)a0 handleIndex:(unsigned long long)a1;
- (void)flushCurrentScreen;
- (void)flushElementHistory;
- (long long)groupBehavior;
- (char)handleUntaggedOperationWithEvent:(id)a0 request:(id)a1;
- (id)initWithUIElement:(id)a0 parent:(id)a1;
- (char)interactLeftWithEvent:(id)a0 request:(id)a1;
- (char)interactUpWithEvent:(id)a0 request:(id)a1;
- (id)lastNavigatedValidUIElement;
- (char)moveToFirstVisibleElementWithEvent:(id)a0 request:(id)a1;
- (id)parentVendor;
- (char)performDefaultActionWithRequest:(id)a0 allowClick:(char)a1;
- (id)removeLastUIElementFromHistory;
- (id)screenHistory;
- (void)setFocusedChild:(id)a0;
- (void)setKeyboardChild:(id)a0;
- (void)setKeyboardChild:(id)a0 force:(char)a1;
- (void)setTrackedElement:(id)a0 key:(id)a1;
- (char)shouldFocusOntoChild:(id)a0;
- (char)shouldSpeakItemCountWhenFocusingIn;
- (char)shouldTrackKeyboardOnFocusInto;
- (void)startNewScreen;
- (char)startWindowContentFeedback:(id)a0;
- (id)trackedElementForKey:(id)a0;

@end
