@class NSMutableArray;

@interface PIRGeoListSnippet : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *pois;

+ (Class)poisType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)poisCount;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (void)addPois:(id)a0;
- (void)clearPois;
- (id)poisAtIndex:(unsigned long long)a0;

@end
