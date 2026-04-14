@class NSArray, NSData;

@interface JRSchemaRankingCandidateMatrix : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *candidateTuples;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)addCandidateTuples:(id)a0;
- (id)candidateTuplesAtIndex:(unsigned long long)a0;
- (unsigned long long)candidateTuplesCount;
- (void)clearCandidateTuples;
- (void)deleteCandidateTuples;

@end
