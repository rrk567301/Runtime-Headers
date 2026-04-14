@class NSArray, NSData, NETSchemaNETSessionConnectionNetwork;

@interface NETSchemaNETSessionConnectionSnapshotCaptured : SISchemaInstrumentationMessage {
    struct { unsigned char sequenceNumber : 1; unsigned char snapshotTriggerReason : 1; unsigned char provider : 1; } _has;
}

@property (nonatomic) unsigned int sequenceNumber;
@property (nonatomic) BOOL hasSequenceNumber;
@property (nonatomic) int snapshotTriggerReason;
@property (nonatomic) BOOL hasSnapshotTriggerReason;
@property (retain, nonatomic) NETSchemaNETSessionConnectionNetwork *network;
@property (nonatomic) BOOL hasNetwork;
@property (copy, nonatomic) NSArray *networkInterfaces;
@property (nonatomic) int provider;
@property (nonatomic) BOOL hasProvider;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)addNetworkInterfaces:(id)a0;
- (void)clearNetworkInterfaces;
- (void)deleteNetwork;
- (void)deleteNetworkInterfaces;
- (void)deleteProvider;
- (void)deleteSequenceNumber;
- (void)deleteSnapshotTriggerReason;
- (id)networkInterfacesAtIndex:(unsigned long long)a0;
- (unsigned long long)networkInterfacesCount;

@end
