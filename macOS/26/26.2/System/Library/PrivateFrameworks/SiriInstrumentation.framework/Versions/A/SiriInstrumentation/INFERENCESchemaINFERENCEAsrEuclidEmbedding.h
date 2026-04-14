@class NSData, INFERENCESchemaINFERENCEEuclidServiceMetrics, INFERENCESchemaINFERENCEEuclidDebugMetrics;

@interface INFERENCESchemaINFERENCEAsrEuclidEmbedding : SISchemaInstrumentationMessage

@property (retain, nonatomic) INFERENCESchemaINFERENCEEuclidServiceMetrics *euclidServiceMetrics;
@property (nonatomic) BOOL hasEuclidServiceMetrics;
@property (retain, nonatomic) INFERENCESchemaINFERENCEEuclidDebugMetrics *euclidDebugMetrics;
@property (nonatomic) BOOL hasEuclidDebugMetrics;
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
- (void)deleteEuclidDebugMetrics;
- (void)deleteEuclidServiceMetrics;

@end
