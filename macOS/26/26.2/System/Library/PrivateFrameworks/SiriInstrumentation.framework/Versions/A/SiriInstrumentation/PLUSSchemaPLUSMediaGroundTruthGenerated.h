@class NSData, PLUSSchemaPLUSMediaGroundTruth, SISchemaUUID;

@interface PLUSSchemaPLUSMediaGroundTruthGenerated : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *originalRequestId;
@property (nonatomic) BOOL hasOriginalRequestId;
@property (retain, nonatomic) PLUSSchemaPLUSMediaGroundTruth *groundTruth;
@property (nonatomic) BOOL hasGroundTruth;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)deleteGroundTruth;
- (void)deleteOriginalRequestId;

@end
