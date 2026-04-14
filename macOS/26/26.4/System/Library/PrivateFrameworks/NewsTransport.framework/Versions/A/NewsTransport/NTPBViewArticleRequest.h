@class NSString;

@interface NTPBViewArticleRequest : PBRequest <NSCopying>

@property (readonly, nonatomic) BOOL hasWebPageUri;
@property (retain, nonatomic) NSString *webPageUri;
@property (readonly, nonatomic) BOOL hasFeedUri;
@property (retain, nonatomic) NSString *feedUri;
@property (readonly, nonatomic) BOOL hasStoreFrontId;
@property (retain, nonatomic) NSString *storeFrontId;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;

@end
