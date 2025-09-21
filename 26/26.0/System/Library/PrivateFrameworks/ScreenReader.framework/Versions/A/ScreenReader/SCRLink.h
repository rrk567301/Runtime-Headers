@interface SCRLink : SCRMapElement {
    BOOL _computedMissingDescription;
}

- (id)statusDescription;
- (BOOL)isInternalLink;
- (id)typeDescription;
- (id)valueDescription;
- (id)helpDescription;
- (void)_addDescriptionString:(id)a0 toRequest:(id)a1;
- (void)_itemBraillePostFeedbackHandler:(id)a0;
- (void)addItemNameContentToRequest:(id)a0;
- (void)addItemNameDescriptionToRequest:(id)a0;
- (void)addItemNameToRequest:(id)a0;
- (void)addItemTypeToRequest:(id)a0;
- (BOOL)allowFocusThroughSingleChild;
- (long long)groupBehavior;
- (BOOL)handleUntaggedOperationWithEvent:(id)a0 request:(id)a1;
- (BOOL)interactDownShiftWithEvent:(id)a0 request:(id)a1;
- (BOOL)isMissingDescription;
- (void)itemPostFeedbackHandler:(id)a0;
- (void)itemPreFeedbackHandler:(id)a0;
- (BOOL)performDefaultActionWithRequest:(id)a0 allowClick:(BOOL)a1;
- (id)readContentsElement;
- (BOOL)shouldIncludeDescendants;
- (id)titleDescription;

@end
