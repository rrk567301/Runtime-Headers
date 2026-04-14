@class NSDictionary, NSString;

@interface CPUI_AppStoreSilentSignIn : NSObject

@property (retain) NSDictionary *authResults;
@property BOOL makeActive;
@property (retain) NSString *personaID;
@property BOOL fakeSignIn;

- (void).cxx_destruct;
- (void)_FAKEsignInWithCompletion:(id /* block */)a0;
- (void)_startSignInWithCompletion:(id /* block */)a0;
- (void)startSignInWithCompletion:(id /* block */)a0;

@end
