@class NSDictionary, DMFSecurityInformation;

@interface DMFFetchSecurityInformationResultObject : CATTaskResultObject

@property (readonly, copy, nonatomic) DMFSecurityInformation *securityInformation;
@property (readonly, copy, nonatomic) NSDictionary *valuesByPropertyKey;
@property (readonly, copy, nonatomic) NSDictionary *errorsByPropertyKey;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithSecurityInformation:(id)a0;
- (id)initWithValuesByPropertyKey:(id)a0 errorsByPropertyKey:(id)a1;

@end
