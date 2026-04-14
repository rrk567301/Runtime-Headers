@class NSSet;

@interface SDMDMConfiguration : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSSet *tokens;
@property BOOL restrictUserPrograms;
@property BOOL disableBetaEnrollment;
@property long long policy;

+ (id)defaultConfigurationForSetupAssistantFlowWithTokens:(id)a0;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithPolicy:(long long)a0;

@end
