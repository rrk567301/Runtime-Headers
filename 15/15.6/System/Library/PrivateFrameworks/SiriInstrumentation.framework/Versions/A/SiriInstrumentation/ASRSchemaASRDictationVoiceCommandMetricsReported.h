@class NSData, SISchemaUUID;

@interface ASRSchemaASRDictationVoiceCommandMetricsReported : SISchemaInstrumentationMessage {
    struct { unsigned char commandEndTimeInNs : 1; unsigned char commandParserStartTimeInNs : 1; unsigned char commandParserEndTimeInNs : 1; unsigned char utteranceStartTimeInNs : 1; unsigned char utteranceEndTimeInNs : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *voiceCommandId;
@property (nonatomic) char hasVoiceCommandId;
@property (nonatomic) unsigned long long commandEndTimeInNs;
@property (nonatomic) char hasCommandEndTimeInNs;
@property (nonatomic) unsigned long long commandParserStartTimeInNs;
@property (nonatomic) char hasCommandParserStartTimeInNs;
@property (nonatomic) unsigned long long commandParserEndTimeInNs;
@property (nonatomic) char hasCommandParserEndTimeInNs;
@property (nonatomic) unsigned long long utteranceStartTimeInNs;
@property (nonatomic) char hasUtteranceStartTimeInNs;
@property (nonatomic) unsigned long long utteranceEndTimeInNs;
@property (nonatomic) char hasUtteranceEndTimeInNs;
@property (retain, nonatomic) SISchemaUUID *recognitionResultLinkId;
@property (nonatomic) char hasRecognitionResultLinkId;
@property (retain, nonatomic) SISchemaUUID *dictationVoiceCommandLinkId;
@property (nonatomic) char hasDictationVoiceCommandLinkId;
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
- (void)deleteCommandEndTimeInNs;
- (void)deleteCommandParserEndTimeInNs;
- (void)deleteCommandParserStartTimeInNs;
- (void)deleteDictationVoiceCommandLinkId;
- (void)deleteRecognitionResultLinkId;
- (void)deleteUtteranceEndTimeInNs;
- (void)deleteUtteranceStartTimeInNs;
- (void)deleteVoiceCommandId;
- (id)suppressMessageUnderConditions;

@end
