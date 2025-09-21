@class NSString, NSData, SISchemaUUID;

@interface ASRSchemaASRDictationVoiceCommandInfoTier1 : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *previousUtterance;
@property (nonatomic) char hasPreviousUtterance;
@property (copy, nonatomic) NSString *commandUtterance;
@property (nonatomic) char hasCommandUtterance;
@property (copy, nonatomic) NSString *target;
@property (nonatomic) char hasTarget;
@property (copy, nonatomic) NSString *payload;
@property (nonatomic) char hasPayload;
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
- (void)deleteCommandUtterance;
- (void)deleteDictationVoiceCommandLinkId;
- (void)deletePayload;
- (void)deletePreviousUtterance;
- (void)deleteTarget;
- (id)suppressMessageUnderConditions;

@end
