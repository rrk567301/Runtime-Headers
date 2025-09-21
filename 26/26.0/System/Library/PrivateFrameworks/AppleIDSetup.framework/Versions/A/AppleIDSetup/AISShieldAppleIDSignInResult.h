@class NSDictionary;

@interface AISShieldAppleIDSignInResult : NSObject {
    void /* function */ authResults;
}

@property (nonatomic, readonly) NSDictionary *authResults;

- (id)init;
- (void).cxx_destruct;
- (id)initWithAuthResults:(id)a0;

@end
