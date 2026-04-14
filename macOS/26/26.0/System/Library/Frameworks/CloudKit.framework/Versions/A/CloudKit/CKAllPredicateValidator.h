@class NSArray;

@interface CKAllPredicateValidator : CKPredicateValidatorInstance

@property (retain, nonatomic) NSArray *validators;

- (BOOL)validate:(id)a0 error:(id *)a1;
- (id)initWithValidators:(id)a0;
- (id)CKPropertiesDescription;
- (void).cxx_destruct;

@end
