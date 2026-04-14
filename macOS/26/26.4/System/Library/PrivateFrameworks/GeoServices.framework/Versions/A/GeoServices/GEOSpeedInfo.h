@class PBUnknownFields;

@interface GEOSpeedInfo : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    double _freeflowSpeedMps;
    double _speedLimitMps;
    struct { unsigned char has_freeflowSpeedMps : 1; unsigned char has_speedLimitMps : 1; } _flags;
}

@property (nonatomic) BOOL hasSpeedLimitMps;
@property (nonatomic) double speedLimitMps;
@property (nonatomic) BOOL hasFreeflowSpeedMps;
@property (nonatomic) double freeflowSpeedMps;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (void)readAll:(BOOL)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionary:(id)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (void)clearUnknownFields:(BOOL)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (id)jsonRepresentation;
- (id)initWithJSON:(id)a0;

@end
