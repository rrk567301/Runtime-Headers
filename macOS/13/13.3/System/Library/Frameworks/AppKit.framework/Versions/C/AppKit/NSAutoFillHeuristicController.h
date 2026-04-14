@interface NSAutoFillHeuristicController : NSObject

+ (id)sharedInstance;

- (BOOL)_isStrictlyAnAutofillableSecureTextField:(id)a0;
- (BOOL)_isStrictlyAnAutofillableTextField:(id)a0;
- (BOOL)_isView:(id)a0 positionedLeadingOrAbove:(id)a1;
- (void)_setStringValue:(id)a0 andPostNotificationFor:(id)a1;
- (void)showAutoFillIfNecessaryFor:(id)a0 withCompletionHandler:(id /* block */)a1;

@end
