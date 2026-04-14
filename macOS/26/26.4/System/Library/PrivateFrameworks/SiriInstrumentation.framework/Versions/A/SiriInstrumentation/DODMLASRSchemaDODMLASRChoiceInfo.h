@class NSArray, NSData;

@interface DODMLASRSchemaDODMLASRChoiceInfo : SISchemaInstrumentationMessage {
    struct { unsigned char graphCost : 1; unsigned char acousticCost : 1; } _has;
}

@property (copy, nonatomic) NSArray *tokens;
@property (nonatomic) float graphCost;
@property (nonatomic) BOOL hasGraphCost;
@property (nonatomic) float acousticCost;
@property (nonatomic) BOOL hasAcousticCost;
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
- (void)deleteGraphCost;
- (void)addTokens:(id)a0;
- (void)clearTokens;
- (void)deleteAcousticCost;
- (void)deleteTokens;
- (id)tokensAtIndex:(unsigned long long)a0;
- (unsigned long long)tokensCount;

@end
