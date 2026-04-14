@class SCRUIElement;

@interface SCRMenuItem : SCRMapElement {
    struct CGPoint { double x; double y; } _cachedMidPoint;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _uiElementLock;
}

@property (retain, setter=setUIElement:) SCRUIElement *uiElement;

- (id)description;
- (id)typeDescription;
- (BOOL)hasSubmenu;
- (BOOL)isSelected;
- (id)valueDescription;
- (id)statusDescription;
- (id)defaultActionName;
- (id)initWithUIElement:(id)a0 parent:(id)a1;
- (void)addItemNameToRequest:(id)a0;
- (BOOL)handleEvent:(id)a0 request:(id)a1;
- (void)addItemDescriptionToRequest:(id)a0;
- (void)addItemDescriptionForCommand:(id)a0 toRequest:(id)a1 event:(id)a2;
- (long long)groupBehavior;
- (unsigned long long)directInteractionArrowCaptureMask;
- (BOOL)interactDownWithEvent:(id)a0 request:(id)a1;
- (BOOL)interactLeftWithEvent:(id)a0 request:(id)a1;
- (BOOL)interactRightWithEvent:(id)a0 request:(id)a1;
- (BOOL)synchVOCursorToKeyboard:(id)a0;
- (BOOL)monitorItemDescriptionChanges;
- (id)titleDescription;
- (void)addItemDescriptionForBrailleToRequest:(id)a0;
- (BOOL)gestureTrackingMovesSelectionToVOC;
- (void)endFocus;
- (void)highlightWithScrolling:(BOOL)a0;
- (BOOL)handleReadValueChangeCallbackForEvent:(id)a0 request:(id)a1;
- (BOOL)itemDescriptionHasChanged;
- (void)addElementSummaryToRequest:(id)a0;
- (id)shortInstruction;
- (id)insideOfDescriptionForContextualHelp;
- (id)contextualHelpToSpeak;
- (BOOL)isSubMenuVisible;
- (BOOL)parentIsMenubar;
- (BOOL)hasNavigableChildren;
- (BOOL)_hasNavigableChildrenInArray:(id)a0;
- (BOOL)_hasInteractiveElementsInArray:(id)a0;
- (BOOL)_hasInteractiveDescendants;
- (id)_containerOfInteractiveDescendants;
- (BOOL)focusIntoMenuWithRequest:(id)a0;
- (void)outputChildrenSummary:(id)a0;
- (void)_addKeyboardShortcutToRequest:(id)a0;
- (BOOL)isMenuBarItem;
- (id)shortcutSelectionElements;

@end
