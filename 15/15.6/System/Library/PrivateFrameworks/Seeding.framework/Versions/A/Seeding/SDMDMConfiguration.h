@class NSSet, NSDate;

@interface SDMDMConfiguration : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain) NSSet *tokens;
@property char restrictUserPrograms;
@property char disableBetaEnrollment;
@property (retain) NSDate *configurationDate;
@property long long policy;

+ (id)defaultConfigurationForSetupAssistantFlowWithTokens:(id)a0;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithPolicy:(long long)a0;
- (char)isMissingConfigurationDate;

@end
