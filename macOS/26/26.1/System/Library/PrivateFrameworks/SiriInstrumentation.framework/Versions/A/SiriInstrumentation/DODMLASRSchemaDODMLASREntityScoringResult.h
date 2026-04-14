@class NSString, NSArray, NSData;

@interface DODMLASRSchemaDODMLASREntityScoringResult : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *referenceName;
@property (nonatomic) BOOL hasReferenceName;
@property (copy, nonatomic) NSArray *entityScores;
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
- (void)addEntityScores:(id)a0;
- (void)clearEntityScores;
- (void)deleteEntityScores;
- (void)deleteReferenceName;
- (id)entityScoresAtIndex:(unsigned long long)a0;
- (unsigned long long)entityScoresCount;

@end
