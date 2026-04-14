@class SCRElement;

@interface SCRiBooksWebArea : SCRWebArea

@property (retain, nonatomic) SCRElement *cachedFirstChildForFocusing;

- (void).cxx_destruct;
- (id)roleDescription;
- (BOOL)focusInto:(id)a0 event:(id)a1;
- (Class)classForChildUIElement:(id)a0 parent:(id)a1;
- (BOOL)navigatingWithWebGroups;
- (BOOL)moveOutWithEvent:(id)a0 request:(id)a1;
- (void)addElementToHistory:(id)a0;
- (void)addElementToHistory:(id)a0 event:(id)a1;
- (id)removeLastUIElementFromHistory;
- (id)lastNavigatedValidUIElement;
- (void)flushElementHistory;
- (id)screenHistory;
- (void)startNewScreen;
- (void)flushCurrentScreen;
- (id)parentVendor;
- (id)elementHistoryVendor;
- (BOOL)shouldMapElement:(id)a0;
- (BOOL)handleInvertedTDownWithEvent:(id)a0 request:(id)a1;
- (BOOL)handleInvertedTUpWithEvent:(id)a0 request:(id)a1;
- (id)rotorIdentifiers;
- (id)_elementForEmptyPageScrollFocusElement;
- (BOOL)turnPage:(BOOL)a0 fromSource:(long long)a1;
- (BOOL)_handleRotorWithDirection:(BOOL)a0 event:(id)a1 request:(id)a2;
- (BOOL)_handleParagraphRotorWithDirection:(BOOL)a0 event:(id)a1 request:(id)a2;
- (id)_bookContentAtIndex:(unsigned long long)a0 container:(id)a1;
- (id)_bookContentContainer;

@end
