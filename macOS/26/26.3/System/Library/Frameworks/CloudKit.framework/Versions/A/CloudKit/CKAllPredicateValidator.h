@class NSArray;

@interface CKAllPredicateValidator : CKPredicateValidatorInstance

@property (retain, nonatomic) NSArray *validators;

- (id)CKPropertiesDescription;
- (BOOL)validate:(id)a0 error:(id *)a1;
- (id)initWithValidators:(id)a0;
- (void).cxx_destruct;

@end
