@class SCRTextMarker;

@interface SCRiBooksWebArea : SCRWebText {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _iBooksCachedBounds;
    SCRTextMarker *_iBooksCachedFirstPositionTextMarker;
    SCRTextMarker *_iBooksCachedLastPositionTextMarker;
    SCRTextMarker *_iBooksCachedWebAreaFirstPositionTextMarker;
    SCRTextMarker *_iBooksCachedWebAreaLastPositionTextMarker;
}

- (void).cxx_destruct;
- (id)valueDescription;
- (id)lastPosition;
- (id)firstPosition;
- (BOOL)interactUpWithEvent:(id)a0 request:(id)a1;
- (BOOL)interactDownWithEvent:(id)a0 request:(id)a1;
- (BOOL)interactLeftWithEvent:(id)a0 request:(id)a1;
- (BOOL)interactRightWithEvent:(id)a0 request:(id)a1;
- (id)nextContentUISibling;
- (id)previousContentUISibling;
- (id)axDescription;
- (BOOL)interactPageUpShiftWithEvent:(id)a0 request:(id)a1;
- (BOOL)interactPageDownShiftWithEvent:(id)a0 request:(id)a1;
- (BOOL)handleReadContentsCallbackForEvent:(id)a0 request:(id)a1 visibleOnly:(BOOL)a2;
- (BOOL)supportsScrollToVisible;
- (BOOL)interactPageUpCommandWithEvent:(id)a0 request:(id)a1;
- (BOOL)interactPageDownCommandWithEvent:(id)a0 request:(id)a1;
- (void)addTextBoundryToRequest:(id)a0 edge:(long long)a1;
- (void)echoAttributedString:(id)a0 variants:(id)a1 request:(id)a2;
- (void)moveVOCToSelectionRange;
- (id)iBooksWebAreaLastPosition;
- (id)iBooksInteractWithoutBoundaryCheckWithEvent:(id)a0 request:(id)a1 direction:(long long)a2;
- (void)iBooksReadAllWithEvent:(id)a0 request:(id)a1;
- (BOOL)iBooksHasReachedEndOfTextElement;
- (BOOL)iBooksHasReachedBeginningOfTextElement;
- (long long)iBooksCompareMarker:(struct __AXTextMarker { } *)a0 toMarker:(struct __AXTextMarker { } *)a1 forUIElement:(id)a2;
- (struct __AXTextMarker { } *)iBooksMarkerForDirectionWithUIElement:(id)a0 marker:(struct __AXTextMarker { } *)a1 direction:(unsigned char)a2 granularity:(unsigned char)a3;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })iBooksMarkerBoundsWithUIElement:(id)a0 marker:(struct __AXTextMarker { } *)a1;
- (struct __AXTextMarker { } *)iBooksMarkerSearchWithUIElement:(id)a0 marker:(struct __AXTextMarker { } *)a1 constrainingBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 direction:(unsigned char)a3 orientation:(unsigned char)a4 depth:(unsigned long long)a5;
- (void)iBooksInvalidateCachedMarkersIfNeeded;
- (id)iBooksTextMarkerForAttributeWithUIElement:(id)a0 textMarker:(id /* block */)a1 supportsTextMarkerForBounds:(id /* block */)a2 textMarkerForBounds:(id /* block */)a3 constrainingBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4 direction:(unsigned char)a5;
- (id)iBooksUIElementForAttributeSearchingParentChain:(id /* block */)a0 withChecker:(id /* block */)a1;
- (id)webAreaFirstPosition;
- (BOOL)iBooksPerformBlockCheckingForScrolling:(id /* block */)a0 withEvent:(id)a1 request:(id)a2;

@end
