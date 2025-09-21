@class NSString;

@interface AAProximityPairingStatusPayloadOtherTetheredNonCase : AAProximityPairingStatusPayloadGeneral <AATetheredProximityPairingPayload>

@property (readonly) unsigned char primaryLocation;
@property (readonly) BOOL outOfBoxMode;
@property (readonly) unsigned char lidOpenCount;
@property (readonly) BOOL showProxStatus;
@property (readonly) unsigned char color;
@property (readonly) BOOL mainBatteryValid;
@property (readonly) unsigned char mainBatteryLevel;
@property (readonly) BOOL mainBatteryCharging;
@property (readonly) BOOL chargingDEOC;
@property (readonly) BOOL chargingOBC;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportedPID:(unsigned short)a0;

- (id)describeProperties;

@end
