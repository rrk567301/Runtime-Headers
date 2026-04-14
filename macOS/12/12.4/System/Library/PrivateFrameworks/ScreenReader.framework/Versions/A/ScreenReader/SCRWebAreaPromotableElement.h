@class NSArray, SCRElement;

@interface SCRWebAreaPromotableElement : SCRPromotableElement {
    unsigned long long _childIndex;
    SCRElement *_readContentsElement;
    NSArray *_stitchedTextElements;
    long long _childrenCount;
}

- (void).cxx_destruct;
- (id)children:(BOOL)a0;
- (long long)_childIndex;
- (void)addItemNameToRequest:(id)a0;
- (id)firstChildForFocusing;
- (BOOL)shouldIncludeInItemChooser;
- (BOOL)focusInto:(id)a0 event:(id)a1;
- (id)initWithUIElement:(id)a0 parent:(id)a1;
- (id)prepareArrayToFocusInto;
- (BOOL)defersKeyboardHelpCommandsToParent;
- (BOOL)handleEvent:(id)a0 request:(id)a1;
- (void)beginFocusFromElement:(id)a0 withEvent:(id)a1;
- (Class)classForChildUIElement:(id)a0 parent:(id)a1;
- (id)readContentsElement;
- (void)_setReadContentsElement:(id)a0;
- (BOOL)interactLeftWithEvent:(id)a0 request:(id)a1;
- (BOOL)interactRightWithEvent:(id)a0 request:(id)a1;
- (id)focusOntoUIElement:(id)a0 withScrolling:(BOOL)a1 withSelection:(BOOL)a2;
- (BOOL)shouldPromoteForMovingUIElement:(id)a0;
- (unsigned long long)readContentsElementCount;
- (void)prepareReadContentsElementVisibleOnly:(BOOL)a0;
- (void)forgetReadContentsElement;
- (id)childrenInReadContentsOrder;
- (unsigned long long)indexOfElement:(id)a0 visibleOnly:(BOOL)a1;
- (unsigned long long)numberOfChildren:(BOOL)a0;
- (BOOL)needToRebuildChildren;
- (BOOL)allowMappingIfZeroSize;
- (id)lastChildForFocusing;
- (long long)brailleLineType;
- (BOOL)moveFirstWithEvent:(id)a0 request:(id)a1 visibleOnly:(BOOL)a2;
- (BOOL)moveLastWithEvent:(id)a0 request:(id)a1 visibleOnly:(BOOL)a2;
- (BOOL)shouldPromoteUIElement:(id)a0;
- (void)_setChildIndex:(long long)a0;
- (BOOL)shouldMapElement:(id)a0;
- (id)childAtIndex:(unsigned long long)a0 visibleOnly:(BOOL)a1;
- (BOOL)canWrapWhileNavigating;
- (id)childInAXOrderForward:(BOOL)a0 horizontal:(BOOL)a1 visibleOnly:(BOOL)a2 wrapped:(BOOL *)a3 didHitBoundary:(BOOL *)a4 startElement:(id)a5;
- (BOOL)containsStitchedText;
- (id)stitchedTextElements;
- (BOOL)isGestureContainerElement;
- (id)visibleChildrenDescriptionIgnoringChild:(id)a0;
- (BOOL)_autoDrillShouldAnnounceBorderCross;
- (void)_addFirstChildDescription:(id)a0 itemCount:(long long)a1 toRequest:(id)a2;
- (id)_itemCountOutputAfterFirstChildDescription:(long long)a0;

@end
