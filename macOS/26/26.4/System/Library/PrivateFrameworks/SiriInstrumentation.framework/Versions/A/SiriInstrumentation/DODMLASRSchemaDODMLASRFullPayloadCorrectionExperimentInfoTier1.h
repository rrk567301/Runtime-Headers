@class NSData, ASRSchemaASRFullPayloadCorrectionInfoTier1;

@interface DODMLASRSchemaDODMLASRFullPayloadCorrectionExperimentInfoTier1 : SISchemaInstrumentationMessage

@property (retain, nonatomic) ASRSchemaASRFullPayloadCorrectionInfoTier1 *infoTier1;
@property (nonatomic) BOOL hasInfoTier1;
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
- (void)deleteInfoTier1;

@end
