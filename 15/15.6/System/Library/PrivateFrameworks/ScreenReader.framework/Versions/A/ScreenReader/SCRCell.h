@class NSString;

@interface SCRCell : SCRMapElement <SCRCellElementProtocol> {
    NSString *_lastFocusedAXIdentifier;
}

@property (readonly, nonatomic) struct SCRDataCell { unsigned long long x0; unsigned long long x1; } cellCoordinates;
@property (nonatomic) char hasCoordinatesInfoWithoutContentDescription;
@property (readonly, nonatomic) char shouldOutputCoordinatesInfo;

- (void).cxx_destruct;
- (id)typeDescription;
- (unsigned long long)columnIndex;
- (unsigned long long)rowIndex;
- (id)valueDescription;
- (id)statusDescription;
- (id)helpDescription;
- (char)isInteractive;
- (char)openContextualMenu;
- (id)spanInfo;
- (id)defaultActionName;
- (id)onlyChild;
- (id)coordinatesInfo;
- (char)interactRightWithEvent:(id)a0 request:(id)a1;
- (void)_layoutChanged:(id)a0;
- (char)alwaysAllowDrag;
- (unsigned long long)columnSpanCount;
- (id)dragDescription;
- (void)_addCoordinatesInfoToRequest:(id)a0;
- (id)_cellChildrenAttributedValueDescriptionsIncludingCaption:(char)a0 updatingMutableVariants:(id)a1;
- (id)_coordinatesInfoForOutput;
- (char)_hasFocusOnSingleChild;
- (char)_isPromotable;
- (char)_shouldAlwaysDescribeContentSummary;
- (void)addAdditionalElementSummaryToRequest:(id)a0;
- (void)addCellLabelToRequest:(id)a0;
- (void)addEmptyStatusToRequest:(id)a0;
- (void)addItemDescriptionForInteractionToRequest:(id)a0;
- (void)addItemNameDescriptionToRequest:(id)a0;
- (void)addItemNameToRequest:(id)a0;
- (void)addRowDescriptionToRequest:(id)a0 includedHeader:(char)a1 includeBlanks:(char)a2;
- (char)allowFocusThroughSingleChild;
- (id)attributedValueDescription;
- (char)canNavigateToChildren;
- (id)cellChildrenValueDescriptionsIncludingCaption:(char)a0 updatingMutableVariants:(id)a1;
- (char)chainEvent:(id)a0 request:(id)a1;
- (id)columnHeaderDescription;
- (id)descriptionForNonTitleContentElement:(id)a0;
- (long long)groupBehavior;
- (char)includeChildrenActions;
- (char)interactDownShiftWithEvent:(id)a0 request:(id)a1;
- (char)interactDownWithEvent:(id)a0 request:(id)a1;
- (char)interactLeftWithEvent:(id)a0 request:(id)a1;
- (char)interactUpShiftWithEvent:(id)a0 request:(id)a1;
- (char)interactUpWithEvent:(id)a0 request:(id)a1;
- (char)isContainerElement;
- (id)lastFocusedAXIdentifier;
- (id)linkedUIElementsAllowFallback:(char)a0;
- (id)parentTable;
- (char)performDefaultActionWithRequest:(id)a0 allowClick:(char)a1;
- (void)performScrollToVisibleRequest;
- (char)preferChildLabelForValueDescription;
- (id)reorderedChildrenForSummaryDescription:(id)a0;
- (id)rowHeaderDescription;
- (unsigned long long)rowSpanCount;
- (void)setFocusedChild:(id)a0;
- (void)setIsEventHandler:(char)a0 isKeyboardHandler:(char)a1;
- (char)shouldAllowAutoFocusInto;
- (char)shouldInterceptUpShiftEvent;
- (char)shouldSpeakItemCountWhenFocusingIn;
- (char)supportsScrollToVisible;
- (id)textRepresentation;
- (id)titleDescription;
- (id)valueDescriptionUpdatingMutableVariants:(id)a0;

@end
