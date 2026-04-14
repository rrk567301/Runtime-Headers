@interface SCRMenuExtrasMenuBar : SCRWindow

- (id)typeDescription;
- (id)_menuExtras;
- (id)prepareUIChildrenForNavigation:(id)a0;
- (BOOL)syncKBFocusToVOCursorWithOutputRequest:(id)a0 playSound:(BOOL)a1 withSelection:(BOOL)a2;
- (void)_handleSelectionChange;
- (id)buildDefaultChildrenWithUIElements:(id)a0;
- (BOOL)handleEvent:(id)a0 request:(id)a1;
- (id)scanElementForMarkerSearch;
- (void)setIsEventHandler:(BOOL)a0 isKeyboardHandler:(BOOL)a1;
- (BOOL)showInGuide;
- (id)titleDescription;

@end
