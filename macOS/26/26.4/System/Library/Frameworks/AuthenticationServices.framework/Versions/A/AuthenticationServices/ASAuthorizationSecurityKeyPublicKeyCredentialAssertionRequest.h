@class ASPublicKeyCredentialClientData, NSArray, NSString, NSData, ASAuthorizationPublicKeyCredentialPRFAssertionInput, ASCPublicKeyCredentialAssertionExtensionInputs, ASCPublicKeyCredentialAssertionOptions;

@interface ASAuthorizationSecurityKeyPublicKeyCredentialAssertionRequest : ASAuthorizationRequest <ASAuthorizationWebBrowserSecurityKeyPublicKeyCredentialAssertionRequest, ASAuthorizationPublicKeyCredentialAssertionRequest> {
    NSArray *_allowedCredentials;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _internalLock;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic, retain) ASAuthorizationPublicKeyCredentialPRFAssertionInput *__prfSwift;
@property (readonly, nonatomic) ASCPublicKeyCredentialAssertionExtensionInputs *extensions;
@property (readonly, nonatomic) ASCPublicKeyCredentialAssertionOptions *coreCredentialAssertionOptions;
@property (copy, nonatomic) NSArray *allowedCredentials;
@property (copy, nonatomic) NSString *appID;
@property (retain, nonatomic) ASAuthorizationPublicKeyCredentialPRFAssertionInput *prf;
@property (readonly, nonatomic) ASPublicKeyCredentialClientData *clientData;
@property (copy, nonatomic) NSData *challenge;
@property (copy, nonatomic) NSString *relyingPartyIdentifier;
@property (retain, nonatomic) NSString *userVerificationPreference;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
