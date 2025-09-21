@class NSString, NSURL;

@interface NEURLFilterConfiguration : NSObject <NEConfigurationValidating, NEPrettyDescription, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSString *pirGroupName;
@property (copy) NSString *pirUseCase;
@property BOOL pirPrivacyProxyFailOpen;
@property BOOL pirSkipRegistration;
@property (getter=isEnabled) BOOL enabled;
@property (getter=shouldFailClosed) BOOL shouldFailClosed;
@property (copy) NSString *appBundleIdentifier;
@property (copy) NSString *controlProviderBundleIdentifier;
@property double prefilterFetchInterval;
@property (copy) NSURL *pirServerURL;
@property (copy) NSURL *pirPrivacyPassIssuerURL;
@property (copy) NSString *pirAuthenticationToken;
@property (copy) NSString *controlProviderDesignatedRequirement;

- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (BOOL)checkValidityAndCollectErrors:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithPIRServer:(id)a0 pirPrivacyPassIssuerURL:(id)a1 pirAuthenticationToken:(id)a2 controlProviderBundleIdentifier:(id)a3;

@end
