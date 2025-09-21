@interface AMSPushNotificationService : NSObject

+ (id)_pushServicePromise;
+ (id)registerAllTokens;
+ (id)registerTokensIfNeeded;

@end
