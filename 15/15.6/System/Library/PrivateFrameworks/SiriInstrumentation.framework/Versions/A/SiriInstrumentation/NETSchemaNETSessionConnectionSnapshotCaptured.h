@class NSArray, NSData, NETSchemaNETSessionConnectionNetwork;

@interface NETSchemaNETSessionConnectionSnapshotCaptured : SISchemaInstrumentationMessage {
    struct { unsigned char sequenceNumber : 1; unsigned char snapshotTriggerReason : 1; unsigned char provider : 1; } _has;
}

@property (nonatomic) unsigned int sequenceNumber;
@property (nonatomic) char hasSequenceNumber;
@property (nonatomic) int snapshotTriggerReason;
@property (nonatomic) char hasSnapshotTriggerReason;
@property (retain, nonatomic) NETSchemaNETSessionConnectionNetwork *network;
@property (nonatomic) char hasNetwork;
@property (copy, nonatomic) NSArray *networkInterfaces;
@property (nonatomic) int provider;
@property (nonatomic) char hasProvider;
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
- (void)deleteProvider;
- (void)deleteSequenceNumber;
- (void)deleteSnapshotTriggerReason;
- (id)networkInterfacesAtIndex:(unsigned long long)a0;
- (unsigned long long)networkInterfacesCount;
- (id)suppressMessageUnderConditions;

@end
