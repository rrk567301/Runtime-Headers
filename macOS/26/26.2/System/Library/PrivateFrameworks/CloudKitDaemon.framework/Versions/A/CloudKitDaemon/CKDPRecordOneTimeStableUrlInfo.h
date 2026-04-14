@class NSMutableArray;

@interface CKDPRecordOneTimeStableUrlInfo : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *oneTimeUrls;

+ (Class)oneTimeUrlType;

- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (void)addOneTimeUrl:(id)a0;
- (void)clearOneTimeUrls;
- (id)oneTimeUrlAtIndex:(unsigned long long)a0;
- (unsigned long long)oneTimeUrlsCount;

@end
