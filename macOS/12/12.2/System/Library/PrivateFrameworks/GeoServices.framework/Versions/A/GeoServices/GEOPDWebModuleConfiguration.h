@class NSString, PBUnknownFields;

@interface GEOPDWebModuleConfiguration : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSString *_url;
    BOOL _shouldRenderBackgroundPlatter;
    struct { unsigned char has_shouldRenderBackgroundPlatter : 1; } _flags;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)jsonRepresentation;

@end
