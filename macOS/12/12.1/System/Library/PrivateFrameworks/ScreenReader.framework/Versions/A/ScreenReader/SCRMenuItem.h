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
- (void)addItemNameToRequest:(id)a0;
- (id)initWithUIElement:(id)a0 parent:(id)a1;
- (void)addItemDescriptionToRequest:(id)a0;
- (void)addElementSummaryToRequest:(id)a0;
- (id)titleDescription;
- (void)highlightWithScrolling:(BOOL)a0;
- (BOOL)handleEvent:(id)a0 request:(id)a1;
- (id)contextualHelpToSpeak;
- (void)endFocus;
- (void)addItemDescriptionForCommand:(id)a0 toRequest:(id)a1 event:(id)a2;
- (long long)groupBehavior;
- (unsigned long long)directInteractionArrowCaptureMask;
- (BOOL)interactDownWithEvent:(id)a0 request:(id)a1;
- (BOOL)interactLeftWithEvent:(id)a0 request:(id)a1;
- (BOOL)interactRightWithEvent:(id)a0 request:(id)a1;
- (BOOL)synchVOCursorToKeyboard:(id)a0;
- (id)captionDescriptionContainsUserLabel:(BOOL *)a0 containsAncestorLabel:(BOOL *)a1;
- (BOOL)monitorItemDescriptionChanges;
- (void)addItemDescriptionForBrailleToRequest:(id)a0;
- (BOOL)gestureTrackingMovesSelectionToVOC;
- (BOOL)handleReadValueChangeCallbackForEvent:(id)a0 request:(id)a1;
- (id)insideOfDescriptionForContextualHelp;
- (id)shortInstruction;
- (BOOL)itemDescriptionHasChanged;
- (BOOL)isSubMenuVisible;
- (BOOL)isMenuBarItem;
- (id)shortcutSelectionElements;
- (BOOL)focusIntoMenuWithRequest:(id)a0;
- (BOOL)parentIsMenubar;
- (BOOL)_hasNavigableChildrenInArray:(id)a0;
- (BOOL)_hasInteractiveElementsInArray:(id)a0;
- (BOOL)hasNavigableChildren;
- (void)outputChildrenSummary:(id)a0;
- (BOOL)_hasInteractiveDescendants;
- (id)_containerOfInteractiveDescendants;
- (void)_addKeyboardShortcutToRequest:(id)a0;

@end
