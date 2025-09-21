@interface _NSPredicateUtilities : NSObject

+ (void)initialize;
+ (id)now;
+ (id)_operatorClassesForSecureCoding;
+ (id)add:(id)a0 to:(id)a1;
+ (id)median:(id)a0;
+ (id)bitwiseOr:(id)a0 with:(id)a1;
+ (id)length:(id)a0;
+ (id)ln:(id)a0;
+ (id)onesComplement:(id)a0;
+ (id)stddev:(id)a0;
+ (id)tokenize:(id)a0 using:(id)a1;
+ (id)_compoundPredicateClassesForSecureCoding;
+ (id)_constantValueClassesForSecureCoding;
+ (id)_expressionClassesForSecureCoding;
+ (id)_extendedExpressionClassesForSecureCoding;
+ (char)_isReservedWordInParser:(id)a0;
+ (id)_predicateClassesForSecureCoding;
+ (void)_setDebugPredicateSecurityScoping:(char)a0;
+ (void)_setDebugPredicateTestAction:(char)a0;
+ (id)abs:(id)a0;
+ (id)average:(id)a0;
+ (id)bitwiseAnd:(id)a0 with:(id)a1;
+ (id)bitwiseXor:(id)a0 with:(id)a1;
+ (id)canonical:(id)a0;
+ (id)castObject:(id)a0 toType:(id)a1;
+ (id)ceiling:(id)a0;
+ (id)count:(id)a0;
+ (id)distanceToLocation:(id)a0 fromLocation:(id)a1;
+ (id)distinct:(id)a0;
+ (id)divide:(id)a0 by:(id)a1;
+ (id)exp:(id)a0;
+ (id)floor:(id)a0;
+ (id)from:(id)a0 subtract:(id)a1;
+ (id)indexed:(id)a0 by:(id)a1;
+ (id)inverseOrderKey:(id)a0;
+ (id)leftshift:(id)a0 by:(id)a1;
+ (id)log:(id)a0;
+ (id)lowercase:(id)a0;
+ (id)max:(id)a0;
+ (id)min:(id)a0;
+ (id)mode:(id)a0;
+ (id)modulus:(id)a0 by:(id)a1;
+ (id)multiply:(id)a0 by:(id)a1;
+ (id)noindex:(id)a0;
+ (id)objectFrom:(id)a0 withIndex:(id)a1;
+ (id)raise:(id)a0 toPower:(id)a1;
+ (id)random;
+ (id)randomn:(id)a0;
+ (id)rightshift:(id)a0 by:(id)a1;
+ (id)sqrt:(id)a0;
+ (id)sum:(id)a0;
+ (id)trunc:(id)a0;
+ (id)uppercase:(id)a0;

- (double)distanceFromLocation:(id)a0;

@end
