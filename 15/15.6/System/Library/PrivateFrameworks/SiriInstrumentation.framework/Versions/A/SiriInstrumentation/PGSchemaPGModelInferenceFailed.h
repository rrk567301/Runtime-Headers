@class IFTSchemaIFTIntelligenceFlowError, NSString, NSData;

@interface PGSchemaPGModelInferenceFailed : SISchemaInstrumentationMessage

@property (retain, nonatomic) IFTSchemaIFTIntelligenceFlowError *criticalError;
@property (nonatomic) char hasCriticalError;
@property (copy, nonatomic) NSString *modelIdentifier;
@property (nonatomic) char hasModelIdentifier;
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
- (void)deleteCriticalError;
- (void)deleteModelIdentifier;
- (id)suppressMessageUnderConditions;

@end
