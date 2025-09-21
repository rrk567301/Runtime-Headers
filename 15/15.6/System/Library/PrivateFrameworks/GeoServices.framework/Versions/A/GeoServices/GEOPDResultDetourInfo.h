@class PBUnknownFields;

@interface GEOPDResultDetourInfo : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    int _detourDistance;
    int _detourTime;
    unsigned int _distanceToPlace;
    unsigned int _timeToPlace;
    struct { unsigned char has_detourDistance : 1; unsigned char has_detourTime : 1; unsigned char has_distanceToPlace : 1; unsigned char has_timeToPlace : 1; } _flags;
}

@property (nonatomic) char hasDetourTime;
@property (nonatomic) int detourTime;
@property (nonatomic) char hasTimeToPlace;
@property (nonatomic) unsigned int timeToPlace;
@property (nonatomic) char hasDetourDistance;
@property (nonatomic) int detourDistance;
@property (nonatomic) char hasDistanceToPlace;
@property (nonatomic) unsigned int distanceToPlace;
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
