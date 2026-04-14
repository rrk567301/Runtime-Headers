@class NSArray, NSData;

@interface JRSchemaJRTokenConfidence : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *asrScores;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteAsrScores;
- (void)addAsrScores:(float)a0;
- (float)asrScoresAtIndex:(unsigned long long)a0;
- (unsigned long long)asrScoresCount;
- (void)clearAsrScores;

@end
