@interface SCRWebButton : SCRButton

- (id)statusDescription;
- (id)typeDescription;
- (void)_outputChildrenSummary:(id)a0;
- (void)addItemDescriptionForFallbackToRequest:(id)a0;
- (id)captionDescriptionContainsUserLabel:(BOOL *)a0 containsAncestorLabel:(BOOL *)a1;
- (BOOL)performDefaultActionWithRequest:(id)a0 allowClick:(BOOL)a1;

@end
