@class NSString;

@interface CKStringValueValidator : CKPredicateValidatorInstance

@property (retain, nonatomic) NSString *value;

- (id)initWithValue:(id)a0;
- (id)CKPropertiesDescription;
- (BOOL)validate:(id)a0 error:(id *)a1;
- (void).cxx_destruct;

@end
