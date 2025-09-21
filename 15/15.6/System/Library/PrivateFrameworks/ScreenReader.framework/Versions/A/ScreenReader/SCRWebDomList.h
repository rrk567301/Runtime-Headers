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
- (char)isInteractive;
- (void)_setChildIndex:(long long)a0;
- (char)interactRightWithEvent:(id)a0 request:(id)a1;
- (void)scrollToElement;
- (void)_appendListItemIndexIfNeeded:(id)a0 oldFocusedChild:(id)a1;
- (long long)_childIndex;
- (void)_rebuildElementOnSameLevel;
- (void)_setReadContentsElement:(id)a0;
- (void)addContentToRequest:(id)a0 visibleOnly:(char)a1;
- (void)addEndBookendToRequest:(id)a0;
- (void)addItemDescriptionForInteractionToRequest:(id)a0;
- (void)addItemDescriptionForSearchToRequest:(id)a0;
- (void)addItemDescriptionToRequest:(id)a0;
- (void)addStartBookendToRequest:(id)a0;
- (char)allowFocusThroughSingleChild;
- (void)beginFocusFromElement:(id)a0 withEvent:(id)a1;
- (char)canWrapWhileNavigating;
- (id)childInAXOrderForward:(char)a0 horizontal:(char)a1 visibleOnly:(char)a2 wrapped:(char *)a3 didHitBoundary:(char *)a4 startElement:(id)a5;
- (id)childrenInReadContentsOrder;
- (char)childrenShouldAddIndexToDescription;
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
- (char)isContentList;
- (char)isDepthLevelElement;
- (char)isDescriptionList;
- (char)isMenu;
- (char)isWebDomList;
- (id)lastChildForFocusing;
- (void)moveToElement:(id)a0 withEvent:(id)a1 allowAutoFocusToChildren:(char)a2;
- (char)moveToFirstVisibleElementWithEvent:(id)a0 request:(id)a1;
- (char)moveToLastVisibleElementWithEvent:(id)a0 request:(id)a1;
- (char)needToRebuildChildren;
- (id)prepareArrayToFocusInto;
- (void)prepareReadContentsElementVisibleOnly:(char)a0;
- (id)readContentsElement;
- (unsigned long long)readContentsElementCount;
- (void)setFocusedChild:(id)a0;
- (char)shouldMapElement:(id)a0;
- (char)shouldNavigate;
- (char)shouldPromoteUIElement:(id)a0;
- (char)shouldSpeakItemCountWhenFocusingIn;
- (char)trackElementWithGestureEvent:(id)a0 request:(id)a1;
- (char)webElementSuperInteractDownWithEvent:(id)a0 request:(id)a1;
- (char)webElementSuperInteractLeftWithEvent:(id)a0 request:(id)a1;
- (char)webElementSuperInteractRightWithEvent:(id)a0 request:(id)a1;
- (char)webElementSuperInteractUpWithEvent:(id)a0 request:(id)a1;

@end
