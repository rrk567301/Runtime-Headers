@class NSData, SISchemaUUID;

@interface JRSchemaJREntitySimilarityRow : SISchemaInstrumentationMessage {
    struct { unsigned char similarityScore : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *candidateA;
@property (nonatomic) char hasCandidateA;
@property (retain, nonatomic) SISchemaUUID *candidateB;
@property (nonatomic) char hasCandidateB;
@property (nonatomic) float similarityScore;
@property (nonatomic) char hasSimilarityScore;
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
- (void)deleteCandidateA;
- (void)deleteCandidateB;
- (void)deleteSimilarityScore;
- (id)suppressMessageUnderConditions;

@end
