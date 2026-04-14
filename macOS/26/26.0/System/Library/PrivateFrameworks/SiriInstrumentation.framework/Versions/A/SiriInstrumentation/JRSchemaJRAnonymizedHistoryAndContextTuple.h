@class NSArray, NSData;

@interface JRSchemaJRAnonymizedHistoryAndContextTuple : SISchemaInstrumentationMessage {
    struct { unsigned char contextSimilarityScore : 1; unsigned char uflScore : 1; } _has;
}

@property (copy, nonatomic) NSArray *candidateIds;
@property (nonatomic) float contextSimilarityScore;
@property (nonatomic) BOOL hasContextSimilarityScore;
@property (nonatomic) float uflScore;
@property (nonatomic) BOOL hasUflScore;
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
- (void)addCandidateIds:(id)a0;
- (id)candidateIdsAtIndex:(unsigned long long)a0;
- (unsigned long long)candidateIdsCount;
- (void)clearCandidateIds;
- (void)deleteCandidateIds;
- (void)deleteContextSimilarityScore;
- (void)deleteUflScore;

@end
