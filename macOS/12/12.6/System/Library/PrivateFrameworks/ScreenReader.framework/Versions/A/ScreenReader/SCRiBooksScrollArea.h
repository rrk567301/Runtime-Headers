@interface SCRiBooksScrollArea : SCRScrollArea {
    BOOL _iBooksRegisteredMovedNotification;
}

- (void)dealloc;
- (id)firstChildForFocusing;
- (id)initWithUIElement:(id)a0 parent:(id)a1;
- (void)addItemDescriptionToRequest:(id)a0;
- (Class)classForChildUIElement:(id)a0 parent:(id)a1;
- (BOOL)outputVirtualNavigationWithEvent:(id)a0 commandString:(id)a1 request:(id)a2 keyboardSynched:(BOOL)a3 allowScrolling:(BOOL)a4;
- (BOOL)shouldPromoteUIElement:(id)a0;
- (BOOL)moveLeftWithEvent:(id)a0 request:(id)a1 allowFullWrapping:(BOOL)a2;
- (BOOL)moveRightWithEvent:(id)a0 request:(id)a1 allowFullWrapping:(BOOL)a2;
- (void)iBooksMovedNotification:(id)a0;
- (id)iBooksFocusedWebArea;
- (id)iBooksFirstVisibleWebArea;
- (id)iBooksCurrentWebArea;
- (void)iBooksSyncWebAreaWithScrollArea:(id)a0;

@end
