@class NSMutableArray, PBUnknownFields;

@interface GEOPDPictureItemContainer : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSMutableArray *_pictureItems;
    char _allowFullScreenPhoto;
    struct { unsigned char has_allowFullScreenPhoto : 1; } _flags;
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
