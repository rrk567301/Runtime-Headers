@class PBDataReader, NSString, GEOLatLng, GEOStructuredAddress, NSMutableArray, PBUnknownFields;

@interface GEOWaypointID : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOStructuredAddress *_addressHint;
    NSMutableArray *_formattedAddressLineHints;
    GEOLatLng *_locationHint;
    unsigned long long _muid;
    NSString *_placeNameHint;
    unsigned long long _resultProviderId;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _addressGeocodeAccuracyHint;
    int _placeTypeHint;
    struct { unsigned char has_muid : 1; unsigned char has_resultProviderId : 1; unsigned char has_addressGeocodeAccuracyHint : 1; unsigned char has_placeTypeHint : 1; unsigned char read_unknownFields : 1; unsigned char read_addressHint : 1; unsigned char read_formattedAddressLineHints : 1; unsigned char read_locationHint : 1; unsigned char read_placeNameHint : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) char hasMuid;
@property (nonatomic) unsigned long long muid;
@property (nonatomic) char hasResultProviderId;
@property (nonatomic) unsigned long long resultProviderId;
@property (readonly, nonatomic) char hasLocationHint;
@property (retain, nonatomic) GEOLatLng *locationHint;
@property (readonly, nonatomic) char hasAddressHint;
@property (retain, nonatomic) GEOStructuredAddress *addressHint;
@property (readonly, nonatomic) char hasPlaceNameHint;
@property (retain, nonatomic) NSString *placeNameHint;
@property (retain, nonatomic) NSMutableArray *formattedAddressLineHints;
@property (nonatomic) char hasPlaceTypeHint;
@property (nonatomic) int placeTypeHint;
@property (nonatomic) char hasAddressGeocodeAccuracyHint;
@property (nonatomic) int addressGeocodeAccuracyHint;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)formattedAddressLineHintType;
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
- (int)StringAsAddressGeocodeAccuracyHint:(id)a0;
- (int)StringAsPlaceTypeHint:(id)a0;
- (void)addFormattedAddressLineHint:(id)a0;
- (id)addressGeocodeAccuracyHintAsString:(int)a0;
- (void)clearFormattedAddressLineHints;
- (void)clearUnknownFields:(char)a0;
- (id)formattedAddressLineHintAtIndex:(unsigned long long)a0;
- (unsigned long long)formattedAddressLineHintsCount;
- (char)hasGreenTeaWithValue:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (id)placeTypeHintAsString:(int)a0;
- (void)readAll:(char)a0;

@end
