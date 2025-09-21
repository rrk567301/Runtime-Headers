@class NSArray, NSData;

@interface NETSchemaNETPeerConnectionFailed : SISchemaInstrumentationMessage {
    struct { unsigned char isCloudConnected : 1; unsigned char isConnected : 1; unsigned char hasDevice : 1; unsigned char timeSinceLastNearbyChangeInSeconds : 1; unsigned char isNearby : 1; unsigned char isPreferringBtClassic : 1; } _has;
}

@property (copy, nonatomic) NSArray *connectedBtDevices;
@property (nonatomic) char isCloudConnected;
@property (nonatomic) char hasIsCloudConnected;
@property (nonatomic) char isConnected;
@property (nonatomic) char hasIsConnected;
@property (nonatomic) char hasDevice;
@property (nonatomic) char hasHasDevice;
@property (nonatomic) double timeSinceLastNearbyChangeInSeconds;
@property (nonatomic) char hasTimeSinceLastNearbyChangeInSeconds;
@property (nonatomic) char isNearby;
@property (nonatomic) char hasIsNearby;
@property (nonatomic) char isPreferringBtClassic;
@property (nonatomic) char hasIsPreferringBtClassic;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteHasDevice;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)addConnectedBtDevices:(id)a0;
- (void)clearConnectedBtDevices;
- (id)connectedBtDevicesAtIndex:(unsigned long long)a0;
- (unsigned long long)connectedBtDevicesCount;
- (void)deleteConnectedBtDevices;
- (void)deleteIsCloudConnected;
- (void)deleteIsConnected;
- (void)deleteIsNearby;
- (void)deleteIsPreferringBtClassic;
- (void)deleteTimeSinceLastNearbyChangeInSeconds;
- (id)suppressMessageUnderConditions;

@end
