@class NSArray, NSData, NETSchemaNETProxyConfiguration;

@interface NETSchemaNETDebugNetworkConnectionStateReadySnapshotCaptured : SISchemaInstrumentationMessage {
    struct { unsigned char durationInMs : 1; } _has;
}

@property (copy, nonatomic) NSArray *resolutions;
@property (retain, nonatomic) NETSchemaNETProxyConfiguration *proxyConfiguration;
@property (nonatomic) BOOL hasProxyConfiguration;
@property (nonatomic) unsigned long long durationInMs;
@property (nonatomic) BOOL hasDurationInMs;
@property (copy, nonatomic) NSArray *connectionEstablishmentProtocols;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)resolutionCount;
- (void)clearResolution;
- (void)addConnectionEstablishmentProtocols:(id)a0;
- (void)addResolution:(id)a0;
- (void)clearConnectionEstablishmentProtocols;
- (id)connectionEstablishmentProtocolsAtIndex:(unsigned long long)a0;
- (unsigned long long)connectionEstablishmentProtocolsCount;
- (void)deleteConnectionEstablishmentProtocols;
- (void)deleteDurationInMs;
- (void)deleteProxyConfiguration;
- (void)deleteResolution;
- (id)resolutionAtIndex:(unsigned long long)a0;

@end
