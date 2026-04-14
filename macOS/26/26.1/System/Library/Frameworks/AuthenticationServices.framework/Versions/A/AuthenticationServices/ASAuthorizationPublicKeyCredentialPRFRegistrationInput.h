@class ASAuthorizationPublicKeyCredentialPRFAssertionInputValues;

@interface ASAuthorizationPublicKeyCredentialPRFRegistrationInput : NSObject

@property (class, nonatomic, readonly) ASAuthorizationPublicKeyCredentialPRFRegistrationInput *checkForSupport;

@property (nonatomic, readonly) BOOL shouldCheckForSupport;
@property (nonatomic, readonly) ASAuthorizationPublicKeyCredentialPRFAssertionInputValues *inputValues;

- (void).cxx_destruct;
- (id)init;
- (id)initWithInputValues:(id)a0;

@end
