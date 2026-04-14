@class ASAuthorizationPublicKeyCredentialPRFAssertionOutput, NSString, ASCSecurityKeyPublicKeyCredentialAssertion, NSData;

@interface ASAuthorizationSecurityKeyPublicKeyCredentialAssertion : NSObject <ASAuthorizationPublicKeyCredentialAssertion>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) ASAuthorizationPublicKeyCredentialPRFAssertionOutput *__prfSwift;
@property (readonly, nonatomic) ASCSecurityKeyPublicKeyCredentialAssertion *coreCredential;
@property (readonly, nonatomic) BOOL appID;
@property (readonly, nonatomic) ASAuthorizationPublicKeyCredentialPRFAssertionOutput *prf;
@property (readonly, copy, nonatomic) NSData *rawAuthenticatorData;
@property (readonly, copy, nonatomic) NSData *userID;
@property (readonly, copy, nonatomic) NSData *signature;
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
- (id)initWithCoreCredential:(id)a0;

@end
