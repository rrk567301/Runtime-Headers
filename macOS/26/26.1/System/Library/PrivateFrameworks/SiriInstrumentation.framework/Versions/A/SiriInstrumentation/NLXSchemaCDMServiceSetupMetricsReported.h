@class NSArray, NSData;

@interface NLXSchemaCDMServiceSetupMetricsReported : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *setupMetrics;
@property (readonly, nonatomic) NSData *jsonData;

- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addSetupMetrics:(id)a0;
- (void)clearSetupMetrics;
- (void)deleteSetupMetrics;
- (id)setupMetricsAtIndex:(unsigned long long)a0;
- (unsigned long long)setupMetricsCount;

@end
