@class NSString;

@interface ELSPrivacyPolicyDescription : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *policyKey;
@property (readonly, nonatomic) NSString *suiteNameKey;
@property (readonly, nonatomic) NSString *sensitiveInformationKey;

- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (BOOL)isEqualToDescription:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithPolicyKey:(id)a0 andSuiteNameKey:(id)a1 andSensitiveInformationKey:(id)a2;

@end
