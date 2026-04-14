@interface GEOGloriaTessellationOptions : PBCodable <NSCopying> {
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _zoomLevels;
    int _encodingType;
    unsigned int _precisionLevel;
    int _type;
    struct { unsigned char has_encodingType : 1; unsigned char has_precisionLevel : 1; } _flags;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (id)jsonRepresentation;
- (void)dealloc;

@end
