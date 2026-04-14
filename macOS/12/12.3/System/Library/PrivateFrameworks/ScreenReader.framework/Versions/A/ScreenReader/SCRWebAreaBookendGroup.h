@class SCRElement;

@interface SCRWebAreaBookendGroup : SCRElement <SCRWebElementAutoDrillAndAnnounceNavigationProtocol> {
    long long _childIndex;
    SCRElement *_readContentsElement;
}

+ (void)addStartBookendDescription:(id)a0 toRequest:(id)a1;

- (void).cxx_destruct;
- (id)typeDescription;
- (BOOL)isInteractive;
- (long long)_childIndex;
- (void)addItemNameToRequest:(id)a0;
- (id)firstChildForFocusing;
- (BOOL)focusInto:(id)a0 event:(id)a1;
- (id)initWithUIElement:(id)a0 parent:(id)a1;
- (void)setFocusedChild:(id)a0;
- (void)addItemDescriptionToRequest:(id)a0;
- (void)addStartBookendToRequest:(id)a0;
- (void)addEndBookendToRequest:(id)a0;
- (BOOL)webElementSuperInteractUpWithEvent:(id)a0 request:(id)a1;
- (BOOL)webElementSuperInteractDownWithEvent:(id)a0 request:(id)a1;
- (BOOL)webElementSuperInteractLeftWithEvent:(id)a0 request:(id)a1;
- (BOOL)webElementSuperInteractRightWithEvent:(id)a0 request:(id)a1;
- (void)focusOntoAutoDrillAndAnnouceWebElement:(id)a0;
- (id)prepareArrayToFocusInto;
- (BOOL)allowFocusThroughSingleChild;
- (BOOL)handleEvent:(id)a0 request:(id)a1;
- (void)beginFocusFromElement:(id)a0 withEvent:(id)a1;
- (void)endFocus;
- (Class)classForChildUIElement:(id)a0 parent:(id)a1;
- (id)readContentsElement;
- (void)_setReadContentsElement:(id)a0;
- (long long)groupBehavior;
- (BOOL)interactLeftWithEvent:(id)a0 request:(id)a1;
- (BOOL)interactRightWithEvent:(id)a0 request:(id)a1;
- (BOOL)moveToFirstVisibleElementWithEvent:(id)a0 request:(id)a1;
- (BOOL)moveToLastVisibleElementWithEvent:(id)a0 request:(id)a1;
- (id)focusOntoUIElement:(id)a0 withScrolling:(BOOL)a1 withSelection:(BOOL)a2;
- (unsigned long long)readContentsElementCount;
- (void)prepareReadContentsElementVisibleOnly:(BOOL)a0;
- (void)forgetReadContentsElement;
- (id)childrenInReadContentsOrder;
- (BOOL)needToRebuildChildren;
- (void)addItemDescriptionForInteractionToRequest:(id)a0;
- (BOOL)shouldSpeakItemCountWhenFocusingIn;
- (void)addBorderCrossedDescriptionToRequest:(id)a0 forDirection:(long long)a1;
- (BOOL)shouldNavigate;
- (id)lastChildForFocusing;
- (BOOL)shouldPromoteUIElement:(id)a0;
- (void)addContentToRequest:(id)a0 visibleOnly:(BOOL)a1;
- (void)_setChildIndex:(long long)a0;
- (BOOL)shouldMapElement:(id)a0;
- (void)moveToElement:(id)a0 withEvent:(id)a1 allowAutoFocusToChildren:(BOOL)a2;
- (void)scrollToElement;
- (void)restoreStateDueToInvalidFocusedChild:(id)a0;
- (BOOL)canWrapWhileNavigating;
- (id)childInAXOrderForward:(BOOL)a0 horizontal:(BOOL)a1 visibleOnly:(BOOL)a2 wrapped:(BOOL *)a3 didHitBoundary:(BOOL *)a4 startElement:(id)a5;
- (BOOL)_isVideoWithSource;
- (BOOL)_treatAsEmptyGroup;
- (void)_rebuildElementOnSameLevel;
- (BOOL)isDepthLevelElement;

@end
