@class NSNumber;

@interface CHIPThermostatClusterRelayStatusLogParams : NSObject

@property (retain, nonatomic) NSNumber *timeOfDay;
@property (retain, nonatomic) NSNumber *relayStatus;
@property (retain, nonatomic) NSNumber *localTemperature;
@property (retain, nonatomic) NSNumber *humidityInPercentage;
@property (retain, nonatomic) NSNumber *setpoint;
@property (retain, nonatomic) NSNumber *unreadEntries;

- (id)init;
- (void).cxx_destruct;

@end
