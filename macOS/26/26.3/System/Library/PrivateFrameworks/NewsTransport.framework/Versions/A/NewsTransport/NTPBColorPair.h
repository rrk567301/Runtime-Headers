@class NSString;

@interface NTPBColorPair : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasLight;
@property (retain, nonatomic) NSString *light;
@property (readonly, nonatomic) BOOL hasDark;
@property (retain, nonatomic) NSString *dark;

- (id)dictionaryRepresentation;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
