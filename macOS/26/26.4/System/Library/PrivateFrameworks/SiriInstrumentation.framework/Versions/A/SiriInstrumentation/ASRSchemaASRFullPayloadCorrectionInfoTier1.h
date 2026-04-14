@class NSString, NSData, SISchemaUUID;

@interface ASRSchemaASRFullPayloadCorrectionInfoTier1 : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *linkId;
@property (nonatomic) BOOL hasLinkId;
@property (copy, nonatomic) NSString *fullPayloadCorrectorOutput;
@property (nonatomic) BOOL hasFullPayloadCorrectorOutput;
@property (copy, nonatomic) NSString *fullPayloadCorrectorInput;
@property (nonatomic) BOOL hasFullPayloadCorrectorInput;
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
- (void)deleteFullPayloadCorrectorInput;
- (void)deleteFullPayloadCorrectorOutput;
- (void)deleteLinkId;

@end
