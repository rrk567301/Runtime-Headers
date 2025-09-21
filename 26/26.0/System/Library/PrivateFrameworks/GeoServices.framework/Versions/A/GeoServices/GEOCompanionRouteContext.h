@interface GEOCompanionRouteContext : PBCodable <NSCopying> {
    double _timestamp;
    unsigned int _legacyTimestamp;
    int _origin;
    struct { unsigned char has_timestamp : 1; unsigned char has_legacyTimestamp : 1; unsigned char has_origin : 1; } _flags;
}

@property (nonatomic) BOOL hasLegacyTimestamp;
@property (nonatomic) unsigned int legacyTimestamp;
@property (nonatomic) BOOL hasOrigin;
@property (nonatomic) int origin;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) double timestamp;

+ (BOOL)isValid:(id)a0;
+ (id)context;
+ (int)defaultOrigin;

- (id)initWithDictionary:(id)a0;
- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (long long)compare:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)simpleDescription;
- (unsigned long long)hash;
- (void)readAll:(BOOL)a0;
- (BOOL)isEqual:(id)a0;
- (int)StringAsOrigin:(id)a0;
- (BOOL)isForeignOrigin;
- (id)originAsString:(int)a0;
- (BOOL)isStaleComparedToContext:(id)a0;

@end
