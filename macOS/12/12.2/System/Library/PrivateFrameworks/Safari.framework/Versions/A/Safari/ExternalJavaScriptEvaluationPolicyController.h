@interface ExternalJavaScriptEvaluationPolicyController : NSObject

- (BOOL)javaScriptIsAllowedInSmartSearchField;
- (BOOL)javaScriptIsAllowedFromAppleEvents;
- (void)toggleAllowJavaScriptFromAppleEvents;
- (void)toggleAllowJavaScriptInSmartSearchField;
- (void)_toggleSecurePreferenceWithName:(id)a0 backedByAuthorizationRight:(int)a1;
- (BOOL)_canToggleSecurePreferenceWithName:(id)a0 backedByAuthorizationRight:(int)a1;

@end
