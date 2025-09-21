@class NSData;

@interface HALSchemaHALCompanionDeviceDiscoveryEnded : SISchemaInstrumentationMessage {
    struct { unsigned char discoveryType : 1; unsigned char isMeDevice : 1; unsigned char hasOtheriOSActiveDevices : 1; unsigned char hasNullPeerIdentityServicesId : 1; unsigned char deviceProximity : 1; } _has;
}

@property (nonatomic) int discoveryType;
@property (nonatomic) char hasDiscoveryType;
@property (nonatomic) char isMeDevice;
@property (nonatomic) char hasIsMeDevice;
@property (nonatomic) char hasOtheriOSActiveDevices;
@property (nonatomic) char hasHasOtheriOSActiveDevices;
@property (nonatomic) char hasNullPeerIdentityServicesId;
@property (nonatomic) char hasHasNullPeerIdentityServicesId;
@property (nonatomic) int deviceProximity;
@property (nonatomic) char hasDeviceProximity;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteDeviceProximity;
- (void)deleteDiscoveryType;
- (void)deleteHasNullPeerIdentityServicesId;
- (void)deleteHasOtheriOSActiveDevices;
- (void)deleteIsMeDevice;
- (id)suppressMessageUnderConditions;

@end
