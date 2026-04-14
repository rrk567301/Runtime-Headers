@class NSArray;

@interface CKAnyPredicateValidator : CKPredicateValidatorInstance {
    NSArray *_validators;
}

- (id)CKPropertiesDescription;
- (BOOL)validate:(id)a0 error:(id *)a1;
- (void).cxx_destruct;

@end
