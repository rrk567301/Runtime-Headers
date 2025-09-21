@interface GEOPDStorefrontBundleId : PBCodable <NSCopying> {
    unsigned long long _identifier;
    unsigned long long _timestamp;
    struct { unsigned char has_identifier : 1; unsigned char has_timestamp : 1; } _flags;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
