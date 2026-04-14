@class NSString, NSArray, NSData;

@interface DODMLASRSchemaDODMLASREntityScoringResult : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *referenceName;
@property (nonatomic) BOOL hasReferenceName;
@property (copy, nonatomic) NSArray *entityScores;
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
- (void)addEntityScores:(id)a0;
- (void)clearEntityScores;
- (void)deleteEntityScores;
- (void)deleteReferenceName;
- (id)entityScoresAtIndex:(unsigned long long)a0;
- (unsigned long long)entityScoresCount;

@end
