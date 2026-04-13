@interface SCRPopover : SCRMapElement <SCRApplicationDirectChildProtocol>

- (void)dealloc;
- (id)roleDescription;
- (id)initWithUIElement:(id)a0 parent:(id)a1;
- (void)setFocusedChild:(id)a0;
- (id)nameForGuide;
- (void)setKeyboardChild:(id)a0 force:(BOOL)a1;
- (BOOL)showInGuide;
- (id)originatedFromElement;
- (long long)groupBehavior;
- (void)_layoutDidChange:(id)a0;
- (id)_shortDescriptionForElement:(id)a0;

@end
