@class NSData, NSString, NSArray, ASAuthorizationPublicKeyCredentialPRFRegistrationInput, ASAuthorizationPublicKeyCredentialLargeBlobRegistrationInput, ASPublicKeyCredentialClientData, ASCPublicKeyCredentialRegistrationExtensionInputs, ASCPublicKeyCredentialCreationOptions;

@interface ASAuthorizationPlatformPublicKeyCredentialRegistrationRequest : ASAuthorizationRequest <ASAuthorizationWebBrowserPlatformPublicKeyCredentialRegistrationRequest, ASAuthorizationPublicKeyCredentialRegistrationRequest> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _internalLock;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic, retain) ASAuthorizationPublicKeyCredentialLargeBlobRegistrationInput *__largeBlobSwift;
@property (nonatomic, retain) ASAuthorizationPublicKeyCredentialPRFRegistrationInput *__prfSwift;
@property (readonly, nonatomic) ASCPublicKeyCredentialCreationOptions *coreCredentialCreationOptions;
@property (readonly, nonatomic) ASCPublicKeyCredentialRegistrationExtensionInputs *extensions;
@property (readonly, nonatomic) ASCPublicKeyCredentialCreationOptions *coreCredentialCreationOptions;
@property (readonly, nonatomic) ASCPublicKeyCredentialRegistrationExtensionInputs *extensions;
@property (retain, nonatomic) ASAuthorizationPublicKeyCredentialLargeBlobRegistrationInput *largeBlob;
@property (retain, nonatomic) ASAuthorizationPublicKeyCredentialPRFRegistrationInput *prf;
@property (nonatomic) long long requestStyle;
@property (readonly, nonatomic) ASPublicKeyCredentialClientData *clientData;
@property (copy, nonatomic) NSArray *excludedCredentials;
@property (nonatomic) BOOL shouldShowHybridTransport;
@property (readonly, copy, nonatomic) NSString *relyingPartyIdentifier;
@property (copy, nonatomic) NSData *userID;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSData *challenge;
@property (retain, nonatomic) NSString *userVerificationPreference;
@property (retain, nonatomic) NSString *attestationPreference;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)emptyExtensions;

@end
