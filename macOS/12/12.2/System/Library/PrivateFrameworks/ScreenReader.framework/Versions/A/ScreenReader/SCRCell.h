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
- (id)helpDescription;
- (id)textRepresentation;
- (id)statusDescription;
- (id)defaultActionName;
- (BOOL)isInteractive;
- (id)spanInfo;
- (id)onlyChild;
- (void)addItemNameToRequest:(id)a0;
- (void)setFocusedChild:(id)a0;
- (void)setIsEventHandler:(BOOL)a0 isKeyboardHandler:(BOOL)a1;
- (void)_layoutChanged:(id)a0;
- (void)addItemNameDescriptionToRequest:(id)a0;
- (id)titleDescription;
- (BOOL)allowFocusThroughSingleChild;
- (BOOL)isContainerElement;
- (BOOL)chainEvent:(id)a0 request:(id)a1;
- (BOOL)performDefaultActionWithRequest:(id)a0 allowClick:(BOOL)a1;
- (long long)groupBehavior;
- (BOOL)interactUpWithEvent:(id)a0 request:(id)a1;
- (BOOL)interactDownWithEvent:(id)a0 request:(id)a1;
- (BOOL)interactLeftWithEvent:(id)a0 request:(id)a1;
- (BOOL)interactRightWithEvent:(id)a0 request:(id)a1;
- (BOOL)interactUpShiftWithEvent:(id)a0 request:(id)a1;
- (BOOL)interactDownShiftWithEvent:(id)a0 request:(id)a1;
- (BOOL)canNavigateToChildren;
- (BOOL)_hasFocusOnSingleChild;
- (id)parentTable;
- (BOOL)_isPromotable;
- (BOOL)shouldInterceptUpShiftEvent;
- (void)addCellLabelToRequest:(id)a0;
- (void)addItemDescriptionForInteractionToRequest:(id)a0;
- (id)coordinatesInfo;
- (id)_coordinatesInfoForOutput;
- (void)_addCoordinatesInfoToRequest:(id)a0;
- (void)addEmptyStatusToRequest:(id)a0;
- (BOOL)_shouldAlwaysDescribeContentSummary;
- (id)reorderedChildrenForSummaryDescription:(id)a0;
- (id)descriptionForNonTitleContentElement:(id)a0;
- (id)cellChildrenValueDescriptionsIncludingCaption:(BOOL)a0;
- (id)attributedValueDescription;
- (unsigned long long)rowSpanCount;
- (unsigned long long)columnSpanCount;
- (id)lastFocusedAXIdentifier;
- (void)addRowDescriptionToRequest:(id)a0 includedHeader:(BOOL)a1 includeBlanks:(BOOL)a2;
- (BOOL)shouldSpeakItemCountWhenFocusingIn;
- (BOOL)alwaysAllowDrag;
- (id)dragDescription;

@end
