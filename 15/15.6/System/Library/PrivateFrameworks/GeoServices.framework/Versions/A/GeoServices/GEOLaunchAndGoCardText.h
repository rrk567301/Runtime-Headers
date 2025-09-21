@class PBDataReader, GEOFormattedString, GEOPlaceFormattedString, PBUnknownFields;

@interface GEOLaunchAndGoCardText : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOPlaceFormattedString *_body;
    GEOFormattedString *_cardTitle;
    GEOPlaceFormattedString *_commuteTitle;
    GEOFormattedString *_routeDescription;
    GEOFormattedString *_routeTitle;
    GEOPlaceFormattedString *_title;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_unknownFields : 1; unsigned char read_body : 1; unsigned char read_cardTitle : 1; unsigned char read_commuteTitle : 1; unsigned char read_routeDescription : 1; unsigned char read_routeTitle : 1; unsigned char read_title : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) char hasCardTitle;
@property (retain, nonatomic) GEOFormattedString *cardTitle;
@property (readonly, nonatomic) char hasRouteTitle;
@property (retain, nonatomic) GEOFormattedString *routeTitle;
@property (readonly, nonatomic) char hasRouteDescription;
@property (retain, nonatomic) GEOFormattedString *routeDescription;
@property (readonly, nonatomic) char hasTitle;
@property (retain, nonatomic) GEOPlaceFormattedString *title;
@property (readonly, nonatomic) char hasCommuteTitle;
@property (retain, nonatomic) GEOPlaceFormattedString *commuteTitle;
@property (readonly, nonatomic) char hasBody;
@property (retain, nonatomic) GEOPlaceFormattedString *body;
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
- (void)clearUnknownFields:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;

@end
