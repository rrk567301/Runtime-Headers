@class NSString, NSArray, NSData;

@interface SISchemaEuclidConfusionPair : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *recognizedToken;
@property (nonatomic) BOOL hasRecognizedToken;
@property (copy, nonatomic) NSArray *suggestedTokens;
@property (copy, nonatomic) NSString *correctedToken;
@property (nonatomic) BOOL hasCorrectedToken;
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
- (void)addSuggestedTokens:(id)a0;
- (void)clearSuggestedTokens;
- (void)deleteCorrectedToken;
- (void)deleteRecognizedToken;
- (void)deleteSuggestedTokens;
- (id)suggestedTokensAtIndex:(unsigned long long)a0;
- (unsigned long long)suggestedTokensCount;

@end
