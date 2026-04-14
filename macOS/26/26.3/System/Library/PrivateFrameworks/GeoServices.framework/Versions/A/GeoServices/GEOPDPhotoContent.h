@class NSString, PBUnknownFields;

@interface GEOPDPhotoContent : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSString *_url;
    unsigned int _height;
    int _urlType;
    unsigned int _width;
    struct { unsigned char has_height : 1; unsigned char has_urlType : 1; unsigned char has_width : 1; } _flags;
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
- (unsigned long long)_area;

@end
