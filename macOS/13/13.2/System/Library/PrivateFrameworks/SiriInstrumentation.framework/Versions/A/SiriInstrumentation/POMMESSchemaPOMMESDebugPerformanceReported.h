@class NSArray, NSData;

@interface POMMESSchemaPOMMESDebugPerformanceReported : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *performanceMeasurements;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)clearPerformanceMeasurements;
- (void)deletePerformanceMeasurements;
- (void)addPerformanceMeasurements:(id)a0;
- (unsigned long long)performanceMeasurementsCount;
- (id)performanceMeasurementsAtIndex:(unsigned long long)a0;

@end
