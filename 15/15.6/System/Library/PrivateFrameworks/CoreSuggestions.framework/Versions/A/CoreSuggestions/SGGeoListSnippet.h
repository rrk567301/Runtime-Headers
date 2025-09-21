@class NSMutableArray;

@interface SGGeoListSnippet : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *pois;

+ (Class)poisType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)poisCount;
- (void)addPois:(id)a0;
- (void)clearPois;
- (id)poisAtIndex:(unsigned long long)a0;

@end
