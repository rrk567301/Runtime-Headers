@class NSError;

@interface CDPStateHandlerResult : NSObject

@property char cloudDataProtectionEnabled;
@property char shouldCompleteSignIn;
@property unsigned long long peeriCloudKeychainState;
@property (retain) NSError *error;

+ (id)resultWithError:(id)a0;
+ (id)resultWithCloudDataProtectionEnabled:(char)a0 shouldCompleteSignIn:(char)a1 error:(id)a2;
+ (id)resultWithCloudDataProtectionEnabled:(char)a0 shouldCompleteSignIn:(char)a1 peeriCloudKeychainState:(unsigned long long)a2 error:(id)a3;
+ (id)successResult;

- (void).cxx_destruct;

@end
