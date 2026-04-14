@class NSArray, NSData;

@interface USPSchemaUSPLoggingReported : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *metrics;
@property (copy, nonatomic) NSArray *sessionInfoItems;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (void)clearMetrics;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (unsigned long long)metricsCount;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)addMetrics:(id)a0;
- (id)metricsAtIndex:(unsigned long long)a0;
- (void)addSessionInfoItems:(id)a0;
- (void)clearSessionInfoItems;
- (void)deleteMetrics;
- (void)deleteSessionInfoItems;
- (id)sessionInfoItemsAtIndex:(unsigned long long)a0;
- (unsigned long long)sessionInfoItemsCount;

@end
