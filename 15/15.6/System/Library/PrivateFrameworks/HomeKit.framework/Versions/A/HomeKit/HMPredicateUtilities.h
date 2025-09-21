@interface HMPredicateUtilities : NSObject

+ (id)rewritePredicateForClient:(id)a0 home:(id)a1;
+ (char)areOnlyHourAndMinuteSet:(id)a0;
+ (id)bitwiseAndValueWithKeyPath:(id)a0 inComparisonPredicate:(id)a1 validValues:(long long)a2;
+ (id)bitwiseAndValueWithKeyPath:(id)a0 inPredicate:(id)a1 validValues:(long long)a2;
+ (char)containsPresenceEvents:(id)a0;
+ (id)personFamiliarityOptionsInComparisonPredicate:(id)a0;
+ (id)rewritePredicateForDaemon:(id)a0;
+ (id)rewritePredicateForDaemon:(id)a0 characteristicIsInvalid:(char *)a1;
+ (id)significantEventTypesInComparisonPredicate:(id)a0;
+ (char)validatePredicate:(id)a0;

@end
