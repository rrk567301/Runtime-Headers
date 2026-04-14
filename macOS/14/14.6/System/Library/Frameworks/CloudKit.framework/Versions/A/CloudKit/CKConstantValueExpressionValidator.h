@protocol CKObjectValidating;

@interface CKConstantValueExpressionValidator : CKPredicateValidatorInstance

@property (retain, nonatomic) id<CKObjectValidating> validator;

- (void).cxx_destruct;
- (BOOL)validate:(id)a0 error:(id *)a1;
- (id)CKPropertiesDescription;
- (id)initWithValidator:(id)a0;

@end
