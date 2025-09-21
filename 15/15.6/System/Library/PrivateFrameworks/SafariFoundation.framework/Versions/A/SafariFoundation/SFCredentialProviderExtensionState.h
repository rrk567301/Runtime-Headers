@class NSString, SFExternalCredentialIdentityStoreIdentifier;

@interface SFCredentialProviderExtensionState : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic, getter=isEnabled) char enabled;
@property (readonly, nonatomic) char supportsIncrementalUpdates;
@property (readonly, copy, nonatomic) NSString *localizedDisplayName;
@property (readonly, copy, nonatomic) SFExternalCredentialIdentityStoreIdentifier *credentialIdentityStoreIdentifier;
@property (readonly, copy, nonatomic) NSString *providerBundleID;

+ (id)credentialProviderExtensionWithDisabledState;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithEnabledState:(char)a0 supportsIncrementalUpdates:(char)a1;
- (id)initWithEnabledState:(char)a0 supportsIncrementalUpdates:(char)a1 localizedDisplayName:(id)a2 credentialIdentityStoreIdentifier:(id)a3 providerBundleID:(id)a4;
- (id)initWithEnabledState:(char)a0 supportsIncrementalUpdates:(char)a1 localizedDisplayName:(id)a2 providerBundleID:(id)a3;

@end
