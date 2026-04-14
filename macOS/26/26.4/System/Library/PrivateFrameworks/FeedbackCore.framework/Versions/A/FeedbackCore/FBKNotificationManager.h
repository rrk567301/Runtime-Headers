@class NSString;

@interface FBKNotificationManager : NSObject

@property (retain, nonatomic) NSString *APNSToken;

+ (id)shared;

- (void)setToken:(id)a0;
- (void).cxx_destruct;
- (void)deregisterTokenWithSeedPortal:(id)a0 completion:(id /* block */)a1;
- (void)registerTokenWithSeedPortal:(id)a0;
- (void)requestPermission;

@end
