@class NSArray, NSData;

@interface JRSchemaJRTokenConfidence : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *asrScores;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)deleteAsrScores;
- (void)addAsrScores:(float)a0;
- (float)asrScoresAtIndex:(unsigned long long)a0;
- (unsigned long long)asrScoresCount;
- (void)clearAsrScores;

@end
