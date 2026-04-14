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

- (id)initWithDictionary:(id)a0;
- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (void)clearUnknownFields:(BOOL)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (void)readAll:(BOOL)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
