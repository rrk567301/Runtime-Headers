@class DODMLASRSchemaDODMLASRDecodingMetrics, NSString, NSArray, NSData;

@interface DODMLASRSchemaDODMLASRDecodingResult : SISchemaInstrumentationMessage {
    struct { unsigned char decodeDurationInNs : 1; } _has;
}

@property (copy, nonatomic) NSString *configName;
@property (nonatomic) BOOL hasConfigName;
@property (copy, nonatomic) NSArray *tokens;
@property (copy, nonatomic) NSArray *utterances;
@property (retain, nonatomic) DODMLASRSchemaDODMLASRDecodingMetrics *decodingMetrics;
@property (nonatomic) BOOL hasDecodingMetrics;
@property (nonatomic) unsigned long long decodeDurationInNs;
@property (nonatomic) BOOL hasDecodeDurationInNs;
@property (copy, nonatomic) NSArray *alignments;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)tokensAtIndex:(unsigned long long)a0;
- (unsigned long long)alignmentsCount;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (unsigned long long)utterancesCount;
- (void)clearAlignments;
- (void)clearUtterances;
- (void)addAlignments:(id)a0;
- (void)addTokens:(id)a0;
- (void)addUtterances:(id)a0;
- (id)alignmentsAtIndex:(unsigned long long)a0;
- (void)clearTokens;
- (void)deleteAlignments;
- (void)deleteConfigName;
- (void)deleteDecodeDurationInNs;
- (void)deleteDecodingMetrics;
- (void)deleteTokens;
- (void)deleteUtterances;
- (id)suppressMessageUnderConditions;
- (unsigned long long)tokensCount;
- (id)utterancesAtIndex:(unsigned long long)a0;

@end
