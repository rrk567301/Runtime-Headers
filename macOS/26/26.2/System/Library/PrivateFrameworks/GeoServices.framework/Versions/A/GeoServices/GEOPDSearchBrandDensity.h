@class NSString;

@interface GEOPDSearchBrandDensity : PBCodable <NSCopying> {
    unsigned long long _count;
    NSString *_geohash;
    float _popularitySum;
    struct { unsigned char has_count : 1; unsigned char has_popularitySum : 1; } _flags;
}

- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;

@end
