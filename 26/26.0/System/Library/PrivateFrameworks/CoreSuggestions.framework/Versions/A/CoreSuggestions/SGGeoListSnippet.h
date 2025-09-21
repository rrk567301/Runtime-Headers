@class NSMutableArray;

@interface SGGeoListSnippet : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *pois;

+ (Class)poisType;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)poisCount;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)addPois:(id)a0;
- (void)clearPois;
- (id)poisAtIndex:(unsigned long long)a0;

@end
