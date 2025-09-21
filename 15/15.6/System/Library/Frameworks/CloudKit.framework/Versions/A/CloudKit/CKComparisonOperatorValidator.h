@interface CKComparisonOperatorValidator : CKPredicateValidatorInstance

@property (nonatomic) unsigned long long operatorType;

- (id)initWithOperatorType:(unsigned long long)a0;
- (id)CKPropertiesDescription;
- (char)validate:(id)a0 error:(id *)a1;

@end
