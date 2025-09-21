@class AXFUIElement;

@interface SCRMenuItem : SCRMapElement {
    struct CGPoint { double x; double y; } _cachedMidPoint;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _uiElementLock;
}

@property (retain, setter=setUIElement:) AXFUIElement *uiElement;

- (id)description;
- (id)typeDescription;
- (char)hasSubmenu;
- (char)isSelected;
- (id)valueDescription;
- (id)statusDescription;
- (id)defaultActionName;
- (char)interactRightWithEvent:(id)a0 request:(id)a1;
- (char)_hasInteractiveElementsInArray:(id)a0;
- (char)parentIsMenubar;
- (void)_addKeyboardShortcutToRequest:(id)a0;
- (void)_addString:(id)a0 toRequest:(id)a1 category:(id)a2 variants:(id)a3;
- (id)_containerOfInteractiveDescendants;
- (char)_hasInteractiveDescendants;
- (char)_hasNavigableChildrenInArray:(id)a0;
- (char)_isInlinePalette;
- (void)addElementSummaryToRequest:(id)a0;
- (void)addItemDescriptionForBrailleToRequest:(id)a0;
- (void)addItemDescriptionForCommand:(id)a0 toRequest:(id)a1 event:(id)a2;
- (void)addItemDescriptionToRequest:(id)a0;
- (void)addItemNameToRequest:(id)a0;
- (id)contextualHelpToSpeak;
- (unsigned long long)directInteractionArrowCaptureMask;
- (void)endFocus;
- (char)focusIntoMenuWithRequest:(id)a0;
- (char)gestureTrackingMovesSelectionToVOC;
- (long long)groupBehavior;
- (char)handleEvent:(id)a0 request:(id)a1;
- (char)handleReadValueChangeCallbackForEvent:(id)a0 request:(id)a1;
- (char)hasNavigableChildren;
- (void)highlightWithScrolling:(char)a0;
- (id)initWithUIElement:(id)a0 parent:(id)a1;
- (id)insideOfDescriptionForContextualHelp;
- (char)interactDownWithEvent:(id)a0 request:(id)a1;
- (char)interactLeftWithEvent:(id)a0 request:(id)a1;
- (char)isMenuBarItem;
- (char)isSubMenuVisible;
- (char)itemDescriptionHasChanged;
- (char)monitorItemDescriptionChanges;
- (void)outputChildrenSummary:(id)a0;
- (id)shortInstruction;
- (id)shortcutSelectionElements;
- (char)synchVOCursorToKeyboard:(id)a0;
- (id)titleDescription;

@end
