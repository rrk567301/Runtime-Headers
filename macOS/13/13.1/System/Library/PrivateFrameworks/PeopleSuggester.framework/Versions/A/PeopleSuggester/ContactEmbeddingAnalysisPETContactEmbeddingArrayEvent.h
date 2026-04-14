@class NSString, NSMutableArray;

@interface ContactEmbeddingAnalysisPETContactEmbeddingArrayEvent : PBCodable <NSCopying>

@property (retain, nonatomic) NSString *sessinobd;
@property (retain, nonatomic) NSString *userId;
@property (retain, nonatomic) NSMutableArray *contactEmbeddings;

+ (Class)contactEmbeddingType;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (void)clearContactEmbeddings;
- (void)addContactEmbedding:(id)a0;
- (unsigned long long)contactEmbeddingsCount;
- (id)contactEmbeddingAtIndex:(unsigned long long)a0;

@end
