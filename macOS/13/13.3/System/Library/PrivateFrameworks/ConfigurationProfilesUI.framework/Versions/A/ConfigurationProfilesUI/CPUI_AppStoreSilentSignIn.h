@class NSDictionary;

@interface CPUI_AppStoreSilentSignIn : NSObject

@property (retain) NSDictionary *authResults;
@property BOOL makeActive;

- (void).cxx_destruct;
- (void)startSignInWithCompletion:(id /* block */)a0;

@end
