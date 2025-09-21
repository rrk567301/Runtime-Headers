@class GEOMapItemStorage;

@interface GEORouteHypothesisRequest : PBCodable <NSCopying> {
    double _arrivalDate;
    GEOMapItemStorage *_destinationLocation;
    double _expirationDate;
    int _transportType;
    struct { unsigned char has_arrivalDate : 1; unsigned char has_expirationDate : 1; unsigned char has_transportType : 1; } _flags;
}

@property (nonatomic) char hasArrivalDate;
@property (nonatomic) double arrivalDate;
@property (readonly, nonatomic) char hasDestinationLocation;
@property (retain, nonatomic) GEOMapItemStorage *destinationLocation;
@property (nonatomic) char hasTransportType;
@property (nonatomic) int transportType;
@property (nonatomic) char hasExpirationDate;
@property (nonatomic) double expirationDate;

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
- (int)StringAsTransportType:(id)a0;
- (void)clearSensitiveFields:(unsigned long long)a0;
- (char)hasGreenTeaWithValue:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;
- (id)transportTypeAsString:(int)a0;

@end
