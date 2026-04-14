@interface MOContextPredicateBuilder : NSObject

+ (id)stringForCompoundPredicateType:(unsigned long long)a0;
+ (id)createAndPredicate:(id)a0;
+ (id)createNotPredicate:(id)a0;
+ (id)createOrPredicate:(id)a0;
+ (id)createPredicateForValue:(id)a0 inCollection:(id)a1;
+ (id)createPredicateWithLeftExpression:(id)a0 rightExpression:(id)a1 operation:(unsigned long long)a2;
+ (void)disassemblePredicate:(id)a0;
+ (id)extractFirstValueForKeyPath:(id)a0 fromPredicates:(id)a1;
+ (void)inspectExpression:(id)a0;
+ (unsigned long long)predicateOperatorFromType:(unsigned long long)a0;
+ (id)stringForOperatorType:(unsigned long long)a0;

@end
