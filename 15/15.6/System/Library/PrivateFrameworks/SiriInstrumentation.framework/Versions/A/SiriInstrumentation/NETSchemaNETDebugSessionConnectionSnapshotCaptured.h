@class NSArray, NETSchemaNETDebugSessionConnectionQuality, NSData, NETSchemaNETDebugSessionConnectionNetwork, NETSchemaNETDebugSessionConnectionPingInfo;

@interface NETSchemaNETDebugSessionConnectionSnapshotCaptured : SISchemaInstrumentationMessage {
    struct { unsigned char sequenceNumber : 1; } _has;
}

@property (nonatomic) unsigned int sequenceNumber;
@property (nonatomic) char hasSequenceNumber;
@property (retain, nonatomic) NETSchemaNETDebugSessionConnectionNetwork *network;
@property (nonatomic) char hasNetwork;
@property (copy, nonatomic) NSArray *networkInterfaces;
@property (retain, nonatomic) NETSchemaNETDebugSessionConnectionPingInfo *pingInfo;
@property (nonatomic) char hasPingInfo;
@property (retain, nonatomic) NETSchemaNETDebugSessionConnectionQuality *quality;
@property (nonatomic) char hasQuality;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)addNetworkInterfaces:(id)a0;
- (void)clearNetworkInterfaces;
- (void)deleteNetwork;
- (void)deleteNetworkInterfaces;
- (void)deletePingInfo;
- (void)deleteQuality;
- (void)deleteSequenceNumber;
- (id)networkInterfacesAtIndex:(unsigned long long)a0;
- (unsigned long long)networkInterfacesCount;
- (id)suppressMessageUnderConditions;

@end
