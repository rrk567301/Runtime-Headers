@class NSString, PBDataReader;

@interface GEOVectorTileRequest : PBCodable <NSCopying> {
    PBDataReader *_reader;
    NSString *_accessKey;
    NSString *_countryCode;
    NSString *_languageCode;
    unsigned long long _lineId;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    float _latitudeHint;
    float _longitudeHint;
    unsigned int _scale;
    unsigned int _size;
    unsigned int _style;
    unsigned int _version;
    unsigned int _x;
    unsigned int _y;
    unsigned int _z;
    char _preflight;
    char _venuesPreflight;
    char _vloc;
    struct { unsigned char has_lineId : 1; unsigned char has_latitudeHint : 1; unsigned char has_longitudeHint : 1; unsigned char has_scale : 1; unsigned char has_size : 1; unsigned char has_style : 1; unsigned char has_version : 1; unsigned char has_x : 1; unsigned char has_y : 1; unsigned char has_z : 1; unsigned char has_preflight : 1; unsigned char has_venuesPreflight : 1; unsigned char has_vloc : 1; unsigned char read_accessKey : 1; unsigned char read_countryCode : 1; unsigned char read_languageCode : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) char hasX;
@property (nonatomic) unsigned int x;
@property (nonatomic) char hasY;
@property (nonatomic) unsigned int y;
@property (nonatomic) char hasZ;
@property (nonatomic) unsigned int z;
@property (nonatomic) char hasVersion;
@property (nonatomic) unsigned int version;
@property (nonatomic) char hasStyle;
@property (nonatomic) unsigned int style;
@property (readonly, nonatomic) char hasLanguageCode;
@property (retain, nonatomic) NSString *languageCode;
@property (nonatomic) char hasPreflight;
@property (nonatomic) char preflight;
@property (nonatomic) char hasLineId;
@property (nonatomic) unsigned long long lineId;
@property (nonatomic) char hasSize;
@property (nonatomic) unsigned int size;
@property (nonatomic) char hasScale;
@property (nonatomic) unsigned int scale;
@property (readonly, nonatomic) char hasAccessKey;
@property (retain, nonatomic) NSString *accessKey;
@property (nonatomic) char hasLongitudeHint;
@property (nonatomic) float longitudeHint;
@property (nonatomic) char hasLatitudeHint;
@property (nonatomic) float latitudeHint;
@property (readonly, nonatomic) char hasCountryCode;
@property (retain, nonatomic) NSString *countryCode;
@property (nonatomic) char hasVenuesPreflight;
@property (nonatomic) char venuesPreflight;
@property (nonatomic) char hasVloc;
@property (nonatomic) char vloc;

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
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;

@end
