@class NSMutableArray;

@interface SGGeoListSnippet : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *pois;

+ (Class)poisType;

- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)poisCount;
- (void)copyTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (void)addPois:(id)a0;
- (void)clearPois;
- (id)poisAtIndex:(unsigned long long)a0;

@end
