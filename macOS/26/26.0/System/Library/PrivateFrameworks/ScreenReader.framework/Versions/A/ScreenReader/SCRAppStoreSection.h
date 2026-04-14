@interface SCRAppStoreSection : SCRSection

- (BOOL)childrenShouldAddIndexToDescription;
- (id)nextContentUISibling;
- (id)previousContentUISibling;
- (BOOL)shouldAutoFocusOnChildren;

@end
