@class NSArray, NSData;

@interface JRSchemaJRTokenConfidence : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *asrScores;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)deleteAsrScores;
- (void)addAsrScores:(float)a0;
- (float)asrScoresAtIndex:(unsigned long long)a0;
- (unsigned long long)asrScoresCount;
- (void)clearAsrScores;

@end
