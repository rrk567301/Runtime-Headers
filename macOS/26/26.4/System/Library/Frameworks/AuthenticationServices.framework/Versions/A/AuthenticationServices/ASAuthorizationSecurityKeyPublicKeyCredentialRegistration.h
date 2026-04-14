@class ASCSecurityKeyPublicKeyCredentialRegistration, NSArray, NSString, NSData, ASAuthorizationPublicKeyCredentialPRFRegistrationOutput;

@interface ASAuthorizationSecurityKeyPublicKeyCredentialRegistration : NSObject <ASAuthorizationPublicKeyCredentialRegistration>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) ASAuthorizationPublicKeyCredentialPRFRegistrationOutput *__prfSwift;
@property (readonly, nonatomic) ASCSecurityKeyPublicKeyCredentialRegistration *coreCredential;
@property (readonly, nonatomic) NSArray *transports;
@property (readonly, nonatomic) ASAuthorizationPublicKeyCredentialPRFRegistrationOutput *prf;
@property (readonly, copy, nonatomic) NSData *rawAttestationObject;
@property (readonly, copy, nonatomic) NSData *rawClientDataJSON;
@property (readonly, copy, nonatomic) NSData *credentialID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (long long)attachment;
- (id)initWithCoreCredential:(id)a0;

@end
