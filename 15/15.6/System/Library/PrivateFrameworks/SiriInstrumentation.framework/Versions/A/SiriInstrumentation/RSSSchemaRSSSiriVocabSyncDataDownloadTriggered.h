@class NSData;

@interface RSSSchemaRSSSiriVocabSyncDataDownloadTriggered : SISchemaInstrumentationMessage {
    struct { unsigned char trigger : 1; unsigned char syncData : 1; } _has;
}

@property (nonatomic) int trigger;
@property (nonatomic) char hasTrigger;
@property (nonatomic) int syncData;
@property (nonatomic) char hasSyncData;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteTrigger;
- (void)deleteSyncData;
- (id)suppressMessageUnderConditions;

@end
