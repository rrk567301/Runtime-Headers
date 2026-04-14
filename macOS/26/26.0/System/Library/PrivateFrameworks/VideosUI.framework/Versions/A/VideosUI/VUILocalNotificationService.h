@class NSError, NSString, NSDictionary;

@interface VUILocalNotificationService : NSObject

+ (void)requestAuthorizationWithOptions:(unsigned long long)a0 completionHandler:(void (^)(BOOL, NSError *))a1;
+ (void)authorizationStatusWithCompletionHandler:(void (^)(long long))a0;
+ (void)deliverNotificationWithIdentifier:(NSString *)a0 title:(NSString *)a1 body:(NSString *)a2 options:(NSDictionary *)a3 completionHandler:(void (^)(NSError *))a4;
+ (void)updateBadgeCount:(long long)a0 completionHandler:(void (^)(NSError *))a1;

- (id)init;
- (void).cxx_destruct;

@end
