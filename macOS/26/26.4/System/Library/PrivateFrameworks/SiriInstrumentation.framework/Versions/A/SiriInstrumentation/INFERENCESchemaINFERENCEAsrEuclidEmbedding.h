@class NSData, INFERENCESchemaINFERENCEEuclidServiceMetrics, INFERENCESchemaINFERENCEEuclidDebugMetrics;

@interface INFERENCESchemaINFERENCEAsrEuclidEmbedding : SISchemaInstrumentationMessage

@property (retain, nonatomic) INFERENCESchemaINFERENCEEuclidServiceMetrics *euclidServiceMetrics;
@property (nonatomic) BOOL hasEuclidServiceMetrics;
@property (retain, nonatomic) INFERENCESchemaINFERENCEEuclidDebugMetrics *euclidDebugMetrics;
@property (nonatomic) BOOL hasEuclidDebugMetrics;
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
- (void)deleteEuclidDebugMetrics;
- (void)deleteEuclidServiceMetrics;

@end
