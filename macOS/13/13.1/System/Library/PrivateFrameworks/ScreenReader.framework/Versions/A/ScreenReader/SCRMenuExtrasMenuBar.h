@interface SCRMenuExtrasMenuBar : SCRWindow

- (id)typeDescription;
- (id)_menuExtras;
- (BOOL)showInGuide;
- (BOOL)handleEvent:(id)a0 request:(id)a1;
- (BOOL)syncKBFocusToVOCursorWithOutputRequest:(id)a0 playSound:(BOOL)a1 withSelection:(BOOL)a2;
- (void)setIsEventHandler:(BOOL)a0 isKeyboardHandler:(BOOL)a1;
- (id)titleDescription;
- (id)buildDefaultChildrenWithUIElements:(id)a0;
- (id)prepareUIChildrenForNavigation:(id)a0;
- (void)_handleSelectionChange;
- (id)scanElementForMarkerSearch;

@end
