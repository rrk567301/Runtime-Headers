@class NSArray;

@interface CKAllPredicateValidator : CKPredicateValidatorInstance

@property (retain, nonatomic) NSArray *validators;

- (id)initWithValidators:(id)a0;
- (BOOL)validate:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)CKPropertiesDescription;

@end
