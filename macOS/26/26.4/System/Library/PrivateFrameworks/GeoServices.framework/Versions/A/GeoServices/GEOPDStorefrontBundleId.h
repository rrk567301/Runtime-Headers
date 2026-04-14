@interface GEOPDStorefrontBundleId : PBCodable <NSCopying> {
    unsigned long long _identifier;
    unsigned long long _timestamp;
    struct { unsigned char has_identifier : 1; unsigned char has_timestamp : 1; } _flags;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (id)jsonRepresentation;

@end
