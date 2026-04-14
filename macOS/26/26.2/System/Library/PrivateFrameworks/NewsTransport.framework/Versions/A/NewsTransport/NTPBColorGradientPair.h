@class NTPBColorGradient;

@interface NTPBColorGradientPair : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasLight;
@property (retain, nonatomic) NTPBColorGradient *light;
@property (readonly, nonatomic) BOOL hasDark;
@property (retain, nonatomic) NTPBColorGradient *dark;

- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (void)dealloc;

@end
