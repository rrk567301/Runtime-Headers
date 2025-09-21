@class NSArray, NSData;

@interface DODMLASRSchemaDODMLASRLanguageModelMetrics : SISchemaInstrumentationMessage {
    struct { unsigned char linearInterpolationWeight : 1; unsigned char totalDurationInMs : 1; unsigned char numUtterances : 1; unsigned char numWords : 1; unsigned char numOutOfVocabularyWords : 1; unsigned char numInvalidTokens : 1; unsigned char numInvalidUtterances : 1; unsigned char perplexity : 1; unsigned char perplexityOne : 1; } _has;
}

@property (nonatomic) float linearInterpolationWeight;
@property (nonatomic) char hasLinearInterpolationWeight;
@property (nonatomic) unsigned long long totalDurationInMs;
@property (nonatomic) char hasTotalDurationInMs;
@property (nonatomic) unsigned int numUtterances;
@property (nonatomic) char hasNumUtterances;
@property (nonatomic) unsigned int numWords;
@property (nonatomic) char hasNumWords;
@property (nonatomic) unsigned int numOutOfVocabularyWords;
@property (nonatomic) char hasNumOutOfVocabularyWords;
@property (nonatomic) unsigned int numInvalidTokens;
@property (nonatomic) char hasNumInvalidTokens;
@property (nonatomic) unsigned int numInvalidUtterances;
@property (nonatomic) char hasNumInvalidUtterances;
@property (nonatomic) float perplexity;
@property (nonatomic) char hasPerplexity;
@property (nonatomic) float perplexityOne;
@property (nonatomic) char hasPerplexityOne;
@property (copy, nonatomic) NSArray *ngramHits;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteLinearInterpolationWeight;
- (void)deleteNgramHits;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)addNgramHits:(id)a0;
- (void)clearNgramHits;
- (void)deleteNumInvalidTokens;
- (void)deleteNumInvalidUtterances;
- (void)deleteNumOutOfVocabularyWords;
- (void)deleteNumUtterances;
- (void)deleteNumWords;
- (void)deletePerplexity;
- (void)deletePerplexityOne;
- (void)deleteTotalDurationInMs;
- (id)ngramHitsAtIndex:(unsigned long long)a0;
- (unsigned long long)ngramHitsCount;
- (id)suppressMessageUnderConditions;

@end
