@class NSData, SISchemaUUID;

@interface SISchemaUEIDictationVoiceCommandUndoTapAction : SISchemaInstrumentationMessage {
    struct { unsigned char isUndoTapAlternativeSelection : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *voiceCommandId;
@property (nonatomic) char hasVoiceCommandId;
@property (nonatomic) char isUndoTapAlternativeSelection;
@property (nonatomic) char hasIsUndoTapAlternativeSelection;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteIsUndoTapAlternativeSelection;
- (void)deleteVoiceCommandId;
- (id)suppressMessageUnderConditions;

@end
