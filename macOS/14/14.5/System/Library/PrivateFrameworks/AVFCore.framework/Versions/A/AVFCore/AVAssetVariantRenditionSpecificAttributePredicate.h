@class NSDictionary, NSNumber, NSPredicateOperator;

@interface AVAssetVariantRenditionSpecificAttributePredicate : NSPredicate {
    NSNumber *_value;
    NSPredicateOperator *_operator;
}

@property (readonly, nonatomic) NSDictionary *mediaSelectionOptionPlist;

+ (BOOL)supportsSecureCoding;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)predicateFormat;
- (void)acceptVisitor:(id)a0 flags:(unsigned long long)a1;
- (BOOL)evaluateWithObject:(id)a0 substitutionVariables:(id)a1;
- (id)initWithValue:(id)a0 mediaSelectionOption:(id)a1 operatorType:(unsigned long long)a2;
- (id)valueForAlternate:(id)a0;

@end
