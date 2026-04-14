@class NSArray, NSData;

@interface NLXSchemaCDMServiceHandleMetricsReported : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *handleMetrics;
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
- (void)addHandleMetrics:(id)a0;
- (void)clearHandleMetrics;
- (void)deleteHandleMetrics;
- (id)handleMetricsAtIndex:(unsigned long long)a0;
- (unsigned long long)handleMetricsCount;

@end
