@class _MRGameControllerAccelerationProtobuf;

@interface _MRGameControllerMotionProtobuf : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasGravity;
@property (retain, nonatomic) _MRGameControllerAccelerationProtobuf *gravity;
@property (readonly, nonatomic) BOOL hasUserAcceleration;
@property (retain, nonatomic) _MRGameControllerAccelerationProtobuf *userAcceleration;
@property (readonly, nonatomic) BOOL hasAttitude;
@property (retain, nonatomic) _MRGameControllerAccelerationProtobuf *attitude;
@property (readonly, nonatomic) BOOL hasRotation;
@property (retain, nonatomic) _MRGameControllerAccelerationProtobuf *rotation;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
