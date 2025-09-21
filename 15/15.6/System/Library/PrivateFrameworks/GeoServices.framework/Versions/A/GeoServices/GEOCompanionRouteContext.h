@interface GEOCompanionRouteContext : PBCodable <NSCopying> {
    double _timestamp;
    unsigned int _legacyTimestamp;
    int _origin;
    struct { unsigned char has_timestamp : 1; unsigned char has_legacyTimestamp : 1; unsigned char has_origin : 1; } _flags;
}

@property (nonatomic) char hasLegacyTimestamp;
@property (nonatomic) unsigned int legacyTimestamp;
@property (nonatomic) char hasOrigin;
@property (nonatomic) int origin;
@property (nonatomic) char hasTimestamp;
@property (nonatomic) double timestamp;

+ (id)context;
+ (int)defaultOrigin;
+ (char)isValid:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (long long)compare:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsOrigin:(id)a0;
- (char)isForeignOrigin;
- (id)originAsString:(int)a0;
- (id)initWithJSON:(id)a0;
- (char)isStaleComparedToContext:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;
- (id)simpleDescription;

@end
