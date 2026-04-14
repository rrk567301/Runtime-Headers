@class NSArray, NSData;

@interface JRSchemaJRCandidateTimeIntervalMatrix : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *logOfIntervalUntilStartTimeInSeconds;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)addLogOfIntervalUntilStartTimeInSeconds:(float)a0;
- (void)clearLogOfIntervalUntilStartTimeInSeconds;
- (void)deleteLogOfIntervalUntilStartTimeInSeconds;
- (float)logOfIntervalUntilStartTimeInSecondsAtIndex:(unsigned long long)a0;
- (unsigned long long)logOfIntervalUntilStartTimeInSecondsCount;

@end
