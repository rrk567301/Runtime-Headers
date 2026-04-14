@class NSString;

@interface GEOPDSearchClientResolvedIntent : PBCodable <NSCopying> {
    NSString *_name;
    int _resolvedItemType;
    struct { unsigned char has_resolvedItemType : 1; } _flags;
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
