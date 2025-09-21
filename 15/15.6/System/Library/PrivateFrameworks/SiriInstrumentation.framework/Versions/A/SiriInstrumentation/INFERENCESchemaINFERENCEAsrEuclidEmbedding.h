@class NSData, INFERENCESchemaINFERENCEEuclidServiceMetrics, INFERENCESchemaINFERENCEEuclidDebugMetrics;

@interface INFERENCESchemaINFERENCEAsrEuclidEmbedding : SISchemaInstrumentationMessage

@property (retain, nonatomic) INFERENCESchemaINFERENCEEuclidServiceMetrics *euclidServiceMetrics;
@property (nonatomic) char hasEuclidServiceMetrics;
@property (retain, nonatomic) INFERENCESchemaINFERENCEEuclidDebugMetrics *euclidDebugMetrics;
@property (nonatomic) char hasEuclidDebugMetrics;
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
- (void)deleteEuclidDebugMetrics;
- (void)deleteEuclidServiceMetrics;
- (id)suppressMessageUnderConditions;

@end
