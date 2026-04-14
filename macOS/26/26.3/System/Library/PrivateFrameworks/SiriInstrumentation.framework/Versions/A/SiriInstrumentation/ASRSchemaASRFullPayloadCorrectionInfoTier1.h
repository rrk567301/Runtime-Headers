@class NSString, NSData, SISchemaUUID;

@interface ASRSchemaASRFullPayloadCorrectionInfoTier1 : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *linkId;
@property (nonatomic) BOOL hasLinkId;
@property (copy, nonatomic) NSString *fullPayloadCorrectorOutput;
@property (nonatomic) BOOL hasFullPayloadCorrectorOutput;
@property (copy, nonatomic) NSString *fullPayloadCorrectorInput;
@property (nonatomic) BOOL hasFullPayloadCorrectorInput;
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
- (void)deleteFullPayloadCorrectorInput;
- (void)deleteFullPayloadCorrectorOutput;
- (void)deleteLinkId;

@end
