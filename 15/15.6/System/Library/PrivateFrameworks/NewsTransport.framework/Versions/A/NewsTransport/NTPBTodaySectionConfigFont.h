@class NSString;

@interface NTPBTodaySectionConfigFont : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasName;
@property (retain, nonatomic) NSString *name;
@property (readonly, nonatomic) char hasUrlString;
@property (retain, nonatomic) NSString *urlString;

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
