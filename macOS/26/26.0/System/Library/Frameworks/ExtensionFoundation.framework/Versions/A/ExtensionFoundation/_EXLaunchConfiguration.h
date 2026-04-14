@class NSArray, NSString, NSDictionary, _EXPersona, _EXExtensionInstanceIdentifier, _EXExtensionIdentity;

@interface _EXLaunchConfiguration : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ _extensionIdentity;
    void /* function */ preferredLanguages;
    void /* function */ sandboxProfileName;
    void /* function */ additionalEnvironmentVariables;
    void /* function */ assertionAttributes;
    void /* unknown type, empty encoding */ networkApplicationID;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) _EXExtensionIdentity *extensionIdentity;
@property (nonatomic, retain) _EXExtensionInstanceIdentifier *instanceIdentifier;
@property (nonatomic, copy) NSArray *preferredLanguages;
@property (nonatomic, copy) NSString *sandboxProfileName;
@property (nonatomic, copy) NSDictionary *additionalEnvironmentVariables;
@property (nonatomic, copy) _EXPersona *launchPersona;
@property (nonatomic, copy) NSArray *assertionAttributes;
@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) NSString *description;

+ (BOOL)configureLaunchContext:(id)a0 error:(id *)a1;
+ (BOOL)configureRBInfoOnLaunchContext:(id)a0 error:(id *)a1;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithExtensionIdentity:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)isLaunchConfigurationEqual:(id)a0;
- (id)rbsProcessIdentityWithHost:(id)a0;

@end
