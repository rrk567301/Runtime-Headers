@class NSData, PFAProcessedClockStatistics;

@interface PFAPreprocessorSessionEndStatsReported : SISchemaInstrumentationMessage

@property (retain, nonatomic) PFAProcessedClockStatistics *offDeviceClockStatistics;
@property (nonatomic) BOOL hasOffDeviceClockStatistics;
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
- (void)deleteOffDeviceClockStatistics;

@end
