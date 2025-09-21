@class NSString, NSArray;

@interface CKFunctionExpressionValidator : CKPredicateValidatorInstance {
    NSString *_functionName;
    NSArray *_argumentValidators;
}

- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (char)validate:(id)a0 error:(id *)a1;

@end
