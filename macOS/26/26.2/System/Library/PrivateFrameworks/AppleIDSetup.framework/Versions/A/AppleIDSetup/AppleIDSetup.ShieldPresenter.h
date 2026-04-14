@class NSDictionary;

@interface AppleIDSetup.ShieldPresenter : NSObject <AISShieldControllerHostProtocol, NSXPCListenerDelegate> {
    void /* unknown type, empty encoding */ delegate;
}

- (void).cxx_destruct;
- (id)init;
- (void)shieldSetupDidFinishWith:(id)a0 error:(id)a1;
- (void)performAIDASignInWith:(NSDictionary *)a0 completionHandler:(void (^)(BOOL))a1;
- (void)setupPasscodeAndBiometricWithCompletionHandler:(void (^)(BOOL))a0;
- (void)shieldSetupSelectedAccount:(long long)a0 completionHandler:(void (^)(BOOL))a1;

@end
