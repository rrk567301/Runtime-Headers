@class NSMutableArray;

@interface CKDPRecordOneTimeStableUrlInfo : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *oneTimeUrls;

+ (Class)oneTimeUrlType;

- (id)dictionaryRepresentation;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)copyTo:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)addOneTimeUrl:(id)a0;
- (void)clearOneTimeUrls;
- (id)oneTimeUrlAtIndex:(unsigned long long)a0;
- (unsigned long long)oneTimeUrlsCount;

@end
