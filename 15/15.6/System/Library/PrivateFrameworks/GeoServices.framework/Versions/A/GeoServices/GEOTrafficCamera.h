@class PBDataReader, NSString, GEOMiniCard, GEOLatLng, PBUnknownFields;

@interface GEOTrafficCamera : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_identifier;
    GEOMiniCard *_infoCard;
    GEOLatLng *_position;
    NSString *_speedLimitText;
    double _speedThreshold;
    GEOMiniCard *_speedingCard;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    unsigned int _cameraPriority;
    unsigned int _countryCodeStyleId;
    unsigned int _highlightDistance;
    int _type;
    struct { unsigned char has_speedThreshold : 1; unsigned char has_cameraPriority : 1; unsigned char has_countryCodeStyleId : 1; unsigned char has_highlightDistance : 1; unsigned char has_type : 1; unsigned char read_unknownFields : 1; unsigned char read_identifier : 1; unsigned char read_infoCard : 1; unsigned char read_position : 1; unsigned char read_speedLimitText : 1; unsigned char read_speedingCard : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) char hasIdentifier;
@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) char hasType;
@property (nonatomic) int type;
@property (readonly, nonatomic) char hasPosition;
@property (retain, nonatomic) GEOLatLng *position;
@property (nonatomic) char hasHighlightDistance;
@property (nonatomic) unsigned int highlightDistance;
@property (readonly, nonatomic) char hasInfoCard;
@property (retain, nonatomic) GEOMiniCard *infoCard;
@property (readonly, nonatomic) char hasSpeedLimitText;
@property (retain, nonatomic) NSString *speedLimitText;
@property (nonatomic) char hasSpeedThreshold;
@property (nonatomic) double speedThreshold;
@property (readonly, nonatomic) char hasSpeedingCard;
@property (retain, nonatomic) GEOMiniCard *speedingCard;
@property (nonatomic) char hasCameraPriority;
@property (nonatomic) unsigned int cameraPriority;
@property (nonatomic) char hasCountryCodeStyleId;
@property (nonatomic) unsigned int countryCodeStyleId;
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
- (int)StringAsType:(id)a0;
- (id)typeAsString:(int)a0;
- (void)clearUnknownFields:(char)a0;
- (char)hasGreenTeaWithValue:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;

@end
