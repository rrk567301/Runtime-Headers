@class NSMutableArray;

@interface NTPBArticleInfoListResponse : PBCodable <NSCopying>

@property (nonatomic) BOOL isValidBucketGroup;
@property (retain, nonatomic) NSMutableArray *articleInfoLists;

+ (Class)articleInfoListType;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (void)clearArticleInfoLists;
- (void)addArticleInfoList:(id)a0;
- (unsigned long long)articleInfoListsCount;
- (id)articleInfoListAtIndex:(unsigned long long)a0;

@end
