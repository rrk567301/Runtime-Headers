@class NSString;

@interface ELSPrivacyPolicyDescription : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *policyKey;
@property (readonly, nonatomic) NSString *suiteNameKey;
@property (readonly, nonatomic) NSString *sensitiveInformationKey;

- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqualToDescription:(id)a0;
- (id)initWithPolicyKey:(id)a0 andSuiteNameKey:(id)a1 andSensitiveInformationKey:(id)a2;

@end
