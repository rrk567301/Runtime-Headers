@class NSData;

@interface ASAuthorizationPublicKeyCredentialPRFRegistrationOutput : NSObject {
    void /* function */ first;
    void /* function */ second;
}

@property (nonatomic) BOOL isSupported;
@property (nonatomic, copy) NSData *first;
@property (nonatomic, copy) NSData *second;

- (void).cxx_destruct;
- (id)init;
- (id)initWithIsSupported:(BOOL)a0 first:(id)a1 second:(id)a2;

@end
