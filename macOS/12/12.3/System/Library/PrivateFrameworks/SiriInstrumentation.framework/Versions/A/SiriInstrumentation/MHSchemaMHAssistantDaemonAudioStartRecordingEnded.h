@class NSArray, NSData;

@interface MHSchemaMHAssistantDaemonAudioStartRecordingEnded : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *activeSessionDisplayIds;
@property (copy, nonatomic) NSArray *fanInfos;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)clearActiveSessionDisplayIds;
- (void)addActiveSessionDisplayIds:(id)a0;
- (void)deleteActiveSessionDisplayIds;
- (unsigned long long)activeSessionDisplayIdsCount;
- (id)activeSessionDisplayIdsAtIndex:(unsigned long long)a0;
- (void)clearFanInfo;
- (void)addFanInfo:(id)a0;
- (void)deleteFanInfo;
- (unsigned long long)fanInfoCount;
- (id)fanInfoAtIndex:(unsigned long long)a0;
- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;

@end
