@class NSData, PFAProcessedClockStatistics;

@interface PFAPreprocessorSessionEndStatsReported : SISchemaInstrumentationMessage

@property (retain, nonatomic) PFAProcessedClockStatistics *offDeviceClockStatistics;
@property (nonatomic) char hasOffDeviceClockStatistics;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteOffDeviceClockStatistics;
- (id)suppressMessageUnderConditions;

@end
