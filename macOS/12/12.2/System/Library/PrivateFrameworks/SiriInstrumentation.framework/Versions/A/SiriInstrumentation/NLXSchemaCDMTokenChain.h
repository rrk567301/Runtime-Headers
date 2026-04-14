@class NSArray, NSData, SISchemaUUID;

@interface NLXSchemaCDMTokenChain : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *tokens;
@property (retain, nonatomic) SISchemaUUID *asrHypothesisId;
@property (nonatomic) BOOL hasAsrHypothesisId;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)tokensAtIndex:(unsigned long long)a0;
- (void)addTokens:(id)a0;
- (void)clearTokens;
- (unsigned long long)tokensCount;

@end
