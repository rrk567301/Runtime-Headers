@interface GEOGloriaTessellationOptions : PBCodable <NSCopying> {
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _zoomLevels;
    int _encodingType;
    unsigned int _precisionLevel;
    int _type;
    struct { unsigned char has_encodingType : 1; unsigned char has_precisionLevel : 1; } _flags;
}

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
