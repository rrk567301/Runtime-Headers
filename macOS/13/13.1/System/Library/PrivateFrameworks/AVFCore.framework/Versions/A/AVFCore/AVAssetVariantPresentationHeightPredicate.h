@class NSPredicateOperator;

@interface AVAssetVariantPresentationHeightPredicate : NSPredicate {
    double _height;
    NSPredicateOperator *_operator;
}

+ (BOOL)supportsSecureCoding;

- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)predicateFormat;
- (void)acceptVisitor:(id)a0 flags:(unsigned long long)a1;
- (BOOL)evaluateWithObject:(id)a0 substitutionVariables:(id)a1;
- (id)initWithPresentationHeight:(double)a0 operatorType:(unsigned long long)a1;

@end
