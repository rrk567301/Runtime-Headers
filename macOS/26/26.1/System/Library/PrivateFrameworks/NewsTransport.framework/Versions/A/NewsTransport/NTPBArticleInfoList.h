@class NSData, NSMutableArray;

@interface NTPBArticleInfoList : PBCodable <NSCopying>

@property (retain, nonatomic) NSData *urlHash;
@property (retain, nonatomic) NSMutableArray *articleInfos;

+ (Class)articleInfoType;

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addArticleInfo:(id)a0;
- (id)articleInfoAtIndex:(unsigned long long)a0;
- (unsigned long long)articleInfosCount;
- (void)clearArticleInfos;

@end
