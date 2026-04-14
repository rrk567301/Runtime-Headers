@class NSArray, NSData;

@interface POMMESSchemaPOMMESDebugPerformanceReported : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *performanceMeasurements;
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
- (id)performanceMeasurementsAtIndex:(unsigned long long)a0;
- (void)addPerformanceMeasurements:(id)a0;
- (void)clearPerformanceMeasurements;
- (void)deletePerformanceMeasurements;
- (unsigned long long)performanceMeasurementsCount;

@end
