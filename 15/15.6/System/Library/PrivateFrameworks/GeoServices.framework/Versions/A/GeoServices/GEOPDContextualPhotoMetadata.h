@class NSMutableArray, PBUnknownFields;

@interface GEOPDContextualPhotoMetadata : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSMutableArray *_contextualPhotoLabels;
    unsigned int _maxNumContextualPhotos;
    unsigned int _maxNumPhotos;
    char _shouldApplyContextualizationPlacecard;
    char _shouldApplyContextualizationSearch;
    char _shouldLimitToPoisWithVendorTopPhoto;
    struct { unsigned char has_maxNumContextualPhotos : 1; unsigned char has_maxNumPhotos : 1; unsigned char has_shouldApplyContextualizationPlacecard : 1; unsigned char has_shouldApplyContextualizationSearch : 1; unsigned char has_shouldLimitToPoisWithVendorTopPhoto : 1; } _flags;
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
