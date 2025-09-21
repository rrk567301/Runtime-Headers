@class GEORPButton, NSString, PBDataReader, GEOMapRegion, NSMutableArray, GEORPUpdatedLabel;

@interface GEORPDetails : PBCodable <NSCopying> {
    PBDataReader *_reader;
    GEORPButton *_button;
    GEOMapRegion *_displayRegion;
    GEORPUpdatedLabel *_label;
    NSString *_localizedDescription;
    NSString *_localizedTitle;
    NSMutableArray *_places;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _directionsType;
    int _displayStyle;
    int _mapType;
    struct { unsigned char has_directionsType : 1; unsigned char has_displayStyle : 1; unsigned char has_mapType : 1; unsigned char read_button : 1; unsigned char read_displayRegion : 1; unsigned char read_label : 1; unsigned char read_localizedDescription : 1; unsigned char read_localizedTitle : 1; unsigned char read_places : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) char hasDisplayStyle;
@property (nonatomic) int displayStyle;
@property (readonly, nonatomic) char hasLocalizedTitle;
@property (retain, nonatomic) NSString *localizedTitle;
@property (readonly, nonatomic) char hasLocalizedDescription;
@property (retain, nonatomic) NSString *localizedDescription;
@property (readonly, nonatomic) char hasDisplayRegion;
@property (retain, nonatomic) GEOMapRegion *displayRegion;
@property (retain, nonatomic) NSMutableArray *places;
@property (readonly, nonatomic) char hasLabel;
@property (retain, nonatomic) GEORPUpdatedLabel *label;
@property (nonatomic) char hasDirectionsType;
@property (nonatomic) int directionsType;
@property (nonatomic) char hasMapType;
@property (nonatomic) int mapType;
@property (readonly, nonatomic) char hasButton;
@property (retain, nonatomic) GEORPButton *button;

+ (Class)placeType;
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
- (int)StringAsDirectionsType:(id)a0;
- (int)StringAsDisplayStyle:(id)a0;
- (int)StringAsMapType:(id)a0;
- (void)addPlace:(id)a0;
- (void)clearPlaces;
- (id)directionsTypeAsString:(int)a0;
- (id)displayStyleAsString:(int)a0;
- (char)hasGreenTeaWithValue:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (id)mapTypeAsString:(int)a0;
- (id)placeAtIndex:(unsigned long long)a0;
- (unsigned long long)placesCount;
- (void)readAll:(char)a0;

@end
