@interface UIFocusDebugger : NSObject

+ (id)status;
+ (id)help;
+ (id)_ancestryForEnvironment:(id)a0;
+ (id)_statusForFocusSystem:(id)a0 includeDeferralTarget:(BOOL)a1;
+ (id)_verboseStatus;
+ (id)checkFocusGroupTreeForEnvironment:(id)a0;
+ (id)checkFocusabilityForItem:(id)a0;
+ (id)focusGroupsForEnvironment:(id)a0;
+ (id)preferredFocusEnvironmentsForEnvironment:(id)a0;
+ (id)simulateFocusUpdateRequestFromEnvironment:(id)a0;

@end
