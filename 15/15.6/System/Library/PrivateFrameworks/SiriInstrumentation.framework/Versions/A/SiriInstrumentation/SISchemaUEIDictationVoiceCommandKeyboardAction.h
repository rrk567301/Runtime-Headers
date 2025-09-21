@class NSData, SISchemaUUID;

@interface SISchemaUEIDictationVoiceCommandKeyboardAction : SISchemaInstrumentationMessage {
    struct { unsigned char insertions : 1; unsigned char substituted : 1; unsigned char deleted : 1; unsigned char algorithmStatus : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *voiceCommandId;
@property (nonatomic) char hasVoiceCommandId;
@property (nonatomic) unsigned int insertions;
@property (nonatomic) char hasInsertions;
@property (nonatomic) unsigned int substituted;
@property (nonatomic) char hasSubstituted;
@property (nonatomic) unsigned int deleted;
@property (nonatomic) char hasDeleted;
@property (nonatomic) unsigned int algorithmStatus;
@property (nonatomic) char hasAlgorithmStatus;
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
- (void)deleteAlgorithmStatus;
- (void)deleteDeleted;
- (void)deleteInsertions;
- (void)deleteSubstituted;
- (void)deleteVoiceCommandId;
- (id)suppressMessageUnderConditions;

@end
