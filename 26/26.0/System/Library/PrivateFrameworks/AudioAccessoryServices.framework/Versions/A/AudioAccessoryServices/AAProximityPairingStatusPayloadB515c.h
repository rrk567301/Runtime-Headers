@interface AAProximityPairingStatusPayloadB515c : AAProximityPairingStatusPayloadB515

@property (readonly) BOOL usbAudioConnected;

+ (BOOL)supportedPID:(unsigned short)a0;

- (id)describeProperties;
- (unsigned char)primaryLocation;

@end
