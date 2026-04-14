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

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;

@end
