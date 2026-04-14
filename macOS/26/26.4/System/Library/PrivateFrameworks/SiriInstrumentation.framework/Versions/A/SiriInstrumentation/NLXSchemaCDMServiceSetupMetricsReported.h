@class NSArray, NSData;

@interface NLXSchemaCDMServiceSetupMetricsReported : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *setupMetrics;
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
- (void)addSetupMetrics:(id)a0;
- (void)clearSetupMetrics;
- (void)deleteSetupMetrics;
- (id)setupMetricsAtIndex:(unsigned long long)a0;
- (unsigned long long)setupMetricsCount;

@end
