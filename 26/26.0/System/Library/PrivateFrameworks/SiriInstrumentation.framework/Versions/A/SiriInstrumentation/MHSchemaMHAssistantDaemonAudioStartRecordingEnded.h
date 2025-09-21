@class NSArray, NSData;

@interface MHSchemaMHAssistantDaemonAudioStartRecordingEnded : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *activeSessionDisplayIds;
@property (copy, nonatomic) NSArray *fanInfos;
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
- (id)fanInfoAtIndex:(unsigned long long)a0;
- (id)activeSessionDisplayIdsAtIndex:(unsigned long long)a0;
- (unsigned long long)activeSessionDisplayIdsCount;
- (void)addActiveSessionDisplayIds:(id)a0;
- (void)addFanInfo:(id)a0;
- (void)clearActiveSessionDisplayIds;
- (void)clearFanInfo;
- (void)deleteActiveSessionDisplayIds;
- (void)deleteFanInfo;
- (unsigned long long)fanInfoCount;

@end
