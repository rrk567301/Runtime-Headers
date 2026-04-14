@class NSString;

@interface GEOPDSearchClientResolvedIntent : PBCodable <NSCopying> {
    NSString *_name;
    int _resolvedItemType;
    struct { unsigned char has_resolvedItemType : 1; } _flags;
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
