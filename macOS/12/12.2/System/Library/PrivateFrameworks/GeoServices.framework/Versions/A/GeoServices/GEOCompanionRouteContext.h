@interface GEOCompanionRouteContext : PBCodable <NSCopying> {
    int _origin;
    unsigned int _timestamp;
    struct { unsigned char has_origin : 1; unsigned char has_timestamp : 1; } _flags;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned int timestamp;
@property (nonatomic) BOOL hasOrigin;
@property (nonatomic) int origin;

+ (id)context;
+ (BOOL)isValid:(id)a0;
+ (int)defaultOrigin;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (long long)compare:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(BOOL)a0;
- (id)initWithJSON:(id)a0;
- (id)originAsString:(int)a0;
- (int)StringAsOrigin:(id)a0;
- (BOOL)isForeignOrigin;
- (BOOL)isStaleComparedToContext:(id)a0;
- (id)simpleDescription;

@end
