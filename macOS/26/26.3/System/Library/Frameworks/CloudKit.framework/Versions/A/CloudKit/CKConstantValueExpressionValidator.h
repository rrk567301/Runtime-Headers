@protocol CKObjectValidating;

@interface CKConstantValueExpressionValidator : CKPredicateValidatorInstance

@property (retain, nonatomic) id<CKObjectValidating> validator;

- (id)CKPropertiesDescription;
- (BOOL)validate:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)initWithValidator:(id)a0;

@end
