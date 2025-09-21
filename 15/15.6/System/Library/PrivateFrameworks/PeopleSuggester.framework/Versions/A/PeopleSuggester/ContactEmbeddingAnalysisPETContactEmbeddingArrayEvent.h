@class NSString, NSMutableArray;

@interface ContactEmbeddingAnalysisPETContactEmbeddingArrayEvent : PBCodable <NSCopying>

@property (retain, nonatomic) NSString *sessinobd;
@property (retain, nonatomic) NSString *userId;
@property (retain, nonatomic) NSMutableArray *contactEmbeddings;

+ (Class)contactEmbeddingType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addContactEmbedding:(id)a0;
- (void)clearContactEmbeddings;
- (id)contactEmbeddingAtIndex:(unsigned long long)a0;
- (unsigned long long)contactEmbeddingsCount;

@end
