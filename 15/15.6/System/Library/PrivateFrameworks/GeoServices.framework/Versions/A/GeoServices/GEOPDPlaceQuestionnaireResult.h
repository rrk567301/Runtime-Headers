@class GEOPDMapsIdentifier, GEOPDScorecardLayout, GEOPDPhotoConstraints, NSMutableArray, PBDataReader;

@interface GEOPDPlaceQuestionnaireResult : PBCodable <NSCopying> {
    PBDataReader *_reader;
    NSMutableArray *_historicalMapsIds;
    GEOPDMapsIdentifier *_mapsId;
    GEOPDPhotoConstraints *_photoConstraints;
    GEOPDScorecardLayout *_scorecardLayout;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _status;
    char _alwaysPositionInitialRatingCtaTowardsTop;
    char _collectPhotos;
    char _isOverride;
    char _suppressOnExistingRichData;
    struct { unsigned char has_status : 1; unsigned char has_alwaysPositionInitialRatingCtaTowardsTop : 1; unsigned char has_collectPhotos : 1; unsigned char has_isOverride : 1; unsigned char has_suppressOnExistingRichData : 1; unsigned char read_historicalMapsIds : 1; unsigned char read_mapsId : 1; unsigned char read_photoConstraints : 1; unsigned char read_scorecardLayout : 1; unsigned char wrote_anyField : 1; } _flags;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithData:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)jsonRepresentation;

@end
