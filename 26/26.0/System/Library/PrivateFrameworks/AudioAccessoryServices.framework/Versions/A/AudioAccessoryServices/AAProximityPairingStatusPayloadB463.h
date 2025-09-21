@interface AAProximityPairingStatusPayloadB463 : AAProximityPairingStatusPayloadBeatsUntethered

@property (readonly) unsigned char color;

+ (BOOL)supportedPID:(unsigned short)a0;

- (id)describeProperties;
- (unsigned char)colorBest;

@end
