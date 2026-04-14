@class NSArray, NSData;

@interface DODMLASRSchemaDODMLASRConfusionPairTier1 : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *recognizedTokens;
@property (copy, nonatomic) NSArray *correctedTokens;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)clearRecognizedTokens;
- (void)clearCorrectedTokens;
- (void)addRecognizedTokens:(id)a0;
- (void)addCorrectedTokens:(id)a0;
- (void)deleteRecognizedTokens;
- (unsigned long long)recognizedTokensCount;
- (id)recognizedTokensAtIndex:(unsigned long long)a0;
- (void)deleteCorrectedTokens;
- (unsigned long long)correctedTokensCount;
- (id)correctedTokensAtIndex:(unsigned long long)a0;
- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;

@end
