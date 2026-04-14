@class GEOLatLng, PBUnknownFields;

@interface GEOPDAutocompleteOriginationRoutePlanningParameters : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    GEOLatLng *_previousLocation;
    BOOL _isEditServerRecommendedStop;
    BOOL _isRoutePlanningEditStopFillRequest;
    struct { unsigned char has_isEditServerRecommendedStop : 1; unsigned char has_isRoutePlanningEditStopFillRequest : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasPreviousLocation;
@property (retain, nonatomic) GEOLatLng *previousLocation;
@property (nonatomic) BOOL hasIsEditServerRecommendedStop;
@property (nonatomic) BOOL isEditServerRecommendedStop;
@property (nonatomic) BOOL hasIsRoutePlanningEditStopFillRequest;
@property (nonatomic) BOOL isRoutePlanningEditStopFillRequest;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (BOOL)hasGreenTeaWithValue:(BOOL)a0;
- (void)readAll:(BOOL)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionary:(id)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (void)clearUnknownFields:(BOOL)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (id)jsonRepresentation;
- (id)initWithJSON:(id)a0;

@end
