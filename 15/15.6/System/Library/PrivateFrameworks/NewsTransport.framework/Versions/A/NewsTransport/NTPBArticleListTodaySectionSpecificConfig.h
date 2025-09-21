@class NSString;

@interface NTPBArticleListTodaySectionSpecificConfig : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasArticleListID;
@property (retain, nonatomic) NSString *articleListID;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
