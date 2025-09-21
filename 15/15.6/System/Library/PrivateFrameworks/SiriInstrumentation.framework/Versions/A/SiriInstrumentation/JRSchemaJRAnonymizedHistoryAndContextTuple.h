@class NSArray, NSData;

@interface JRSchemaJRAnonymizedHistoryAndContextTuple : SISchemaInstrumentationMessage {
    struct { unsigned char contextSimilarityScore : 1; unsigned char uflScore : 1; } _has;
}

@property (copy, nonatomic) NSArray *candidateIds;
@property (nonatomic) float contextSimilarityScore;
@property (nonatomic) char hasContextSimilarityScore;
@property (nonatomic) float uflScore;
@property (nonatomic) char hasUflScore;
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
- (void)addCandidateIds:(id)a0;
- (id)candidateIdsAtIndex:(unsigned long long)a0;
- (unsigned long long)candidateIdsCount;
- (void)clearCandidateIds;
- (void)deleteCandidateIds;
- (void)deleteContextSimilarityScore;
- (void)deleteUflScore;
- (id)suppressMessageUnderConditions;

@end
