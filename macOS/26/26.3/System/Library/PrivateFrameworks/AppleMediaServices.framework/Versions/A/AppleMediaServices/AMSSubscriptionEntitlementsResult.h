@class NSNumber, NSDictionary;

@interface AMSSubscriptionEntitlementsResult : NSObject

@property (retain) NSNumber *appAdamId;
@property (retain) NSNumber *appVersion;
@property (retain) NSDictionary *entitlements;
@property (retain) NSDictionary *serverResponse;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)exportObject;

@end
