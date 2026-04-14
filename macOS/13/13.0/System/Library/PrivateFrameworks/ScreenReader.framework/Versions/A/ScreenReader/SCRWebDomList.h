@class SCRElement;

@interface SCRWebDomList : SCRElement <SCRWebElementAutoDrillAndAnnounceNavigationProtocol> {
    SCRElement *_firstNavigableElement;
    SCRElement *_lastNavigableElement;
    long long _childIndex;
    SCRElement *_readContentsElement;
}

+ (void)addWebListDescription:(id)a0 toRequest:(id)a1;

- (void).cxx_destruct;
- (id)roleDescription;
- (BOOL)isInteractive;
- (long long)_childIndex;
- (BOOL)focusInto:(id)a0 event:(id)a1;
- (id)initWithUIElement:(id)a0 parent:(id)a1;
- (void)addStartBookendToRequest:(id)a0;
- (void)addEndBookendToRequest:(id)a0;
- (BOOL)webElementSuperInteractUpWithEvent:(id)a0 request:(id)a1;
- (BOOL)webElementSuperInteractDownWithEvent:(id)a0 request:(id)a1;
- (BOOL)webElementSuperInteractLeftWithEvent:(id)a0 request:(id)a1;
- (BOOL)webElementSuperInteractRightWithEvent:(id)a0 request:(id)a1;
- (void)focusOntoAutoDrillAndAnnouceWebElement:(id)a0;
- (void)setFocusedChild:(id)a0;
- (Class)classForChildUIElement:(id)a0 parent:(id)a1;
- (BOOL)handleEvent:(id)a0 request:(id)a1;
- (void)addItemDescriptionToRequest:(id)a0;
- (long long)groupBehavior;
- (BOOL)interactLeftWithEvent:(id)a0 request:(id)a1;
- (BOOL)interactRightWithEvent:(id)a0 request:(id)a1;
- (BOOL)moveToFirstVisibleElementWithEvent:(id)a0 request:(id)a1;
- (BOOL)moveToLastVisibleElementWithEvent:(id)a0 request:(id)a1;
- (id)focusOntoUIElement:(id)a0 withScrolling:(BOOL)a1 withSelection:(BOOL)a2;
- (void)_setReadContentsElement:(id)a0;
- (unsigned long long)readContentsElementCount;
- (void)prepareReadContentsElementVisibleOnly:(BOOL)a0;
- (void)forgetReadContentsElement;
- (id)readContentsElement;
- (id)childrenInReadContentsOrder;
- (BOOL)trackElementWithGestureEvent:(id)a0 request:(id)a1;
- (BOOL)allowFocusThroughSingleChild;
- (void)addItemDescriptionForInteractionToRequest:(id)a0;
- (BOOL)shouldSpeakItemCountWhenFocusingIn;
- (BOOL)needToRebuildChildren;
- (BOOL)shouldNavigate;
- (BOOL)shouldPromoteUIElement:(id)a0;
- (id)prepareArrayToFocusInto;
- (id)firstChildForFocusing;
- (id)lastChildForFocusing;
- (void)beginFocusFromElement:(id)a0 withEvent:(id)a1;
- (void)endFocus;
- (BOOL)shouldMapElement:(id)a0;
- (void)moveToElement:(id)a0 withEvent:(id)a1 allowAutoFocusToChildren:(BOOL)a2;
- (BOOL)canWrapWhileNavigating;
- (id)childInAXOrderForward:(BOOL)a0 horizontal:(BOOL)a1 visibleOnly:(BOOL)a2 wrapped:(BOOL *)a3 didHitBoundary:(BOOL *)a4 startElement:(id)a5;
- (void)scrollToElement;
- (void)addContentToRequest:(id)a0 visibleOnly:(BOOL)a1;
- (void)addItemDescriptionForSearchToRequest:(id)a0;
- (void)_setChildIndex:(long long)a0;
- (void)_rebuildElementOnSameLevel;
- (BOOL)isDepthLevelElement;
- (BOOL)isWebDomList;
- (BOOL)isContentList;
- (BOOL)isDescriptionList;
- (void)_appendListItemIndexIfNeeded:(id)a0 oldFocusedChild:(id)a1;

@end
