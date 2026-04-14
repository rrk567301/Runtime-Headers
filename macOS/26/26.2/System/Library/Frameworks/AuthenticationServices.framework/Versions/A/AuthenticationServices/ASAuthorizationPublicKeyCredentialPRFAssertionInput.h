@class NSDictionary, ASAuthorizationPublicKeyCredentialPRFAssertionInputValues;

@interface ASAuthorizationPublicKeyCredentialPRFAssertionInput : NSObject {
    void /* function */ perCredentialInputValues;
}

@property (nonatomic, readonly) ASAuthorizationPublicKeyCredentialPRFAssertionInputValues *inputValues;
@property (nonatomic, readonly) NSDictionary *perCredentialInputValues;

- (void).cxx_destruct;
- (id)init;
- (id)initWithInputValues:(id)a0 perCredentialInputValues:(id)a1;

@end
