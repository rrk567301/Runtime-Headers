@class NSString, NSData, SISchemaUUID;

@interface ASRSchemaASRDictationVoiceCommandInfoTier1 : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *previousUtterance;
@property (nonatomic) BOOL hasPreviousUtterance;
@property (copy, nonatomic) NSString *commandUtterance;
@property (nonatomic) BOOL hasCommandUtterance;
@property (copy, nonatomic) NSString *target;
@property (nonatomic) BOOL hasTarget;
@property (copy, nonatomic) NSString *payload;
@property (nonatomic) BOOL hasPayload;
@property (retain, nonatomic) SISchemaUUID *dictationVoiceCommandLinkId;
@property (nonatomic) BOOL hasDictationVoiceCommandLinkId;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (void)deletePayload;
- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)deleteCommandUtterance;
- (void)deleteDictationVoiceCommandLinkId;
- (void)deletePreviousUtterance;
- (void)deleteTarget;

@end
