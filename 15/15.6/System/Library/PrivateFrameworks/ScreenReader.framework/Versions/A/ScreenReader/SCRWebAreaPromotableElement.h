@class NSArray, SCRElement;

@interface SCRWebAreaPromotableElement : SCRPromotableElement {
    unsigned long long _childIndex;
    SCRElement *_readContentsElement;
    NSArray *_stitchedTextElements;
    long long _childrenCount;
}

- (void).cxx_destruct;
- (id)children:(char)a0;
- (void)_setChildIndex:(long long)a0;
- (long long)brailleLineType;
- (char)interactRightWithEvent:(id)a0 request:(id)a1;
- (void)_addFirstChildDescription:(id)a0 itemCount:(long long)a1 toRequest:(id)a2;
- (char)_autoDrillShouldAnnounceBorderCross;
- (long long)_childIndex;
- (id)_itemCountOutputAfterFirstChildDescription:(long long)a0;
- (void)_setReadContentsElement:(id)a0;
- (void)_updateChildrenCountAndStitchedText;
- (void)addItemNameToRequest:(id)a0;
- (char)allowMappingIfZeroSize;
- (void)beginFocusFromElement:(id)a0 withEvent:(id)a1;
- (char)canWrapWhileNavigating;
- (id)childAtIndex:(unsigned long long)a0 visibleOnly:(char)a1;
- (id)childInAXOrderForward:(char)a0 horizontal:(char)a1 visibleOnly:(char)a2 wrapped:(char *)a3 didHitBoundary:(char *)a4 startElement:(id)a5;
- (id)childrenInReadContentsOrder;
- (Class)classForChildUIElement:(id)a0 parent:(id)a1;
- (char)containsStitchedText;
- (char)defersKeyboardHelpCommandsToParent;
- (id)firstChildForFocusing;
- (char)focusInto:(id)a0 event:(id)a1;
- (id)focusOntoUIElement:(id)a0 withScrolling:(char)a1 withSelection:(char)a2;
- (void)forgetReadContentsElement;
- (char)handleEvent:(id)a0 request:(id)a1;
- (unsigned long long)indexOfElement:(id)a0 visibleOnly:(char)a1;
- (id)initWithUIElement:(id)a0 parent:(id)a1;
- (char)interactLeftWithEvent:(id)a0 request:(id)a1;
- (char)isGestureContainerElement;
- (id)lastChildForFocusing;
- (char)moveFirstWithEvent:(id)a0 request:(id)a1 visibleOnly:(char)a2;
- (char)moveLastWithEvent:(id)a0 request:(id)a1 visibleOnly:(char)a2;
- (char)needToRebuildChildren;
- (unsigned long long)numberOfChildren:(char)a0;
- (id)prepareArrayToFocusInto;
- (void)prepareReadContentsElementVisibleOnly:(char)a0;
- (id)readContentsElement;
- (unsigned long long)readContentsElementCount;
- (char)shouldIncludeInItemChooser;
- (char)shouldMapElement:(id)a0;
- (char)shouldPromoteForMovingUIElement:(id)a0;
- (char)shouldPromoteUIElement:(id)a0;
- (id)stitchedTextElements;
- (id)visibleChildrenDescriptionIgnoringElements:(id)a0;

@end
