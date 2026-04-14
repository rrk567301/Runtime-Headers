@class NSString, PBUnknownFields;

@interface GEOPDPhotoContent : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSString *_url;
    unsigned int _height;
    int _urlType;
    unsigned int _width;
    struct { unsigned char has_height : 1; unsigned char has_urlType : 1; unsigned char has_width : 1; } _flags;
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
- (unsigned long long)_area;

@end
