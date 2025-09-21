@interface SCRWebButton : SCRButton

- (id)typeDescription;
- (id)statusDescription;
- (void)_outputChildrenSummary:(id)a0;
- (void)addItemDescriptionForFallbackToRequest:(id)a0;
- (id)captionDescriptionContainsUserLabel:(char *)a0 containsAncestorLabel:(char *)a1;
- (char)performDefaultActionWithRequest:(id)a0 allowClick:(char)a1;

@end
