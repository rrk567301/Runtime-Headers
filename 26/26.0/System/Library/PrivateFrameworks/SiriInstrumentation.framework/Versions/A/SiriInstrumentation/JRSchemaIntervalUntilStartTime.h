@class NSArray, NSData;

@interface JRSchemaIntervalUntilStartTime : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *candidateBooleanMasks;
@property (copy, nonatomic) NSArray *candidateTimeIntervalMatrixs;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)addCandidateTimeIntervalMatrix:(id)a0;
- (void)addCandidateBooleanMask:(id)a0;
- (id)candidateBooleanMaskAtIndex:(unsigned long long)a0;
- (unsigned long long)candidateBooleanMaskCount;
- (id)candidateTimeIntervalMatrixAtIndex:(unsigned long long)a0;
- (unsigned long long)candidateTimeIntervalMatrixCount;
- (void)clearCandidateBooleanMask;
- (void)clearCandidateTimeIntervalMatrix;
- (void)deleteCandidateBooleanMask;
- (void)deleteCandidateTimeIntervalMatrix;

@end
