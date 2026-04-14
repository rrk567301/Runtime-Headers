@class NSData, INFERENCESchemaINFERENCEEuclidServiceMetrics, INFERENCESchemaINFERENCEEuclidDebugMetrics;

@interface INFERENCESchemaINFERENCEAsrEuclidEmbedding : SISchemaInstrumentationMessage

@property (retain, nonatomic) INFERENCESchemaINFERENCEEuclidServiceMetrics *euclidServiceMetrics;
@property (nonatomic) BOOL hasEuclidServiceMetrics;
@property (retain, nonatomic) INFERENCESchemaINFERENCEEuclidDebugMetrics *euclidDebugMetrics;
@property (nonatomic) BOOL hasEuclidDebugMetrics;
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
- (void)deleteEuclidDebugMetrics;
- (void)deleteEuclidServiceMetrics;

@end
