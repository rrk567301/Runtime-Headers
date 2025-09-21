@class NSData, SISchemaUUID;

@interface SISchemaUEIDictationVoiceCommandExecuted : SISchemaInstrumentationMessage {
    struct { unsigned char commandStatus : 1; unsigned char commandType : 1; unsigned char commandTargetWordCount : 1; unsigned char commandPayloadWordCount : 1; unsigned char commandTargetCharacterCount : 1; unsigned char commandPayloadCharacterCount : 1; unsigned char commandExecutionStartTimeInNs : 1; unsigned char commandExecutionEndTimeInNs : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *voiceCommandId;
@property (nonatomic) char hasVoiceCommandId;
@property (nonatomic) int commandStatus;
@property (nonatomic) char hasCommandStatus;
@property (nonatomic) int commandType;
@property (nonatomic) char hasCommandType;
@property (nonatomic) unsigned long long commandTargetWordCount;
@property (nonatomic) char hasCommandTargetWordCount;
@property (nonatomic) unsigned long long commandPayloadWordCount;
@property (nonatomic) char hasCommandPayloadWordCount;
@property (nonatomic) unsigned long long commandTargetCharacterCount;
@property (nonatomic) char hasCommandTargetCharacterCount;
@property (nonatomic) unsigned long long commandPayloadCharacterCount;
@property (nonatomic) char hasCommandPayloadCharacterCount;
@property (nonatomic) unsigned long long commandExecutionStartTimeInNs;
@property (nonatomic) char hasCommandExecutionStartTimeInNs;
@property (nonatomic) unsigned long long commandExecutionEndTimeInNs;
@property (nonatomic) char hasCommandExecutionEndTimeInNs;
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
- (void)deleteCommandExecutionEndTimeInNs;
- (void)deleteCommandExecutionStartTimeInNs;
- (void)deleteCommandPayloadCharacterCount;
- (void)deleteCommandPayloadWordCount;
- (void)deleteCommandStatus;
- (void)deleteCommandTargetCharacterCount;
- (void)deleteCommandTargetWordCount;
- (void)deleteCommandType;
- (void)deleteVoiceCommandId;
- (id)suppressMessageUnderConditions;

@end
