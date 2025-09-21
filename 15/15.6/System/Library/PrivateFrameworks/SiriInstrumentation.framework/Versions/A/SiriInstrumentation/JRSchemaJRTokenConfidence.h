@class NSArray, NSData;

@interface JRSchemaJRTokenConfidence : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *asrScores;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteAsrScores;
- (void)addAsrScores:(float)a0;
- (float)asrScoresAtIndex:(unsigned long long)a0;
- (unsigned long long)asrScoresCount;
- (void)clearAsrScores;
- (id)suppressMessageUnderConditions;

@end
