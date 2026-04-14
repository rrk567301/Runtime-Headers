@interface SCRLink : SCRMapElement {
    BOOL _computedMissingDescription;
}

- (id)typeDescription;
- (BOOL)isInternalLink;
- (id)valueDescription;
- (id)helpDescription;
- (id)statusDescription;
- (void)addItemNameDescriptionToRequest:(id)a0;
- (void)addItemNameContentToRequest:(id)a0;
- (id)titleDescription;
- (void)addItemTypeToRequest:(id)a0;
- (BOOL)performDefaultActionWithRequest:(id)a0 allowClick:(BOOL)a1;
- (id)readContentsElement;
- (long long)groupBehavior;
- (BOOL)interactDownShiftWithEvent:(id)a0 request:(id)a1;
- (BOOL)isMissingDescription;
- (BOOL)handleUntaggedOperationWithEvent:(id)a0 request:(id)a1;
- (BOOL)shouldIncludeDescendants;
- (void)itemPreFeedbackHandler:(id)a0;
- (void)itemPostFeedbackHandler:(id)a0;
- (void)_itemBraillePostFeedbackHandler:(id)a0;
- (void)_addDescriptionString:(id)a0 toRequest:(id)a1;

@end
