@class NSArray, NSData;

@interface FLOWSchemaFLOWVoiceShortcutContext : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *voiceShortcutActions;
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
- (void)addVoiceShortcutAction:(id)a0;
- (void)clearVoiceShortcutAction;
- (void)deleteVoiceShortcutAction;
- (id)voiceShortcutActionAtIndex:(unsigned long long)a0;
- (unsigned long long)voiceShortcutActionCount;

@end
