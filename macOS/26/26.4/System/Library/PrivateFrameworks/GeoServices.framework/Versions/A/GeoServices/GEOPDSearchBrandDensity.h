@class NSString;

@interface GEOPDSearchBrandDensity : PBCodable <NSCopying> {
    unsigned long long _count;
    NSString *_geohash;
    float _popularitySum;
    struct { unsigned char has_count : 1; unsigned char has_popularitySum : 1; } _flags;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (id)jsonRepresentation;

@end
