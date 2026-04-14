@class NSData, NSMutableArray;

@interface NTPBArticleInfoList : PBCodable <NSCopying>

@property (retain, nonatomic) NSData *urlHash;
@property (retain, nonatomic) NSMutableArray *articleInfos;

+ (Class)articleInfoType;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (void)clearArticleInfos;
- (void)addArticleInfo:(id)a0;
- (unsigned long long)articleInfosCount;
- (id)articleInfoAtIndex:(unsigned long long)a0;

@end
