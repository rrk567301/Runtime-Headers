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

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithData:(id)a0;
- (id)jsonRepresentation;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)init;
- (void)writeTo:(id)a0;

@end
