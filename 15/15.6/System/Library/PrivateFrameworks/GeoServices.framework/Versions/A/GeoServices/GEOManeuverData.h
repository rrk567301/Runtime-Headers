@class PBUnknownFields, GEOJunctionInfo;

@interface GEOManeuverData : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    GEOJunctionInfo *_junctionInfo;
    int _maneuverType;
    struct { unsigned char has_maneuverType : 1; } _flags;
}

@property (nonatomic) char hasManeuverType;
@property (nonatomic) int maneuverType;
@property (readonly, nonatomic) char hasJunctionInfo;
@property (retain, nonatomic) GEOJunctionInfo *junctionInfo;
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
- (int)StringAsManeuverType:(id)a0;
- (void)clearUnknownFields:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (id)maneuverTypeAsString:(int)a0;
- (void)readAll:(char)a0;

@end
