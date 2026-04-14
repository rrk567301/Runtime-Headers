@class NSArray, NSData;

@interface USPSchemaUSPLoggingReported : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *metrics;
@property (copy, nonatomic) NSArray *sessionInfoItems;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)metricsCount;
- (void)writeTo:(id)a0;
- (void)clearMetrics;
- (id)initWithJSON:(id)a0;
- (void)addMetrics:(id)a0;
- (id)metricsAtIndex:(unsigned long long)a0;
- (void)addSessionInfoItems:(id)a0;
- (void)clearSessionInfoItems;
- (void)deleteMetrics;
- (void)deleteSessionInfoItems;
- (id)sessionInfoItemsAtIndex:(unsigned long long)a0;
- (unsigned long long)sessionInfoItemsCount;

@end
