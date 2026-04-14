@interface PPSPredicateUtilities : NSObject

+ (id)constantValueForLeftExpression:(id)a0 inPredicate:(id)a1;
+ (id)constantValueForLeftKeyPath:(id)a0 inPredicate:(id)a1;
+ (id)keyPathsAndValuesForPredicate:(id)a0;
+ (id)predicateByRemovingSubpredicateWithLeftExpression:(id)a0 fromPredicate:(id)a1;
+ (id)predicateByRemovingSubpredicateWithLeftKeyPath:(id)a0 fromPredicate:(id)a1;
+ (id)predicateByReplacingNilWithEmptyString:(id)a0;
+ (id)predicateByReplacingUint64bit:(id)a0 legalMetricNames:(id)a1;
+ (id)predicateByReplacingUnsignedIntegerWithSignedInteger:(id)a0 legalMetricNames:(id)a1;
+ (id)predicateForStartTimestamp:(double)a0 endTimestamp:(double)a1 withKeyPath:(id)a2;
+ (id)subpredicateForPredicate:(id)a0 withLeftExpression:(id)a1;
+ (id)subpredicateForPredicate:(id)a0 withLeftKeyPath:(id)a1;
+ (id)subpredicatesForPredicate:(id)a0 withLeftExpression:(id)a1;
+ (id)subpredicatesForPredicate:(id)a0 withLeftKeyPath:(id)a1;

@end
