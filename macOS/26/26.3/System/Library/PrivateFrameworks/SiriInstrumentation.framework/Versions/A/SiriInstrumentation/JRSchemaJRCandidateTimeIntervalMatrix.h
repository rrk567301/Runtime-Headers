@class NSArray, NSData;

@interface JRSchemaJRCandidateTimeIntervalMatrix : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *logOfIntervalUntilStartTimeInSeconds;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)addLogOfIntervalUntilStartTimeInSeconds:(float)a0;
- (void)clearLogOfIntervalUntilStartTimeInSeconds;
- (void)deleteLogOfIntervalUntilStartTimeInSeconds;
- (float)logOfIntervalUntilStartTimeInSecondsAtIndex:(unsigned long long)a0;
- (unsigned long long)logOfIntervalUntilStartTimeInSecondsCount;

@end
