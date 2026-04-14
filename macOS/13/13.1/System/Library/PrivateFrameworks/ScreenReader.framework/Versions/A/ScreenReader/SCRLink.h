@interface SCRLink : SCRMapElement {
    BOOL _computedMissingDescription;
}

- (id)typeDescription;
- (BOOL)isInternalLink;
- (id)valueDescription;
- (id)statusDescription;
- (id)helpDescription;
- (void)addItemTypeToRequest:(id)a0;
- (long long)groupBehavior;
- (BOOL)interactDownShiftWithEvent:(id)a0 request:(id)a1;
- (id)readContentsElement;
- (BOOL)performDefaultActionWithRequest:(id)a0 allowClick:(BOOL)a1;
- (void)addItemNameDescriptionToRequest:(id)a0;
- (id)titleDescription;
- (BOOL)handleUntaggedOperationWithEvent:(id)a0 request:(id)a1;
- (BOOL)shouldIncludeDescendants;
- (void)itemPreFeedbackHandler:(id)a0;
- (void)itemPostFeedbackHandler:(id)a0;
- (void)_itemBraillePostFeedbackHandler:(id)a0;
- (BOOL)isMissingDescription;
- (void)addItemNameContentToRequest:(id)a0;
- (void)_addDescriptionString:(id)a0 toRequest:(id)a1;

@end
