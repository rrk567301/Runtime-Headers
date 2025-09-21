@class NSData, PBUnknownFields;

@interface GEOTransitEntry : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    unsigned long long _lineMuid;
    NSData *_routingParameters;
    unsigned long long _tripMuid;
    unsigned int _tripStaticDepartureTime;
    unsigned int _windowStartTime;
    struct { unsigned char has_lineMuid : 1; unsigned char has_tripMuid : 1; unsigned char has_tripStaticDepartureTime : 1; unsigned char has_windowStartTime : 1; } _flags;
}

@property (nonatomic) char hasTripMuid;
@property (nonatomic) unsigned long long tripMuid;
@property (nonatomic) char hasLineMuid;
@property (nonatomic) unsigned long long lineMuid;
@property (nonatomic) char hasTripStaticDepartureTime;
@property (nonatomic) unsigned int tripStaticDepartureTime;
@property (nonatomic) char hasWindowStartTime;
@property (nonatomic) unsigned int windowStartTime;
@property (readonly, nonatomic) char hasRoutingParameters;
@property (retain, nonatomic) NSData *routingParameters;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (char)isValid:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
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
