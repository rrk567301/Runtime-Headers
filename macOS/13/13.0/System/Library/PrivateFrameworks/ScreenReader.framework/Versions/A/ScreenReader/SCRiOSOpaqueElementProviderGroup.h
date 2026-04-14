@class SCRElement;

@interface SCRiOSOpaqueElementProviderGroup : SCROpaqueElementProviderGroup

@property (nonatomic) long long _lastMoveFocusDirection;
@property (retain, nonatomic) SCRElement *_topMostOpaqueElementProvider;

- (void).cxx_destruct;
- (void)addItemDescriptionToRequest:(id)a0;
- (BOOL)interactUpWithEvent:(id)a0 request:(id)a1;
- (BOOL)interactDownWithEvent:(id)a0 request:(id)a1;
- (BOOL)interactLeftWithEvent:(id)a0 request:(id)a1;
- (BOOL)interactRightWithEvent:(id)a0 request:(id)a1;
- (BOOL)moveToFirstVisibleElementWithEvent:(id)a0 request:(id)a1;
- (BOOL)moveToLastVisibleElementWithEvent:(id)a0 request:(id)a1;
- (BOOL)moveToFirstElementWithEvent:(id)a0 request:(id)a1;
- (BOOL)moveToLastElementWithEvent:(id)a0 request:(id)a1;
- (BOOL)addSelectionDescriptionToRequest:(id)a0;
- (BOOL)allowFocusThroughSingleChild;
- (void)addItemDescriptionForInteractionToRequest:(id)a0;
- (BOOL)shouldPromoteUIElement:(id)a0;
- (id)prepareArrayToFocusInto;
- (id)firstChildForFocusing;
- (id)fullItemDescriptionForJump;
- (id)_setSoleChild:(id)a0;
- (void)_selectChild:(id)a0;
- (BOOL)_moveToFirstLastSibling:(BOOL)a0 request:(id)a1;
- (BOOL)_moveToFirstLastVisibleSibling:(BOOL)a0 request:(id)a1;
- (BOOL)_moveToAdjacentContentSiblingInDirection:(long long)a0 request:(id)a1;
- (BOOL)_moveFocusToOpaqueChildElementInDirection:(long long)a0 withDescription:(BOOL)a1 request:(id)a2;
- (BOOL)_moveToContentSibling:(id)a0 withScrolling:(BOOL)a1 withSelection:(BOOL)a2 withDescription:(BOOL)a3 inDirection:(long long)a4 request:(id)a5;
- (BOOL)_isListLayout;
- (BOOL)_isOnFirstLastOpaqueChild:(BOOL)a0;
- (id)_moveiOSFocusToOpaqueChildElement:(BOOL)a0;

@end
