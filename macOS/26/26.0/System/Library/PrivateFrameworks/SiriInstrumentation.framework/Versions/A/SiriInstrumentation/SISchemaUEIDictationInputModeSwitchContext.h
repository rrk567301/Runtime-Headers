@class NSData, SISchemaUEIDictationInputModeSwitchStarted, SISchemaUEIDictationInputModeSwitchEnded;

@interface SISchemaUEIDictationInputModeSwitchContext : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUEIDictationInputModeSwitchStarted *startedOrChanged;
@property (nonatomic) BOOL hasStartedOrChanged;
@property (retain, nonatomic) SISchemaUEIDictationInputModeSwitchEnded *ended;
@property (nonatomic) BOOL hasEnded;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichContextevent;

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
- (void)deleteEnded;
- (void)deleteStartedOrChanged;

@end
