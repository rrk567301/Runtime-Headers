@class NSString;

@interface AAProximityPairingStatusPayloadUntethered : AAProximityPairingStatusPayloadGeneral <AAUntetheredProximityPairingPayload>

@property (readonly) BOOL utpConnected;
@property (readonly) unsigned char primaryLocation;
@property (readonly) unsigned char secondaryLocation;
@property (readonly) unsigned char budSide;
@property (readonly) unsigned char budRole;
@property (readonly) BOOL outOfBoxMode;
@property (readonly) BOOL leftBatteryValid;
@property (readonly) unsigned char leftBatteryLevel;
@property (readonly) BOOL leftBatteryCharging;
@property (readonly) BOOL rightBatteryValid;
@property (readonly) unsigned char rightBatteryLevel;
@property (readonly) BOOL rightBatteryCharging;
@property (readonly) BOOL chargingDEOC;
@property (readonly) BOOL chargingOBC;
@property (readonly) BOOL caseBatteryValid;
@property (readonly) unsigned char caseBatteryLevel;
@property (readonly) BOOL caseBatteryCharging;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)describeProperties;

@end
