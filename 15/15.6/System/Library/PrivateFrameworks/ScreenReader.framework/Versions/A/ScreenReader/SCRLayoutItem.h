@class NSString, SCRLayoutArea, SCRElement;

@interface SCRLayoutItem : SCRMapElement {
    SCRLayoutArea *_container;
    SCRElement *_child;
    char _hasMultipleNonHandleChildren;
}

@property (retain, nonatomic) NSString *lastSizeDescription;

- (void).cxx_destruct;
- (id)valueDescription;
- (id)statusDescription;
- (id)valueAsString;
- (char)isInteractive;
- (char)alwaysAllowDrag;
- (id)descriptionForSize:(struct CGSize { double x0; double x1; })a0 orientation:(long long)a1;
- (id)_child;
- (void)_moveVOFocusToChild:(id)a0;
- (char)_shouldMorphWithSingleChild;
- (void)addAdditionalElementSummaryToRequest:(id)a0;
- (void)addItemNameToRequest:(id)a0;
- (char)addSelectionDescriptionToRequest:(id)a0;
- (char)allowBuildChildren;
- (char)allowFocusThroughSingleChild;
- (id)captionDescriptionContainsUserLabel:(char *)a0 containsAncestorLabel:(char *)a1;
- (id)containerIncludingScrollAreas:(char)a0;
- (void)describePositionChangeFromPosition:(id)a0;
- (id)descriptionForSizeOffset:(double)a0 forWidth:(char)a1;
- (void)echoSizeChangeForScale:(long long)a0 width:(char)a1 request:(id)a2;
- (char)enableRepositionModeWithRequest:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })enclosingBoundsIncludesScrollArea:(char)a0;
- (id)firstChildForFocusing;
- (char)ignoreDragNotifications;
- (char)interactDownShiftWithEvent:(id)a0 request:(id)a1;
- (char)interactUpShiftWithEvent:(id)a0 request:(id)a1;
- (char)isContainerElement;
- (char)isPartOfSelection;
- (id)overlappingSiblings;
- (id)parentLayoutArea;
- (id)resizeHandleUIElements;
- (char)showResizeOptionsMenuWithRequest:(id)a0;
- (id)titleDescription;

@end
