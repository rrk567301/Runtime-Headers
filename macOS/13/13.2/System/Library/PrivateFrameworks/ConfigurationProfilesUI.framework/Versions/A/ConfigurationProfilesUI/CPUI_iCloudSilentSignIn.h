@class NSDictionary;

@interface CPUI_iCloudSilentSignIn : NSObject

@property (retain) NSDictionary *authResults;

- (void).cxx_destruct;
- (void)startSignInWithCompletion:(id /* block */)a0;

@end
