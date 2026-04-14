@class NSData, MHSchemaMHAssistantDaemonAudioPrewarmStarted, MHSchemaMHAssistantDaemonAudioPrewarmEnded;

@interface MHSchemaMHAssistantDaemonAudioPrewarmContext : SISchemaInstrumentationMessage

@property (retain, nonatomic) MHSchemaMHAssistantDaemonAudioPrewarmStarted *startedOrChanged;
@property (nonatomic) BOOL hasStartedOrChanged;
@property (retain, nonatomic) MHSchemaMHAssistantDaemonAudioPrewarmEnded *ended;
@property (nonatomic) BOOL hasEnded;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichContextevent;

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)deleteEnded;
- (void)deleteStartedOrChanged;

@end
