@interface CKCompoundTypePredicateValidator : CKPredicateValidatorInstance

@property (nonatomic) unsigned long long type;

- (BOOL)validate:(id)a0 error:(id *)a1;
- (id)initWithType:(unsigned long long)a0;
- (id)CKPropertiesDescription;

@end
