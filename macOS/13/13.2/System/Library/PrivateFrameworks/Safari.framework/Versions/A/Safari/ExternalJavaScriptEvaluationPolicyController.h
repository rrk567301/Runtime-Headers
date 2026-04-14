@interface ExternalJavaScriptEvaluationPolicyController : NSObject

- (BOOL)javaScriptIsAllowedInSmartSearchField;
- (void)toggleAllowJavaScriptInSmartSearchField;
- (BOOL)javaScriptIsAllowedFromAppleEvents;
- (void)toggleAllowJavaScriptFromAppleEvents;
- (void)_toggleSecurePreferenceWithName:(id)a0 backedByAuthorizationRight:(int)a1;
- (BOOL)_canToggleSecurePreferenceWithName:(id)a0 backedByAuthorizationRight:(int)a1;

@end
