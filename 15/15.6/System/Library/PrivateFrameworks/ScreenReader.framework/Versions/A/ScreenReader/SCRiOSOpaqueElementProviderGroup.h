@class SCRElement;

@interface SCRiOSOpaqueElementProviderGroup : SCROpaqueElementProviderGroup

@property (nonatomic) long long _lastMoveFocusDirection;
@property (retain, nonatomic) SCRElement *_topMostOpaqueElementProvider;

- (void).cxx_destruct;
- (char)interactRightWithEvent:(id)a0 request:(id)a1;
- (char)_isListLayout;
- (char)_isOnFirstLastOpaqueChild:(char)a0;
- (char)_moveFocusToOpaqueChildElementInDirection:(long long)a0 withDescription:(char)a1 request:(id)a2;
- (char)_moveToAdjacentContentSiblingInDirection:(long long)a0 request:(id)a1;
- (char)_moveToContentSibling:(id)a0 withScrolling:(char)a1 withSelection:(char)a2 withDescription:(char)a3 inDirection:(long long)a4 request:(id)a5;
- (char)_moveToFirstLastSibling:(char)a0 request:(id)a1;
- (char)_moveToFirstLastVisibleSibling:(char)a0 request:(id)a1;
- (id)_moveiOSFocusToOpaqueChildElement:(char)a0;
- (void)_selectChild:(id)a0;
- (id)_setSoleChild:(id)a0;
- (void)addItemDescriptionForInteractionToRequest:(id)a0;
- (void)addItemDescriptionToRequest:(id)a0;
- (char)addSelectedChildrenDescriptionToRequest:(id)a0 onlyAnnounceSelectedCount:(char)a1;
- (char)allowFocusThroughSingleChild;
- (id)firstChildForFocusing;
- (id)fullItemDescriptionForJump:(char)a0;
- (char)interactDownWithEvent:(id)a0 request:(id)a1;
- (char)interactLeftWithEvent:(id)a0 request:(id)a1;
- (char)interactUpWithEvent:(id)a0 request:(id)a1;
- (char)moveToFirstElementWithEvent:(id)a0 request:(id)a1;
- (char)moveToFirstVisibleElementWithEvent:(id)a0 request:(id)a1;
- (char)moveToLastElementWithEvent:(id)a0 request:(id)a1;
- (char)moveToLastVisibleElementWithEvent:(id)a0 request:(id)a1;
- (id)prepareArrayToFocusInto;
- (char)shouldPromoteUIElement:(id)a0;

@end
