@class NSString, RPPeopleDiscovery;

@interface FAPeopleDiscoveryService : NSObject <FAPeopleDiscoveryServiceProtocol> {
    RPPeopleDiscovery *_peopleDiscovery;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id)getNearbyPeople;
- (void)startMonitoringProximity;
- (void)stopMonitoringProximity;

@end
