@class NSString, NSArray;

@interface CKFunctionExpressionValidator : CKPredicateValidatorInstance {
    NSString *_functionName;
    NSArray *_argumentValidators;
}

- (BOOL)validate:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)CKPropertiesDescription;

@end
