@interface SCRAppStoreCollection : SCRCollection

- (BOOL)_moveToNextContentSibling;
- (BOOL)_moveToPreviousContentSibling;
- (BOOL)addSelectionDescriptionToRequest:(id)a0;
- (BOOL)childrenShouldAddIndexToDescription;
- (BOOL)shouldAutoFocusOnChildren;

@end
