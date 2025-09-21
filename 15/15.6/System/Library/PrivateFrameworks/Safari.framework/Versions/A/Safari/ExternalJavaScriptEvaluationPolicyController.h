@interface ExternalJavaScriptEvaluationPolicyController : NSObject

- (char)_canToggleSecurePreferenceWithName:(id)a0 backedByAuthorizationRight:(int)a1;
- (void)_toggleSecurePreferenceWithName:(id)a0 backedByAuthorizationRight:(int)a1;
- (char)javaScriptIsAllowedFromAppleEvents;
- (char)javaScriptIsAllowedInSmartSearchField;
- (void)toggleAllowJavaScriptFromAppleEvents;
- (void)toggleAllowJavaScriptInSmartSearchField;

@end
