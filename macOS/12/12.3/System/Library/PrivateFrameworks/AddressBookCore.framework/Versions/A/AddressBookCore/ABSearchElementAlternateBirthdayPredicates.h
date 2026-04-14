@interface ABSearchElementAlternateBirthdayPredicates : NSObject

+ (id)predicateForValue:(id)a0 comparison:(long long)a1;
+ (id)predicateForComparisonToNil:(long long)a0;
+ (id)componentValuePredicatesForComponents:(id)a0 comparison:(long long)a1;
+ (id)aggregatePredicateWithValueClauses:(id)a0 comparison:(long long)a1;
+ (id)predicateForKey:(id)a0 integerValue:(long long)a1 comparison:(long long)a2;
+ (id)predicateForKey:(id)a0 value:(id)a1 comparison:(long long)a2;
+ (id)equalPredicateWithValueClauses:(id)a0;
+ (id)notEqualPredicateWithValueClauses:(id)a0;
+ (id)isNotNilPredicate;
+ (id)reducedOrPredicateWithClauses:(id)a0;

@end
