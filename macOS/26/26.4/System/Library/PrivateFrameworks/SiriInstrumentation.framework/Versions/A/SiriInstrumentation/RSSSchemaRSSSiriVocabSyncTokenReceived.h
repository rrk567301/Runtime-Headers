@class NSData;

@interface RSSSchemaRSSSiriVocabSyncTokenReceived : SISchemaInstrumentationMessage {
    struct { unsigned char reason : 1; unsigned char syncTokenTransferLatencyInMs : 1; } _has;
}

@property (nonatomic) int reason;
@property (nonatomic) BOOL hasReason;
@property (nonatomic) unsigned long long syncTokenTransferLatencyInMs;
@property (nonatomic) BOOL hasSyncTokenTransferLatencyInMs;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)deleteReason;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteSyncTokenTransferLatencyInMs;

@end
