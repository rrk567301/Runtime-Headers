@class NSMutableArray;

@interface NTPBArticleInfoListResponse : PBCodable <NSCopying>

@property (nonatomic) char isValidBucketGroup;
@property (retain, nonatomic) NSMutableArray *articleInfoLists;

+ (Class)articleInfoListType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addArticleInfoList:(id)a0;
- (id)articleInfoListAtIndex:(unsigned long long)a0;
- (unsigned long long)articleInfoListsCount;
- (void)clearArticleInfoLists;

@end
