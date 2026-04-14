@class NSMutableArray;

@interface NTPBArticleIDsTodaySectionSpecificConfig : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *articles;

+ (Class)articlesType;

- (id)dictionaryRepresentation;
- (id)description;
- (unsigned long long)articlesCount;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)clearArticles;
- (void)writeTo:(id)a0;
- (void)addArticles:(id)a0;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)articlesAtIndex:(unsigned long long)a0;

@end
