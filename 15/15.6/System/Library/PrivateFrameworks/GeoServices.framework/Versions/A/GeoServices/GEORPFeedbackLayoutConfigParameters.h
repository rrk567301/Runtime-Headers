@class GEOPDMapsIdentifier, GEOLatLng, GEOMapRegion, PBDataReader;

@interface GEORPFeedbackLayoutConfigParameters : PBCodable <NSCopying> {
    PBDataReader *_reader;
    GEOLatLng *_coordinate;
    GEOMapRegion *_mapRegion;
    GEOPDMapsIdentifier *_mapsId;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _formType;
    struct { unsigned char has_formType : 1; unsigned char read_coordinate : 1; unsigned char read_mapRegion : 1; unsigned char read_mapsId : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) char hasFormType;
@property (nonatomic) int formType;
@property (readonly, nonatomic) char hasMapRegion;
@property (retain, nonatomic) GEOMapRegion *mapRegion;
@property (readonly, nonatomic) char hasCoordinate;
@property (retain, nonatomic) GEOLatLng *coordinate;
@property (readonly, nonatomic) char hasMapsId;
@property (retain, nonatomic) GEOPDMapsIdentifier *mapsId;

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
- (int)StringAsFormType:(id)a0;
- (id)formTypeAsString:(int)a0;
- (char)hasGreenTeaWithValue:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;

@end
