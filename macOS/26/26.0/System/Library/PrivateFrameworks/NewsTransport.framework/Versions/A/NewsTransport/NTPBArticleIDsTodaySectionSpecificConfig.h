@class NSMutableArray;

@interface NTPBArticleIDsTodaySectionSpecificConfig : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *articles;

+ (Class)articlesType;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)clearArticles;
- (unsigned long long)articlesCount;
- (id)articlesAtIndex:(unsigned long long)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)addArticles:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
