@class PBDataReader, GEOLocalizedString, GEOTextLink, GEOMapRegion, NSMutableArray, PBUnknownFields;

@interface GEORPDisplayDetails : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOLocalizedString *_body;
    GEOMapRegion *_displayRegion;
    GEOTextLink *_outreachLink;
    NSMutableArray *_places;
    GEOLocalizedString *_title;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _displayStyle;
    int _mapType;
    struct { unsigned char has_displayStyle : 1; unsigned char has_mapType : 1; unsigned char read_unknownFields : 1; unsigned char read_body : 1; unsigned char read_displayRegion : 1; unsigned char read_outreachLink : 1; unsigned char read_places : 1; unsigned char read_title : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) char hasDisplayStyle;
@property (nonatomic) int displayStyle;
@property (readonly, nonatomic) char hasTitle;
@property (retain, nonatomic) GEOLocalizedString *title;
@property (readonly, nonatomic) char hasBody;
@property (retain, nonatomic) GEOLocalizedString *body;
@property (readonly, nonatomic) char hasDisplayRegion;
@property (retain, nonatomic) GEOMapRegion *displayRegion;
@property (nonatomic) char hasMapType;
@property (nonatomic) int mapType;
@property (retain, nonatomic) NSMutableArray *places;
@property (readonly, nonatomic) char hasOutreachLink;
@property (retain, nonatomic) GEOTextLink *outreachLink;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

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
- (int)StringAsDisplayStyle:(id)a0;
- (int)StringAsMapType:(id)a0;
- (void)addPlace:(id)a0;
- (void)clearPlaces;
- (void)clearUnknownFields:(char)a0;
- (id)displayStyleAsString:(int)a0;
- (char)hasGreenTeaWithValue:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (id)mapTypeAsString:(int)a0;
- (id)placeAtIndex:(unsigned long long)a0;
- (unsigned long long)placesCount;
- (void)readAll:(char)a0;

@end
