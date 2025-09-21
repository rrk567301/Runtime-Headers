@interface SCRLink : SCRMapElement {
    char _computedMissingDescription;
}

- (id)typeDescription;
- (char)isInternalLink;
- (id)valueDescription;
- (id)statusDescription;
- (id)helpDescription;
- (void)_addDescriptionString:(id)a0 toRequest:(id)a1;
- (void)_itemBraillePostFeedbackHandler:(id)a0;
- (void)addItemNameContentToRequest:(id)a0;
- (void)addItemNameDescriptionToRequest:(id)a0;
- (void)addItemTypeToRequest:(id)a0;
- (long long)groupBehavior;
- (char)handleUntaggedOperationWithEvent:(id)a0 request:(id)a1;
- (char)interactDownShiftWithEvent:(id)a0 request:(id)a1;
- (char)isMissingDescription;
- (void)itemPostFeedbackHandler:(id)a0;
- (void)itemPreFeedbackHandler:(id)a0;
- (char)performDefaultActionWithRequest:(id)a0 allowClick:(char)a1;
- (id)readContentsElement;
- (char)shouldIncludeDescendants;
- (id)titleDescription;

@end
