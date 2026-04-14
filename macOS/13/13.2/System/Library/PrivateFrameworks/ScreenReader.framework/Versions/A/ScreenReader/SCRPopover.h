@interface SCRPopover : SCRMapElement <SCRApplicationDirectChildProtocol>

- (void)dealloc;
- (id)roleDescription;
- (id)initWithUIElement:(id)a0 parent:(id)a1;
- (id)nameForGuide;
- (void)setKeyboardChild:(id)a0 force:(BOOL)a1;
- (BOOL)showInGuide;
- (void)setFocusedChild:(id)a0;
- (long long)groupBehavior;
- (void)_layoutDidChange:(id)a0;
- (id)_shortDescriptionForElement:(id)a0;
- (id)originatedFromElement;

@end
