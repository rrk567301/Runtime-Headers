@class SCRElement;

@interface SCRWebAreaBookendGroup : SCRElement <SCRWebElementAutoDrillAndAnnounceNavigationProtocol> {
    long long _childIndex;
    SCRElement *_readContentsElement;
}

+ (void)addStartBookendDescription:(id)a0 toRequest:(id)a1;

- (void).cxx_destruct;
- (id)typeDescription;
- (char)isInteractive;
- (void)_setChildIndex:(long long)a0;
- (char)interactRightWithEvent:(id)a0 request:(id)a1;
- (void)scrollToElement;
- (long long)_childIndex;
- (char)_isVideoWithSource;
- (void)_rebuildElementOnSameLevel;
- (void)_setReadContentsElement:(id)a0;
- (char)_treatAsEmptyGroup;
- (void)addBorderCrossedDescriptionToRequest:(id)a0 forDirection:(long long)a1;
- (void)addContentToRequest:(id)a0 visibleOnly:(char)a1;
- (void)addEndBookendToRequest:(id)a0;
- (void)addItemDescriptionForInteractionToRequest:(id)a0;
- (void)addItemDescriptionToRequest:(id)a0;
- (void)addItemNameToRequest:(id)a0;
- (void)addStartBookendToRequest:(id)a0;
- (char)allowFocusThroughSingleChild;
- (void)beginFocusFromElement:(id)a0 withEvent:(id)a1;
- (char)canWrapWhileNavigating;
- (id)childInAXOrderForward:(char)a0 horizontal:(char)a1 visibleOnly:(char)a2 wrapped:(char *)a3 didHitBoundary:(char *)a4 startElement:(id)a5;
- (id)childrenInReadContentsOrder;
- (Class)classForChildUIElement:(id)a0 parent:(id)a1;
- (void)endFocus;
- (id)firstChildForFocusing;
- (char)focusInto:(id)a0 event:(id)a1;
- (void)focusOntoAutoDrillAndAnnouceWebElement:(id)a0;
- (id)focusOntoUIElement:(id)a0 withScrolling:(char)a1 withSelection:(char)a2;
- (void)forgetReadContentsElement;
- (long long)groupBehavior;
- (char)handleEvent:(id)a0 request:(id)a1;
- (id)initWithUIElement:(id)a0 parent:(id)a1;
- (char)interactLeftWithEvent:(id)a0 request:(id)a1;
- (char)isDepthLevelElement;
- (id)lastChildForFocusing;
- (void)moveToElement:(id)a0 withEvent:(id)a1 allowAutoFocusToChildren:(char)a2;
- (char)moveToFirstVisibleElementWithEvent:(id)a0 request:(id)a1;
- (char)moveToLastVisibleElementWithEvent:(id)a0 request:(id)a1;
- (char)needToRebuildChildren;
- (id)prepareArrayToFocusInto;
- (void)prepareReadContentsElementVisibleOnly:(char)a0;
- (id)readContentsElement;
- (unsigned long long)readContentsElementCount;
- (void)restoreStateDueToInvalidFocusedChild:(id)a0;
- (void)setFocusedChild:(id)a0;
- (char)shouldMapElement:(id)a0;
- (char)shouldNavigate;
- (char)shouldPromoteUIElement:(id)a0;
- (char)shouldSpeakItemCountWhenFocusingIn;
- (id)titleDescription;
- (char)webElementSuperInteractDownWithEvent:(id)a0 request:(id)a1;
- (char)webElementSuperInteractLeftWithEvent:(id)a0 request:(id)a1;
- (char)webElementSuperInteractRightWithEvent:(id)a0 request:(id)a1;
- (char)webElementSuperInteractUpWithEvent:(id)a0 request:(id)a1;

@end
