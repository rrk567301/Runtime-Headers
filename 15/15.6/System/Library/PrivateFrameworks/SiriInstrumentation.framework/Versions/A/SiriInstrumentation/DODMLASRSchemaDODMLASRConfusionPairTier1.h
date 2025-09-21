@class NSArray, NSString, NSData;

@interface DODMLASRSchemaDODMLASRConfusionPairTier1 : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *recognizedTokens;
@property (copy, nonatomic) NSArray *correctedTokens;
@property (copy, nonatomic) NSString *leftContextToken;
@property (nonatomic) char hasLeftContextToken;
@property (copy, nonatomic) NSString *rightContextToken;
@property (nonatomic) char hasRightContextToken;
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
- (void)addCorrectedTokens:(id)a0;
- (void)addRecognizedTokens:(id)a0;
- (void)clearCorrectedTokens;
- (void)clearRecognizedTokens;
- (id)correctedTokensAtIndex:(unsigned long long)a0;
- (unsigned long long)correctedTokensCount;
- (void)deleteCorrectedTokens;
- (void)deleteLeftContextToken;
- (void)deleteRecognizedTokens;
- (void)deleteRightContextToken;
- (id)recognizedTokensAtIndex:(unsigned long long)a0;
- (unsigned long long)recognizedTokensCount;
- (id)suppressMessageUnderConditions;

@end
