@class NSArray, NSData;

@interface USPSchemaUSPLoggingReported : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *metrics;
@property (copy, nonatomic) NSArray *sessionInfoItems;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addMetrics:(id)a0;
- (id)initWithJSON:(id)a0;
- (unsigned long long)metricsCount;
- (void)clearMetrics;
- (void)deleteMetrics;
- (void)clearSessionInfoItems;
- (void)addSessionInfoItems:(id)a0;
- (void)deleteSessionInfoItems;
- (unsigned long long)sessionInfoItemsCount;
- (id)sessionInfoItemsAtIndex:(unsigned long long)a0;
- (id)metricsAtIndex:(unsigned long long)a0;
- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;

@end
