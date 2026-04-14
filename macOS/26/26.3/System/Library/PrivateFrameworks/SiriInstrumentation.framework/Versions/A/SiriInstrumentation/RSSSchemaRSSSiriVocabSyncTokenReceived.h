@class NSData;

@interface RSSSchemaRSSSiriVocabSyncTokenReceived : SISchemaInstrumentationMessage {
    struct { unsigned char reason : 1; unsigned char syncTokenTransferLatencyInMs : 1; } _has;
}

@property (nonatomic) int reason;
@property (nonatomic) BOOL hasReason;
@property (nonatomic) unsigned long long syncTokenTransferLatencyInMs;
@property (nonatomic) BOOL hasSyncTokenTransferLatencyInMs;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (void)deleteReason;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)deleteSyncTokenTransferLatencyInMs;

@end
