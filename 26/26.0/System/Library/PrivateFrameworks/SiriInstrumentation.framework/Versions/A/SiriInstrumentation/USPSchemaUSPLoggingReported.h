@class NSArray, NSData;

@interface USPSchemaUSPLoggingReported : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *metrics;
@property (copy, nonatomic) NSArray *sessionInfoItems;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (void)clearMetrics;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)metricsCount;
- (void)addMetrics:(id)a0;
- (id)metricsAtIndex:(unsigned long long)a0;
- (void)addSessionInfoItems:(id)a0;
- (void)clearSessionInfoItems;
- (void)deleteMetrics;
- (void)deleteSessionInfoItems;
- (id)sessionInfoItemsAtIndex:(unsigned long long)a0;
- (unsigned long long)sessionInfoItemsCount;

@end
