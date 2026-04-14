@interface AAProximityPairingStatusPayloadB444 : AAProximityPairingStatusPayloadBeatsUntethered

@property (readonly) unsigned char leftColor;
@property (readonly) unsigned char rightColor;
@property (readonly) unsigned char caseColor;

+ (BOOL)supportedPID:(unsigned short)a0;

- (id)describeProperties;
- (unsigned char)colorBest;

@end
