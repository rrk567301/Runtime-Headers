@class NSString, SCRLayoutArea, SCRElement;

@interface SCRLayoutItem : SCRMapElement {
    SCRLayoutArea *_container;
    SCRElement *_child;
    BOOL _hasMultipleNonHandleChildren;
}

@property (retain, nonatomic) NSString *lastSizeDescription;

- (void).cxx_destruct;
- (id)_child;
- (id)valueDescription;
- (id)statusDescription;
- (id)valueAsString;
- (BOOL)isInteractive;
- (void)addItemNameToRequest:(id)a0;
- (BOOL)allowBuildChildren;
- (BOOL)interactUpShiftWithEvent:(id)a0 request:(id)a1;
- (BOOL)interactDownShiftWithEvent:(id)a0 request:(id)a1;
- (BOOL)addSelectionDescriptionToRequest:(id)a0;
- (BOOL)isContainerElement;
- (id)captionDescriptionContainsUserLabel:(BOOL *)a0 containsAncestorLabel:(BOOL *)a1;
- (BOOL)allowFocusThroughSingleChild;
- (id)titleDescription;
- (BOOL)alwaysAllowDrag;
- (void)addAdditionalElementSummaryToRequest:(id)a0;
- (BOOL)isPartOfSelection;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })enclosingBoundsIncludesScrollArea:(BOOL)a0;
- (id)overlappingSiblings;
- (id)firstChildForFocusing;
- (BOOL)ignoreDragNotifications;
- (id)descriptionForSize:(struct CGSize { double x0; double x1; })a0 orientation:(long long)a1;
- (id)descriptionForSizeOffset:(double)a0 forWidth:(BOOL)a1;
- (void)describePositionChangeFromPosition:(id)a0;
- (id)resizeHandleUIElements;
- (id)containerIncludingScrollAreas:(BOOL)a0;
- (BOOL)showResizeOptionsMenuWithRequest:(id)a0;
- (BOOL)enableRepositionModeWithRequest:(id)a0;
- (void)echoSizeChangeForScale:(long long)a0 width:(BOOL)a1 request:(id)a2;
- (id)parentLayoutArea;
- (void)_moveVOFocusToChild:(id)a0;
- (BOOL)_shouldMorphWithSingleChild;

@end
