@class NSString, GEOLatLng, GEORPUserLocationDetails, PBDataReader;

@interface GEORPIncidentAnnotationDetails : PBCodable <NSCopying> {
    PBDataReader *_reader;
    NSString *_incidentId;
    GEOLatLng *_incidentLocation;
    GEORPUserLocationDetails *_userLocation;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _annotationType;
    int _incidentType;
    struct { unsigned char has_annotationType : 1; unsigned char has_incidentType : 1; unsigned char read_incidentId : 1; unsigned char read_incidentLocation : 1; unsigned char read_userLocation : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) char hasUserLocation;
@property (retain, nonatomic) GEORPUserLocationDetails *userLocation;
@property (readonly, nonatomic) char hasIncidentId;
@property (retain, nonatomic) NSString *incidentId;
@property (nonatomic) char hasAnnotationType;
@property (nonatomic) int annotationType;
@property (nonatomic) char hasIncidentType;
@property (nonatomic) int incidentType;
@property (readonly, nonatomic) char hasIncidentLocation;
@property (retain, nonatomic) GEOLatLng *incidentLocation;

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
- (int)StringAsAnnotationType:(id)a0;
- (int)StringAsIncidentType:(id)a0;
- (id)annotationTypeAsString:(int)a0;
- (void)clearSensitiveFields:(unsigned long long)a0;
- (char)hasGreenTeaWithValue:(char)a0;
- (id)incidentTypeAsString:(int)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;

@end
