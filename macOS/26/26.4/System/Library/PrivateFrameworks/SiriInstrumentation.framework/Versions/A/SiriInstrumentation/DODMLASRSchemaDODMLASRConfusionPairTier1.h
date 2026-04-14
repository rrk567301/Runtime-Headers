@class NSArray, NSString, NSData;

@interface DODMLASRSchemaDODMLASRConfusionPairTier1 : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *recognizedTokens;
@property (copy, nonatomic) NSArray *correctedTokens;
@property (copy, nonatomic) NSString *leftContextToken;
@property (nonatomic) BOOL hasLeftContextToken;
@property (copy, nonatomic) NSString *rightContextToken;
@property (nonatomic) BOOL hasRightContextToken;
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

@end
