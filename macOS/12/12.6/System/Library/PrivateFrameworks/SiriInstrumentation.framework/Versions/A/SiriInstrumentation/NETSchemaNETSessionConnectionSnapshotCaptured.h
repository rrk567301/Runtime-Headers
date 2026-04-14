@class NSArray, NSData, NETSchemaNETSessionConnectionNetwork;

@interface NETSchemaNETSessionConnectionSnapshotCaptured : SISchemaInstrumentationMessage {
    struct { unsigned char sequenceNumber : 1; unsigned char snapshotTriggerReason : 1; } _has;
}

@property (nonatomic) unsigned int sequenceNumber;
@property (nonatomic) BOOL hasSequenceNumber;
@property (nonatomic) int snapshotTriggerReason;
@property (nonatomic) BOOL hasSnapshotTriggerReason;
@property (retain, nonatomic) NETSchemaNETSessionConnectionNetwork *network;
@property (nonatomic) BOOL hasNetwork;
@property (copy, nonatomic) NSArray *networkInterfaces;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteSequenceNumber;
- (void)clearNetworkInterfaces;
- (void)addNetworkInterfaces:(id)a0;
- (void)deleteNetwork;
- (void)deleteNetworkInterfaces;
- (unsigned long long)networkInterfacesCount;
- (id)networkInterfacesAtIndex:(unsigned long long)a0;
- (void)deleteSnapshotTriggerReason;
- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;

@end
