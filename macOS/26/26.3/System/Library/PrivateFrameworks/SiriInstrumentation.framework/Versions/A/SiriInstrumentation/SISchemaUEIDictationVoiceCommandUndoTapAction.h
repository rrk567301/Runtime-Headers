@class NSData, SISchemaUUID;

@interface SISchemaUEIDictationVoiceCommandUndoTapAction : SISchemaInstrumentationMessage {
    struct { unsigned char isUndoTapAlternativeSelection : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *voiceCommandId;
@property (nonatomic) BOOL hasVoiceCommandId;
@property (nonatomic) BOOL isUndoTapAlternativeSelection;
@property (nonatomic) BOOL hasIsUndoTapAlternativeSelection;
@property (readonly, nonatomic) NSData *jsonData;

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
- (void)deleteIsUndoTapAlternativeSelection;
- (void)deleteVoiceCommandId;

@end
