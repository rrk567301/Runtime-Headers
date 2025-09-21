@interface PKPredicateRequirements : NSObject

+ (void)_sendDebugMessage:(id)a0;
+ (void)_setDebugHandler:(id /* block */)a0;

- (char)_safelyEvaluatePredicate:(id)a0 withObject:(id)a1 ofType:(id)a2;
- (char)areRequirementsMet;

@end
