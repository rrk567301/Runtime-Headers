@class NSString;

@interface AAProximityPairingAccessoryStatusPayload : AAProximityPairingPayload <AAUntetheredProximityPairingPayload>

@property (readonly) unsigned char statusFlags1;
@property (readonly) unsigned char lidOpenCount;
@property (readonly) BOOL lidClosed;
@property (readonly) BOOL needsConnection;
@property (readonly) BOOL soundEnabled;
@property (readonly) BOOL connected;
@property (readonly) BOOL faultDetected;
@property (readonly) unsigned char battery1;
@property (readonly) BOOL caseBatteryValid;
@property (readonly) unsigned char caseBatteryLevel;
@property (readonly) BOOL caseBatteryCharging;
@property (readonly) unsigned char battery2;
@property (readonly) BOOL leftBatteryValid;
@property (readonly) unsigned char leftBatteryLevel;
@property (readonly) BOOL leftBatteryCharging;
@property (readonly) unsigned char battery3;
@property (readonly) BOOL rightBatteryValid;
@property (readonly) unsigned char rightBatteryLevel;
@property (readonly) BOOL rightBatteryCharging;
@property (readonly) unsigned int firmwareVersionRaw;
@property (readonly, nonatomic) NSString *firmwareVersion;
@property (readonly) unsigned char timeUntilCharged;
@property (readonly) BOOL chargingOBC;
@property (readonly) unsigned char status2;
@property (readonly) BOOL chargingDEOC;
@property (readonly) unsigned char reserved;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithData:(id)a0;
- (id)describeProperties;

@end
