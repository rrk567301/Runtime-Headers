@class SCRElement;

@interface SCRiBooksWebArea : SCRWebArea

@property (retain, nonatomic) SCRElement *cachedFirstChildForFocusing;

- (void).cxx_destruct;
- (id)roleDescription;
- (id)_bookContentAtIndex:(unsigned long long)a0 container:(id)a1;
- (id)_bookContentContainer;
- (void)_checkPageDidTurn;
- (id)_elementForEmptyPageScrollFocusElement;
- (char)_handleParagraphRotorWithDirection:(char)a0 event:(id)a1 request:(id)a2;
- (char)_handleRotorWithDirection:(char)a0 event:(id)a1 request:(id)a2;
- (void)addElementToHistory:(id)a0;
- (void)addElementToHistory:(id)a0 event:(id)a1;
- (Class)classForChildUIElement:(id)a0 parent:(id)a1;
- (id)elementHistoryVendor;
- (void)flushCurrentScreen;
- (void)flushElementHistory;
- (char)focusInto:(id)a0 event:(id)a1;
- (char)handleInvertedTDownWithEvent:(id)a0 request:(id)a1;
- (char)handleInvertedTUpWithEvent:(id)a0 request:(id)a1;
- (id)lastNavigatedValidUIElement;
- (char)moveOutWithEvent:(id)a0 request:(id)a1;
- (char)navigatingWithWebGroups;
- (id)parentVendor;
- (id)removeLastUIElementFromHistory;
- (id)rotorIdentifiers;
- (id)screenHistory;
- (char)shouldMapElement:(id)a0;
- (char)shouldNavigate;
- (void)startNewScreen;
- (char)turnPage:(char)a0 fromSource:(long long)a1;

@end
