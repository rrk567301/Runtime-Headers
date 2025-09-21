@interface GEOMapLayerDataServiceVersion : PBCodable <NSCopying> {
    unsigned int _dataVersion;
    unsigned int _formatVersion;
    unsigned int _patchVersion;
    struct { unsigned char has_dataVersion : 1; unsigned char has_formatVersion : 1; unsigned char has_patchVersion : 1; } _flags;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)jsonRepresentation;

@end
