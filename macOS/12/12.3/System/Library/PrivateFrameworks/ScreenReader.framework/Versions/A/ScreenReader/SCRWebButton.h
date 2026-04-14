@interface SCRWebButton : SCRButton

- (id)typeDescription;
- (id)statusDescription;
- (BOOL)performDefaultActionWithRequest:(id)a0 allowClick:(BOOL)a1;
- (id)captionDescriptionContainsUserLabel:(BOOL *)a0 containsAncestorLabel:(BOOL *)a1;
- (void)addItemDescriptionForFallbackToRequest:(id)a0;
- (void)_outputChildrenSummary:(id)a0;

@end
