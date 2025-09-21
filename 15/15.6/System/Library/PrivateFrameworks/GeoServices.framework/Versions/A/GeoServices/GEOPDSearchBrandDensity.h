@class NSString;

@interface GEOPDSearchBrandDensity : PBCodable <NSCopying> {
    unsigned long long _count;
    NSString *_geohash;
    float _popularitySum;
    struct { unsigned char has_count : 1; unsigned char has_popularitySum : 1; } _flags;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)jsonRepresentation;

@end
