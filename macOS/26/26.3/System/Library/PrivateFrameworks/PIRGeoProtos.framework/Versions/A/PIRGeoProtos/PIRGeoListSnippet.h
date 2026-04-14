@class NSMutableArray;

@interface PIRGeoListSnippet : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *pois;

+ (Class)poisType;

- (id)dictionaryRepresentation;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)copyTo:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)poisCount;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)addPois:(id)a0;
- (void)clearPois;
- (id)poisAtIndex:(unsigned long long)a0;

@end
