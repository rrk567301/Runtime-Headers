@interface SCRMenuExtrasMenuBar : SCRWindow

- (id)typeDescription;
- (id)_menuExtras;
- (void)setIsEventHandler:(BOOL)a0 isKeyboardHandler:(BOOL)a1;
- (BOOL)showInGuide;
- (id)titleDescription;
- (BOOL)handleEvent:(id)a0 request:(id)a1;
- (BOOL)syncKBFocusToVOCursorWithOutputRequest:(id)a0 playSound:(BOOL)a1 withSelection:(BOOL)a2;
- (id)buildDefaultChildrenWithUIElements:(id)a0;
- (id)prepareUIChildrenForNavigation:(id)a0;
- (void)_handleSelectionChange;
- (id)scanElementForMarkerSearch;

@end
