@class NSData, ASRSchemaASRFullPayloadCorrectionInfoTier1;

@interface DODMLASRSchemaDODMLASRFullPayloadCorrectionExperimentInfoTier1 : SISchemaInstrumentationMessage

@property (retain, nonatomic) ASRSchemaASRFullPayloadCorrectionInfoTier1 *infoTier1;
@property (nonatomic) BOOL hasInfoTier1;
@property (readonly, nonatomic) NSData *jsonData;

- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)deleteInfoTier1;

@end
