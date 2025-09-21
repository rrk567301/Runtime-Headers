@class NSString;

@interface SCRDockGroup : SCRGroup {
    NSString *_previousFocusedChildWindowType;
}

- (void).cxx_destruct;
- (void)_describeFocusedChild;
- (void)_resetToItemInDirection:(id)a0;
- (char)outputVirtualNavigationWithEvent:(id)a0 commandString:(id)a1 request:(id)a2 keyboardSynched:(char)a3 allowScrolling:(char)a4;
- (void)setFocusedChild:(id)a0;
- (char)shouldPromoteUIElement:(id)a0;

@end
