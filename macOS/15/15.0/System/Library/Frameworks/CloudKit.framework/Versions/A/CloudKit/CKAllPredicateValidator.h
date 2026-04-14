@class NSArray;

@interface CKAllPredicateValidator : CKPredicateValidatorInstance

@property (retain, nonatomic) NSArray *validators;

- (void).cxx_destruct;
- (BOOL)validate:(id)a0 error:(id *)a1;
- (id)CKPropertiesDescription;
- (id)initWithValidators:(id)a0;

@end
