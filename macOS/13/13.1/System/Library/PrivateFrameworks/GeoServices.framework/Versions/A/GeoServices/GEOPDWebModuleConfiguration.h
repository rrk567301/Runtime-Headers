@class NSString, PBUnknownFields;

@interface GEOPDWebModuleConfiguration : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSString *_url;
    int _type;
    BOOL _shouldRenderBackgroundPlatter;
    struct { unsigned char has_type : 1; unsigned char has_shouldRenderBackgroundPlatter : 1; } _flags;
}

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)jsonRepresentation;

@end
