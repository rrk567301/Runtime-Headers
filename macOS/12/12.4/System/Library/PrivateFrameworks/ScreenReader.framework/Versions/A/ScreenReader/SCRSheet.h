@class SCRElementHistory, NSMutableDictionary;

@interface SCRSheet : SCRMapElement <SCRElementHistoryVendor> {
    BOOL _hasToolbarPalette;
    SCRElementHistory *_elementHistory;
    NSMutableDictionary *_trackedElements;
}

- (BOOL)isValid;
- (void).cxx_destruct;
- (id)typeDescription;
- (id)initWithUIElement:(id)a0 parent:(id)a1;
- (void)setFocusedChild:(id)a0;
- (void)setKeyboardChild:(id)a0;
- (void)setKeyboardChild:(id)a0 force:(BOOL)a1;
- (id)lastNavigatedValidUIElement;
- (id)parentVendor;
- (BOOL)performDefaultActionWithRequest:(id)a0 allowClick:(BOOL)a1;
- (void)setTrackedElement:(id)a0 key:(id)a1;
- (id)trackedElementsForKey:(id)a0;
- (long long)groupBehavior;
- (BOOL)interactUpWithEvent:(id)a0 request:(id)a1;
- (BOOL)interactLeftWithEvent:(id)a0 request:(id)a1;
- (BOOL)moveToFirstVisibleElementWithEvent:(id)a0 request:(id)a1;
- (BOOL)shouldSpeakItemCountWhenFocusingIn;
- (BOOL)shouldFocusOntoChild:(id)a0;
- (BOOL)handleUntaggedOperationWithEvent:(id)a0 request:(id)a1;
- (BOOL)startWindowContentFeedback:(id)a0;
- (void)addElementToHistory:(id)a0;
- (id)removeLastUIElementFromHistory;
- (void)flushElementHistory;
- (id)buildDefaultChildrenWithUIElements:(id)a0;
- (BOOL)shouldTrackKeyboardOnFocusInto;
- (void)addToHistory;
- (id)prepareUIChildrenForNavigation:(id)a0;
- (void)buildResizeOptionsMenu:(id)a0;
- (BOOL)enableResizeModeWithRequest:(id)a0 handleIndex:(unsigned long long)a1;
- (BOOL)_moveToToolbarWithEvent:(id)a0 request:(id)a1;
- (BOOL)_handleNavigateToFirstLastElement:(id)a0 commandKey:(id)a1 event:(id)a2 request:(id)a3;
- (BOOL)_moveFirstInSheetWithEvent:(id)a0 request:(id)a1;
- (BOOL)_moveLastInSheetWithEvent:(id)a0 request:(id)a1;
- (id)_elementHistory;
- (void)_removeTrackedElementsForKey:(id)a0;

@end
