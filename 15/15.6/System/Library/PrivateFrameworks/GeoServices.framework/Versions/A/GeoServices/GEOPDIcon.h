@class GEOPDPhoto, PBUnknownFields;

@interface GEOPDIcon : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    GEOPDPhoto *_image;
    int _iconType;
    struct { unsigned char has_iconType : 1; } _flags;
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
