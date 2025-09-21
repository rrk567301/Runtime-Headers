@class NSString, ASCredentialServiceIdentifier, SFExternalCredentialIdentityStoreIdentifier;

@interface ASPasswordCredentialIdentity : NSObject <ASCredentialIdentityPrivate, NSCopying, NSSecureCoding, ASCredentialIdentity>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) ASCredentialServiceIdentifier *serviceIdentifier;
@property (readonly, copy, nonatomic) NSString *user;
@property (readonly, copy, nonatomic) NSString *recordIdentifier;
@property (nonatomic) long long rank;
@property (readonly, nonatomic) SFExternalCredentialIdentityStoreIdentifier *credentialIdentityStoreIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)identityWithServiceIdentifier:(id)a0 user:(id)a1 recordIdentifier:(id)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithFoundationCredentialIdentity:(id)a0;
- (id)initWithServiceIdentifier:(id)a0 user:(id)a1 recordIdentifier:(id)a2;

@end
