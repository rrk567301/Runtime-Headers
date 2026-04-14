@class PBUnknownFields;

@interface GEOPDFactoidRibbonItem : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    unsigned int _factoidItemIndex;
    struct { unsigned char has_factoidItemIndex : 1; } _flags;
}

- (id)dictionaryRepresentation;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)jsonRepresentation;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
