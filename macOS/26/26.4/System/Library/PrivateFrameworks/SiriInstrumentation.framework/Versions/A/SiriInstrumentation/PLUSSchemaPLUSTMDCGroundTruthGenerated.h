@class PLUSSchemaPLUSTMDCGroundTruth, NSData, SISchemaUUID;

@interface PLUSSchemaPLUSTMDCGroundTruthGenerated : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *originalPlusId;
@property (nonatomic) BOOL hasOriginalPlusId;
@property (retain, nonatomic) PLUSSchemaPLUSTMDCGroundTruth *groundTruth;
@property (nonatomic) BOOL hasGroundTruth;
@property (retain, nonatomic) SISchemaUUID *originalRequestId;
@property (nonatomic) BOOL hasOriginalRequestId;
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
- (void)deleteGroundTruth;
- (void)deleteOriginalPlusId;
- (void)deleteOriginalRequestId;

@end
