@class PBDataReader, GEOPDMapsIdentifier, GEOLatLng, PBUnknownFields;

@interface GEOPDAutocompleteEntryAddress : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOLatLng *_center;
    double _disambiguationRadiusMeters;
    double _distance;
    GEOPDMapsIdentifier *_mapsId;
    unsigned long long _opaqueGeoId;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _placeType;
    char _shouldCallPlacesForClientization;
    struct { unsigned char has_disambiguationRadiusMeters : 1; unsigned char has_distance : 1; unsigned char has_opaqueGeoId : 1; unsigned char has_placeType : 1; unsigned char has_shouldCallPlacesForClientization : 1; unsigned char read_unknownFields : 1; unsigned char read_center : 1; unsigned char read_mapsId : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) char hasCenter;
@property (retain, nonatomic) GEOLatLng *center;
@property (nonatomic) char hasOpaqueGeoId;
@property (nonatomic) unsigned long long opaqueGeoId;
@property (nonatomic) char hasDistance;
@property (nonatomic) double distance;
@property (nonatomic) char hasPlaceType;
@property (nonatomic) int placeType;
@property (nonatomic) char hasDisambiguationRadiusMeters;
@property (nonatomic) double disambiguationRadiusMeters;
@property (readonly, nonatomic) char hasMapsId;
@property (retain, nonatomic) GEOPDMapsIdentifier *mapsId;
@property (nonatomic) char hasShouldCallPlacesForClientization;
@property (nonatomic) char shouldCallPlacesForClientization;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (char)isValid:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithData:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsPlaceType:(id)a0;
- (void)clearUnknownFields:(char)a0;
- (char)hasGreenTeaWithValue:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (id)placeTypeAsString:(int)a0;
- (void)readAll:(char)a0;

@end
