@class PBUnknownFields;

@interface GEOLogMsgStateRoutingWaypoints : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    unsigned int _finalWaypointId;
    unsigned int _originalNumberOfStops;
    unsigned int _originalWaypointId;
    struct { unsigned char has_finalWaypointId : 1; unsigned char has_originalNumberOfStops : 1; unsigned char has_originalWaypointId : 1; } _flags;
}

@property (nonatomic) char hasOriginalNumberOfStops;
@property (nonatomic) unsigned int originalNumberOfStops;
@property (nonatomic) char hasOriginalWaypointId;
@property (nonatomic) unsigned int originalWaypointId;
@property (nonatomic) char hasFinalWaypointId;
@property (nonatomic) unsigned int finalWaypointId;
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
