@class NSString, NSArray, NSData, ODDSiriSchemaODDAssistantDimensions;

@interface ODDSiriSchemaODDAssistantVoicesDimensions : SISchemaInstrumentationMessage {
    struct { unsigned char voiceType : 1; unsigned char synthesisSource : 1; unsigned char clientId : 1; unsigned char ttsStatus : 1; } _has;
}

@property (retain, nonatomic) ODDSiriSchemaODDAssistantDimensions *assistantDimensions;
@property (nonatomic) BOOL hasAssistantDimensions;
@property (copy, nonatomic) NSString *voiceName;
@property (nonatomic) BOOL hasVoiceName;
@property (nonatomic) int voiceType;
@property (nonatomic) BOOL hasVoiceType;
@property (nonatomic) int synthesisSource;
@property (nonatomic) BOOL hasSynthesisSource;
@property (nonatomic) int clientId;
@property (nonatomic) BOOL hasClientId;
@property (nonatomic) int ttsStatus;
@property (nonatomic) BOOL hasTtsStatus;
@property (copy, nonatomic) NSArray *errorCodes;
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
- (void)deleteVoiceName;
- (void)deleteVoiceType;
- (unsigned long long)errorCodesCount;
- (void)clearErrorCodes;
- (void)deleteTtsStatus;
- (void)addErrorCodes:(int)a0;
- (void)deleteAssistantDimensions;
- (void)deleteClientId;
- (void)deleteErrorCodes;
- (void)deleteSynthesisSource;
- (int)errorCodesAtIndex:(unsigned long long)a0;

@end
