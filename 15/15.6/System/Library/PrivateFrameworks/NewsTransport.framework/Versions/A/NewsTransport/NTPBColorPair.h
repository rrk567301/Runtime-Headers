@class NSString;

@interface NTPBColorPair : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasLight;
@property (retain, nonatomic) NSString *light;
@property (readonly, nonatomic) char hasDark;
@property (retain, nonatomic) NSString *dark;

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
