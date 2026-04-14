@class NSArray;

@interface TPSUserTypesValidation : TPSInclusivityValidation

@property (readonly, nonatomic) NSArray *targetUserTypes;
@property (readonly, nonatomic) NSArray *excludeUserTypes;

- (id)initWithTargetUserTypes:(id)a0 excludeUserTypes:(id)a1;
- (void)validateWithCompletion:(id /* block */)a0;

@end
