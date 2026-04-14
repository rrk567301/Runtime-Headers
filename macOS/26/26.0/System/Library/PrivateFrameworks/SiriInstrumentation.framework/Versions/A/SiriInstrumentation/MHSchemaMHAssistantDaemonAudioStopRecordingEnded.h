@class NSArray, NSData;

@interface MHSchemaMHAssistantDaemonAudioStopRecordingEnded : SISchemaInstrumentationMessage

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
- (void)addFanInfo:(id)a0;
- (void)clearFanInfo;
- (void)deleteFanInfo;
- (unsigned long long)fanInfoCount;

@end
