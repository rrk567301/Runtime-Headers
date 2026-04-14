@class NSData, SISchemaUUID;

@interface SISchemaUEIDictationVoiceCommandKeyboardAction : SISchemaInstrumentationMessage {
    struct { unsigned char insertions : 1; unsigned char substituted : 1; unsigned char deleted : 1; unsigned char algorithmStatus : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *voiceCommandId;
@property (nonatomic) BOOL hasVoiceCommandId;
@property (nonatomic) unsigned int insertions;
@property (nonatomic) BOOL hasInsertions;
@property (nonatomic) unsigned int substituted;
@property (nonatomic) BOOL hasSubstituted;
@property (nonatomic) unsigned int deleted;
@property (nonatomic) BOOL hasDeleted;
@property (nonatomic) unsigned int algorithmStatus;
@property (nonatomic) BOOL hasAlgorithmStatus;
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
- (void)deleteAlgorithmStatus;
- (void)deleteDeleted;
- (void)deleteInsertions;
- (void)deleteSubstituted;
- (void)deleteVoiceCommandId;

@end
