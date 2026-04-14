@interface AAProximityPairingPayload : AAAdvertisementPayload

@property (readonly) unsigned char subType;
@property (readonly) unsigned short pid;

+ (id)proximityPairingPayloadWithData:(id)a0;

- (id)initWithData:(id)a0;
- (id)describeProperties;

@end
