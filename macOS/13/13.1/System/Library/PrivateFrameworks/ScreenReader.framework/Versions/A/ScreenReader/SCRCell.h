@class NSString;

@interface SCRCell : SCRMapElement <SCRCellElementProtocol> {
    NSString *_lastFocusedAXIdentifier;
}

@property (readonly, nonatomic) struct SCRDataCell { unsigned long long x0; unsigned long long x1; } cellCoordinates;
@property (nonatomic) BOOL hasCoordinatesInfoWithoutContentDescription;
@property (readonly, nonatomic) BOOL shouldOutputCoordinatesInfo;

- (void).cxx_destruct;
- (id)typeDescription;
- (unsigned long long)columnIndex;
- (unsigned long long)rowIndex;
- (id)valueDescription;
- (id)statusDescription;
- (id)helpDescription;
- (BOOL)isInteractive;
- (id)spanInfo;
- (id)onlyChild;
- (id)defaultActionName;
- (void)_layoutChanged:(id)a0;
- (void)addItemNameToRequest:(id)a0;
- (void)setFocusedChild:(id)a0;
- (BOOL)chainEvent:(id)a0 request:(id)a1;
- (long long)groupBehavior;
- (BOOL)interactUpWithEvent:(id)a0 request:(id)a1;
- (BOOL)interactDownWithEvent:(id)a0 request:(id)a1;
- (BOOL)interactLeftWithEvent:(id)a0 request:(id)a1;
- (BOOL)interactRightWithEvent:(id)a0 request:(id)a1;
- (BOOL)interactUpShiftWithEvent:(id)a0 request:(id)a1;
- (BOOL)interactDownShiftWithEvent:(id)a0 request:(id)a1;
- (BOOL)shouldAllowAutoFocusInto;
- (BOOL)isContainerElement;
- (BOOL)performDefaultActionWithRequest:(id)a0 allowClick:(BOOL)a1;
- (BOOL)canNavigateToChildren;
- (BOOL)allowFocusThroughSingleChild;
- (void)setIsEventHandler:(BOOL)a0 isKeyboardHandler:(BOOL)a1;
- (void)addItemDescriptionForInteractionToRequest:(id)a0;
- (void)addItemNameDescriptionToRequest:(id)a0;
- (id)titleDescription;
- (BOOL)supportsScrollToVisible;
- (void)performScrollToVisibleRequest;
- (id)parentTable;
- (unsigned long long)rowSpanCount;
- (unsigned long long)columnSpanCount;
- (id)coordinatesInfo;
- (BOOL)_hasFocusOnSingleChild;
- (id)lastFocusedAXIdentifier;
- (BOOL)_isPromotable;
- (BOOL)shouldInterceptUpShiftEvent;
- (id)_coordinatesInfoForOutput;
- (void)_addCoordinatesInfoToRequest:(id)a0;
- (void)addRowDescriptionToRequest:(id)a0 includedHeader:(BOOL)a1 includeBlanks:(BOOL)a2;
- (BOOL)_shouldAlwaysDescribeContentSummary;
- (void)addEmptyStatusToRequest:(id)a0;
- (id)reorderedChildrenForSummaryDescription:(id)a0;
- (id)cellChildrenValueDescriptionsIncludingCaption:(BOOL)a0;
- (id)descriptionForNonTitleContentElement:(id)a0;
- (BOOL)preferChildLabelForValueDescription;
- (id)attributedValueDescription;
- (id)textRepresentation;
- (BOOL)shouldSpeakItemCountWhenFocusingIn;
- (void)addCellLabelToRequest:(id)a0;
- (BOOL)alwaysAllowDrag;
- (id)dragDescription;
- (BOOL)includeChildrenActions;
- (void)addAdditionalElementSummaryToRequest:(id)a0;
- (id)rowHeaderDescription;
- (id)columnHeaderDescription;

@end
