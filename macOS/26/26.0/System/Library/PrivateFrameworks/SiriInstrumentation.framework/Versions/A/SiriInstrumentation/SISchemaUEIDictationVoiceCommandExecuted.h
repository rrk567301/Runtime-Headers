@class NSData, SISchemaUUID;

@interface SISchemaUEIDictationVoiceCommandExecuted : SISchemaInstrumentationMessage {
    struct { unsigned char commandStatus : 1; unsigned char commandType : 1; unsigned char commandTargetWordCount : 1; unsigned char commandPayloadWordCount : 1; unsigned char commandTargetCharacterCount : 1; unsigned char commandPayloadCharacterCount : 1; unsigned char commandExecutionStartTimeInNs : 1; unsigned char commandExecutionEndTimeInNs : 1; unsigned char hasSpelling : 1; unsigned char hasTextSelection : 1; unsigned char isWfstParseable : 1; unsigned char hasAdjacentEdit : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *voiceCommandId;
@property (nonatomic) BOOL hasVoiceCommandId;
@property (nonatomic) int commandStatus;
@property (nonatomic) BOOL hasCommandStatus;
@property (nonatomic) int commandType;
@property (nonatomic) BOOL hasCommandType;
@property (nonatomic) unsigned long long commandTargetWordCount;
@property (nonatomic) BOOL hasCommandTargetWordCount;
@property (nonatomic) unsigned long long commandPayloadWordCount;
@property (nonatomic) BOOL hasCommandPayloadWordCount;
@property (nonatomic) unsigned long long commandTargetCharacterCount;
@property (nonatomic) BOOL hasCommandTargetCharacterCount;
@property (nonatomic) unsigned long long commandPayloadCharacterCount;
@property (nonatomic) BOOL hasCommandPayloadCharacterCount;
@property (nonatomic) unsigned long long commandExecutionStartTimeInNs;
@property (nonatomic) BOOL hasCommandExecutionStartTimeInNs;
@property (nonatomic) unsigned long long commandExecutionEndTimeInNs;
@property (nonatomic) BOOL hasCommandExecutionEndTimeInNs;
@property (nonatomic) BOOL hasSpelling;
@property (nonatomic) BOOL hasHasSpelling;
@property (nonatomic) BOOL hasTextSelection;
@property (nonatomic) BOOL hasHasTextSelection;
@property (nonatomic) BOOL isWfstParseable;
@property (nonatomic) BOOL hasIsWfstParseable;
@property (nonatomic) BOOL hasAdjacentEdit;
@property (nonatomic) BOOL hasHasAdjacentEdit;
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
- (void)deleteCommandExecutionEndTimeInNs;
- (void)deleteCommandExecutionStartTimeInNs;
- (void)deleteCommandPayloadCharacterCount;
- (void)deleteCommandPayloadWordCount;
- (void)deleteCommandStatus;
- (void)deleteCommandTargetCharacterCount;
- (void)deleteCommandTargetWordCount;
- (void)deleteCommandType;
- (void)deleteHasAdjacentEdit;
- (void)deleteHasSpelling;
- (void)deleteHasTextSelection;
- (void)deleteIsWfstParseable;
- (void)deleteVoiceCommandId;

@end
