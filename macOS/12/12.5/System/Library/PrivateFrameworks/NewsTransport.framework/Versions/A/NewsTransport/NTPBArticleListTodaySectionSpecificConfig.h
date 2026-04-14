@class NSString;

@interface NTPBArticleListTodaySectionSpecificConfig : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasArticleListID;
@property (retain, nonatomic) NSString *articleListID;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
