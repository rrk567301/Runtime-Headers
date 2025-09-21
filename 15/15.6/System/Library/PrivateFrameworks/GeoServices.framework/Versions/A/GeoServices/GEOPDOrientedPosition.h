@interface GEOPDOrientedPosition : PBCodable <NSCopying> {
    double _pitch;
    double _roll;
    double _x;
    double _yaw;
    double _y;
    double _z;
    struct { unsigned char has_pitch : 1; unsigned char has_roll : 1; unsigned char has_x : 1; unsigned char has_yaw : 1; unsigned char has_y : 1; unsigned char has_z : 1; } _flags;
}

@property (nonatomic) char hasX;
@property (nonatomic) double x;
@property (nonatomic) char hasY;
@property (nonatomic) double y;
@property (nonatomic) char hasZ;
@property (nonatomic) double z;
@property (nonatomic) char hasYaw;
@property (nonatomic) double yaw;
@property (nonatomic) char hasPitch;
@property (nonatomic) double pitch;
@property (nonatomic) char hasRoll;
@property (nonatomic) double roll;

+ (char)isValid:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;

@end
