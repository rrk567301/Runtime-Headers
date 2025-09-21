@class NSExpression, NSPredicateOperator;

@interface NSComparisonPredicate : NSPredicate {
    NSPredicateOperator *_predicateOperator;
    NSExpression *_lhs;
    NSExpression *_rhs;
}

@property (readonly) unsigned long long predicateOperatorType;
@property (readonly) unsigned long long comparisonPredicateModifier;
@property (readonly, retain) NSExpression *leftExpression;
@property (readonly, retain) NSExpression *rightExpression;
@property (readonly) SEL customSelector;
@property (readonly) unsigned long long options;

+ (char)supportsSecureCoding;
+ (id)predicateWithLeftExpression:(id)a0 rightExpression:(id)a1 customSelector:(SEL)a2;
+ (id)predicateWithLeftExpression:(id)a0 rightExpression:(id)a1 modifier:(unsigned long long)a2 type:(unsigned long long)a3 options:(unsigned long long)a4;
+ (id)predicateWithPredicateOperator:(id)a0 leftExpression:(id)a1 rightExpression:(id)a2;
+ (id)predicateWithPredicateOperator:(id)a0 leftKeyPath:(id)a1 rightKeyPath:(id)a2;
+ (id)predicateWithPredicateOperator:(id)a0 leftKeyPath:(id)a1 rightValue:(id)a2;

- (id)_keypathsForDerivedPropertyValidation:(id *)a0;
- (id)minimalFormInContext:(id)a0;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_acceptExpressions:(id)a0 flags:(unsigned long long)a1;
- (void)allowEvaluation;
- (id)predicateFormat;
- (void)_acceptOperator:(id)a0 flags:(unsigned long long)a1;
- (void)acceptVisitor:(id)a0 flags:(unsigned long long)a1;
- (char)evaluateWithObject:(id)a0 substitutionVariables:(id)a1;
- (id)generateMetadataDescription;
- (id)initWithLeftExpression:(id)a0 rightExpression:(id)a1 customSelector:(SEL)a2;
- (id)initWithLeftExpression:(id)a0 rightExpression:(id)a1 modifier:(unsigned long long)a2 type:(unsigned long long)a3 options:(unsigned long long)a4;
- (id)initWithPredicateOperator:(id)a0 leftExpression:(id)a1 rightExpression:(id)a2;
- (id)initWithPredicateOperator:(id)a0 leftKeyPath:(id)a1 rightKeyPath:(id)a2;
- (id)initWithPredicateOperator:(id)a0 leftKeyPath:(id)a1 rightValue:(id)a2;
- (id)keyPathExpressionForString:(id)a0;
- (id)predicateOperator;
- (id)predicateWithSubstitutionVariables:(id)a0;
- (void)setPredicateOperator:(id)a0;

@end
