@interface AAProximityPairingStatusPayloadBeatsUntethered : AAProximityPairingStatusPayloadUntethered

@property (readonly) unsigned char lidOpenCount;
@property (readonly) BOOL lidClosed;
@property (readonly) unsigned char caseVersion;
@property (readonly) unsigned char caseLedStatus;
@property (readonly) unsigned char caseLedColor;

- (id)describeProperties;

@end
