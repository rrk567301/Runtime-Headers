@class NSData, CHSchemaCHEvaluatorMetadata, CHSchemaCHUserAlignmentInferenceMetadata;

@interface CHSchemaCHUserAlignmentInferenceGenerated : SISchemaInstrumentationMessage

@property (retain, nonatomic) CHSchemaCHEvaluatorMetadata *evaluatorMetadata;
@property (nonatomic) BOOL hasEvaluatorMetadata;
@property (retain, nonatomic) CHSchemaCHUserAlignmentInferenceMetadata *userAlignmentInferenceMetadata;
@property (nonatomic) BOOL hasUserAlignmentInferenceMetadata;
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
- (void)deleteEvaluatorMetadata;
- (void)deleteUserAlignmentInferenceMetadata;

@end
