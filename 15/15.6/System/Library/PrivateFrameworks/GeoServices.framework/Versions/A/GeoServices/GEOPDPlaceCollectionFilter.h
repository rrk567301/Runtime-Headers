@class PBUnknownFields;

@interface GEOPDPlaceCollectionFilter : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    unsigned int _expectedResultCount;
    char _enableCollectionItemDescription;
    char _enableMediaLink;
    char _includePlaceCollectionItemPhotos;
    char _isCollectionView;
    char _overrideSuppress;
    char _partiallyClientize;
    struct { unsigned char has_expectedResultCount : 1; unsigned char has_enableCollectionItemDescription : 1; unsigned char has_enableMediaLink : 1; unsigned char has_includePlaceCollectionItemPhotos : 1; unsigned char has_isCollectionView : 1; unsigned char has_overrideSuppress : 1; unsigned char has_partiallyClientize : 1; } _flags;
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
