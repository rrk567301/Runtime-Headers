@interface CLPInertialOdometry : PBCodable <NSCopying> {
    struct { unsigned char deltaPositionX : 1; unsigned char deltaPositionY : 1; unsigned char deltaPositionZ : 1; unsigned char deltaVelocityX : 1; unsigned char deltaVelocityY : 1; unsigned char deltaVelocityZ : 1; unsigned char timestamp : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) double timestamp;
@property (nonatomic) char hasDeltaPositionX;
@property (nonatomic) double deltaPositionX;
@property (nonatomic) char hasDeltaPositionY;
@property (nonatomic) double deltaPositionY;
@property (nonatomic) char hasDeltaPositionZ;
@property (nonatomic) double deltaPositionZ;
@property (nonatomic) char hasDeltaVelocityX;
@property (nonatomic) double deltaVelocityX;
@property (nonatomic) char hasDeltaVelocityY;
@property (nonatomic) double deltaVelocityY;
@property (nonatomic) char hasDeltaVelocityZ;
@property (nonatomic) double deltaVelocityZ;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
