@protocol STProtectedControlAuthenticator;

@interface STControlProtection : NSObject

@property (retain) id<STProtectedControlAuthenticator> authenticator;

+ (id)sharedInstance;
+ (id)refreshBoundProperty:(id)a0;

- (void)authenticateWithCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;

@end
