@interface GEOPDStorefrontBundleId : PBCodable <NSCopying> {
    unsigned long long _identifier;
    unsigned long long _timestamp;
    struct { unsigned char has_identifier : 1; unsigned char has_timestamp : 1; } _flags;
}

- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;

@end
