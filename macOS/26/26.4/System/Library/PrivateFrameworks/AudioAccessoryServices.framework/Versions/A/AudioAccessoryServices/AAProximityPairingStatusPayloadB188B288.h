@interface AAProximityPairingStatusPayloadB188B288 : AAProximityPairingStatusPayloadUntethered

@property (readonly) unsigned char lidOpenCount;
@property (readonly) BOOL lidClosed;
@property (readonly) unsigned char caseVersion;
@property (readonly) unsigned char caseLedColor;
@property (readonly) unsigned char caseLedStatus;
@property (readonly) unsigned char color;

+ (BOOL)supportedPID:(unsigned short)a0;

- (id)describeProperties;

@end
