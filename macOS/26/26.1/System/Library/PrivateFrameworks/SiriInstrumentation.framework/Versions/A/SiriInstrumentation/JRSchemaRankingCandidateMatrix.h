@class NSArray, NSData;

@interface JRSchemaRankingCandidateMatrix : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *candidateTuples;
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
- (void)addCandidateTuples:(id)a0;
- (id)candidateTuplesAtIndex:(unsigned long long)a0;
- (unsigned long long)candidateTuplesCount;
- (void)clearCandidateTuples;
- (void)deleteCandidateTuples;

@end
