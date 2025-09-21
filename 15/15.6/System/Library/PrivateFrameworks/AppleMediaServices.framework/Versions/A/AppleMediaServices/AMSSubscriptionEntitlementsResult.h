@class NSNumber, NSDictionary;

@interface AMSSubscriptionEntitlementsResult : NSObject

@property (retain) NSNumber *appAdamId;
@property (retain) NSNumber *appVersion;
@property (retain) NSDictionary *entitlements;
@property (retain) NSDictionary *serverResponse;

- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)exportObject;

@end
