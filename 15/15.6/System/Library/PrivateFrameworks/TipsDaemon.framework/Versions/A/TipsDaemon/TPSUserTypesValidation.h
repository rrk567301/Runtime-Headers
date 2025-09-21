@class NSArray;

@interface TPSUserTypesValidation : TPSInclusivityValidation

@property (readonly, nonatomic) NSArray *targetUserTypes;
@property (readonly, nonatomic) NSArray *excludeUserTypes;

+ (char)isInternalBuild;
+ (char)isBetaBuild;
+ (char)isUserMatchingType:(id)a0;

- (id)initWithTargetUserTypes:(id)a0 excludeUserTypes:(id)a1;
- (void)validateWithCompletion:(id /* block */)a0;

@end
