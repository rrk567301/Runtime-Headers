@interface CSPowerHUD : NSObject

+ (id)sharedInstance;
+ (id)getSpotlightDataExpiration;
+ (id)getSpotlightOperationsDataWithTimeInterval:(double)a0;
+ (BOOL)isSpotlightDataExpired;
+ (double)timeUntilSpotlightDataExpires;

- (void)writeToBiomeStreamWithBundleID:(id)a0 itemCount:(long long)a1 baseOperation:(long long)a2;
- (void)writeToBiomeStreamWithBundleID:(id)a0 itemCount:(long long)a1 baseOperation:(long long)a2 identifier:(id)a3 reason:(id)a4;
- (void)writeToBiomeStreamWithBundleID:(id)a0 itemCount:(long long)a1 baseOperation:(long long)a2 reason:(long long)a3;

@end
