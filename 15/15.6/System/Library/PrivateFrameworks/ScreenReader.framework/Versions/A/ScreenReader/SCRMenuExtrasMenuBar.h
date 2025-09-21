@interface SCRMenuExtrasMenuBar : SCRWindow

- (id)typeDescription;
- (id)_menuExtras;
- (char)syncKBFocusToVOCursorWithOutputRequest:(id)a0 playSound:(char)a1 withSelection:(char)a2;
- (id)prepareUIChildrenForNavigation:(id)a0;
- (void)_handleSelectionChange;
- (id)buildDefaultChildrenWithUIElements:(id)a0;
- (char)handleEvent:(id)a0 request:(id)a1;
- (id)scanElementForMarkerSearch;
- (void)setIsEventHandler:(char)a0 isKeyboardHandler:(char)a1;
- (char)showInGuide;
- (id)titleDescription;

@end
