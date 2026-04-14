@class NSArray, NSString;

@interface WiFiAvailabilityNearbySource : NSObject <WiFiAvailabilitySource>

@property (copy) NSArray *recommendedNetworks;
@property (copy, nonatomic) id /* block */ changeHandler;
@property (copy, nonatomic) id /* block */ relevancyHandler;
@property (copy, nonatomic) id /* block */ removalHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)relevantNetworks;
- (void).cxx_destruct;

@end
