@class NSString, NSArray, NSData;

@interface DODMLASRSchemaDODMLASREntityScoringResult : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *referenceName;
@property (nonatomic) BOOL hasReferenceName;
@property (copy, nonatomic) NSArray *entityScores;
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
- (void)addEntityScores:(id)a0;
- (void)clearEntityScores;
- (void)deleteEntityScores;
- (void)deleteReferenceName;
- (id)entityScoresAtIndex:(unsigned long long)a0;
- (unsigned long long)entityScoresCount;

@end
