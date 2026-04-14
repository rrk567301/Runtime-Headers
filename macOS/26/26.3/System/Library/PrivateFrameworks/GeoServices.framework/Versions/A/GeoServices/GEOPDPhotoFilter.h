@class PBUnknownFields;

@interface GEOPDPhotoFilter : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    struct GEOPDPhotoSizeFilterValue { unsigned int x0; unsigned int x1; struct { unsigned char x0 : 1; unsigned char x1 : 1; } x2; } *_photoSizeFilters;
    unsigned long long _photoSizeFiltersCount;
    unsigned long long _photoSizeFiltersSpace;
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
