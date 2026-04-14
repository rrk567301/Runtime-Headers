@class NSString, NSArray;

@interface CKFunctionExpressionValidator : CKPredicateValidatorInstance {
    NSString *_functionName;
    NSArray *_argumentValidators;
}

- (id)CKPropertiesDescription;
- (BOOL)validate:(id)a0 error:(id *)a1;
- (void).cxx_destruct;

@end
