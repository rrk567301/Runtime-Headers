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

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteResolution;
- (void)deleteDurationInMs;
- (void)clearResolution;
- (void)addResolution:(id)a0;
- (unsigned long long)resolutionCount;
- (id)resolutionAtIndex:(unsigned long long)a0;
- (void)deleteProxyConfiguration;
- (void)clearConnectionEstablishmentProtocols;
- (void)deleteConnectionEstablishmentProtocols;
- (void)addConnectionEstablishmentProtocols:(id)a0;
- (unsigned long long)connectionEstablishmentProtocolsCount;
- (id)connectionEstablishmentProtocolsAtIndex:(unsigned long long)a0;

@end
