@class GEOPDPhoto, PBUnknownFields;

@interface GEOPDIcon : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    GEOPDPhoto *_image;
    int _iconType;
    BOOL _canBeDisplayedInPlaceCardHeader;
    struct { unsigned char has_iconType : 1; unsigned char has_canBeDisplayedInPlaceCardHeader : 1; } _flags;
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
