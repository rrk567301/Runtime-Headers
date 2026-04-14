@class NSData, PBUnknownFields;

@interface GEOPDChildPlaceLookupByCategoryParameters : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSData *_categoryMetadata;
    unsigned long long _parentMuid;
    struct { unsigned char has_parentMuid : 1; } _flags;
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
