@class NSString;

@interface MPCPolicyEvaluation : NSObject

@property (nonatomic, getter=shouldDisableVocalAttenuation) char disableVocalAttenuation;
@property (nonatomic) long long policyType;
@property (copy, nonatomic) NSString *explanation;
@property (nonatomic) char canBeOverriden;

- (char)isEqual:(id)a0;
- (void).cxx_destruct;

@end
