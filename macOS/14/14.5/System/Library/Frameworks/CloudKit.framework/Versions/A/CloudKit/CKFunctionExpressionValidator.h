@class NSString, NSArray;

@interface CKFunctionExpressionValidator : CKPredicateValidatorInstance {
    NSString *_functionName;
    NSArray *_argumentValidators;
}

- (void).cxx_destruct;
- (BOOL)validate:(id)a0 error:(id *)a1;
- (id)CKPropertiesDescription;

@end
