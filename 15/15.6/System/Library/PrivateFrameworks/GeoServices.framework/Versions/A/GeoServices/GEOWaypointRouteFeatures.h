@class PBUnknownFields;

@interface GEOWaypointRouteFeatures : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    char _avoidsHighways;
    char _avoidsTolls;
    char _avoidsTraffic;
    struct { unsigned char has_avoidsHighways : 1; unsigned char has_avoidsTolls : 1; unsigned char has_avoidsTraffic : 1; } _flags;
}

@property (nonatomic) char hasAvoidsTolls;
@property (nonatomic) char avoidsTolls;
@property (nonatomic) char hasAvoidsHighways;
@property (nonatomic) char avoidsHighways;
@property (nonatomic) char hasAvoidsTraffic;
@property (nonatomic) char avoidsTraffic;
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
