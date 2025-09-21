@class NSString, NSData;

@interface STSchemaTopicalityAttributes : SISchemaInstrumentationMessage {
    struct { unsigned char countAttributeQPQUMatch : 1; unsigned char countAttributeQPQUprefixMatch : 1; unsigned char countAttributeUnigramMatch : 1; unsigned char countAttributeBigramMatch : 1; unsigned char countAttributeNgramMatch : 1; unsigned char countAttributeUnigramPrefixMatch : 1; unsigned char countAttributeBigramPrefixMatch : 1; unsigned char countAttributeNgramPrefixMatch : 1; unsigned char unCalibratedEmbeddingSimilarity : 1; unsigned char calibratedEmbeddingSimilarity : 1; } _has;
}

@property (nonatomic) unsigned int countAttributeQPQUMatch;
@property (nonatomic) char hasCountAttributeQPQUMatch;
@property (nonatomic) unsigned int countAttributeQPQUprefixMatch;
@property (nonatomic) char hasCountAttributeQPQUprefixMatch;
@property (nonatomic) unsigned int countAttributeUnigramMatch;
@property (nonatomic) char hasCountAttributeUnigramMatch;
@property (nonatomic) unsigned int countAttributeBigramMatch;
@property (nonatomic) char hasCountAttributeBigramMatch;
@property (nonatomic) unsigned int countAttributeNgramMatch;
@property (nonatomic) char hasCountAttributeNgramMatch;
@property (nonatomic) unsigned int countAttributeUnigramPrefixMatch;
@property (nonatomic) char hasCountAttributeUnigramPrefixMatch;
@property (nonatomic) unsigned int countAttributeBigramPrefixMatch;
@property (nonatomic) char hasCountAttributeBigramPrefixMatch;
@property (nonatomic) unsigned int countAttributeNgramPrefixMatch;
@property (nonatomic) char hasCountAttributeNgramPrefixMatch;
@property (nonatomic) float unCalibratedEmbeddingSimilarity;
@property (nonatomic) char hasUnCalibratedEmbeddingSimilarity;
@property (nonatomic) float calibratedEmbeddingSimilarity;
@property (nonatomic) char hasCalibratedEmbeddingSimilarity;
@property (copy, nonatomic) NSString *embeddingModelId;
@property (nonatomic) char hasEmbeddingModelId;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteCountAttributeBigramMatch;
- (void)deleteCalibratedEmbeddingSimilarity;
- (void)deleteCountAttributeBigramPrefixMatch;
- (void)deleteCountAttributeNgramMatch;
- (void)deleteCountAttributeNgramPrefixMatch;
- (void)deleteCountAttributeQPQUMatch;
- (void)deleteCountAttributeQPQUprefixMatch;
- (void)deleteCountAttributeUnigramMatch;
- (void)deleteCountAttributeUnigramPrefixMatch;
- (void)deleteEmbeddingModelId;
- (void)deleteUnCalibratedEmbeddingSimilarity;
- (id)suppressMessageUnderConditions;

@end
