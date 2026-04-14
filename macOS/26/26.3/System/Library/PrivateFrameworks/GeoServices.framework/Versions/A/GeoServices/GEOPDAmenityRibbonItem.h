@class PBUnknownFields;

@interface GEOPDAmenityRibbonItem : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _amenityItemIndexs;
}

- (id)dictionaryRepresentation;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)jsonRepresentation;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
