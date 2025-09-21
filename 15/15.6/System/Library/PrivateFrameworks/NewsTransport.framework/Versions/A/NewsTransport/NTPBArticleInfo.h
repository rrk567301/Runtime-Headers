@class NSString;

@interface NTPBArticleInfo : PBCodable <NSCopying>

@property (retain, nonatomic) NSString *articleId;
@property (readonly, nonatomic) char hasStoreFrontId;
@property (retain, nonatomic) NSString *storeFrontId;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
