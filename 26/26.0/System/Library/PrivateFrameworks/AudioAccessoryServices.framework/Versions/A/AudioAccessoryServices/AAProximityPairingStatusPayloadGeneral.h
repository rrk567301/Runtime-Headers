@class NSData;

@interface AAProximityPairingStatusPayloadGeneral : AAProximityPairingPayload

@property (readonly) unsigned char status1;
@property (readonly) unsigned char battery1;
@property (readonly) unsigned char battery2;
@property (readonly) BOOL supportWirelessSplitter;
@property (readonly) unsigned char status3;
@property (readonly) unsigned char colorRaw;
@property (readonly) unsigned char colorBest;
@property (readonly) unsigned char misc1;
@property (readonly) unsigned char status2;
@property (readonly) unsigned char audioState;
@property (readonly) unsigned char connectedSourceCount;
@property (readonly) BOOL chargingDEOC;
@property (readonly) BOOL chargingOBC;
@property (readonly) BOOL smartRoutingConnected;
@property (readonly) unsigned char battery3;
@property (readonly) BOOL myBatteryValid;
@property (readonly) unsigned char myBatteryLevel;
@property (readonly) BOOL myBatteryCharging;
@property (readonly) unsigned char battery4;
@property (readonly) BOOL otherBatteryValid;
@property (readonly) unsigned char otherBatteryLevel;
@property (readonly) BOOL otherBatteryCharging;
@property (readonly) unsigned char battery5;
@property (readonly) BOOL caseBatteryValid;
@property (readonly) unsigned char caseBatteryLevel;
@property (readonly) BOOL caseBatteryCharging;
@property (readonly, copy, nonatomic) NSData *lastConnectedHost;
@property (readonly, copy, nonatomic) NSData *lastBudInCaseWithCurrentBud;
@property (readonly) unsigned char status4;
@property (readonly) unsigned char smartRoutingScoreSource1;
@property (readonly) unsigned char smartRoutingScoreSource2;
@property (readonly) unsigned char status5;
@property (readonly) unsigned char idleTime;
@property (readonly) unsigned char outOfCaseTime;
@property (readonly) BOOL lastConnectedHostSignedInToICloud;

+ (id)proximityPairingStatusPayloadWithData:(id)a0 pid:(unsigned short)a1;
+ (BOOL)supportedPID:(unsigned short)a0;

- (id)initWithData:(id)a0;
- (void).cxx_destruct;
- (id)describeProperties;
- (BOOL)chargingDEOCSupported;

@end
