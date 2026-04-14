@class PBUnknownFields, NSMutableArray, PBDataReader;

@interface GEOPDContextualPhotoMetadata : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_contextualPhotoLabels;
    NSMutableArray *_contextualPhotos;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    unsigned int _maxNumContextualPhotos;
    unsigned int _maxNumPhotos;
    BOOL _shouldApplyContextualizationPlacecard;
    BOOL _shouldApplyContextualizationSearch;
    BOOL _shouldLimitToPoisWithVendorTopPhoto;
    struct { unsigned char has_maxNumContextualPhotos : 1; unsigned char has_maxNumPhotos : 1; unsigned char has_shouldApplyContextualizationPlacecard : 1; unsigned char has_shouldApplyContextualizationSearch : 1; unsigned char has_shouldLimitToPoisWithVendorTopPhoto : 1; unsigned char read_unknownFields : 1; unsigned char read_contextualPhotoLabels : 1; unsigned char read_contextualPhotos : 1; unsigned char wrote_anyField : 1; } _flags;
}

- (id)initWithData:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (id)init;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
