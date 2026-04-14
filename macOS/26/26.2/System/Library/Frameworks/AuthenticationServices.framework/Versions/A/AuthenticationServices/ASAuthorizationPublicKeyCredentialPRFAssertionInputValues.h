@class NSData;

@interface ASAuthorizationPublicKeyCredentialPRFAssertionInputValues : NSObject {
    void /* function */ saltInput1;
    void /* function */ saltInput2;
}

@property (nonatomic, readonly) NSData *saltInput1;
@property (nonatomic, readonly) NSData *saltInput2;

- (void).cxx_destruct;
- (id)init;
- (id)initWithSaltInput1:(id)a0 saltInput2:(id)a1;

@end
