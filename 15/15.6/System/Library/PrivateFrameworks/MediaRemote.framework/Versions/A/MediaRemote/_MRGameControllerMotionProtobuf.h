@class _MRGameControllerAccelerationProtobuf;

@interface _MRGameControllerMotionProtobuf : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasGravity;
@property (retain, nonatomic) _MRGameControllerAccelerationProtobuf *gravity;
@property (readonly, nonatomic) char hasUserAcceleration;
@property (retain, nonatomic) _MRGameControllerAccelerationProtobuf *userAcceleration;
@property (readonly, nonatomic) char hasAttitude;
@property (retain, nonatomic) _MRGameControllerAccelerationProtobuf *attitude;
@property (readonly, nonatomic) char hasRotation;
@property (retain, nonatomic) _MRGameControllerAccelerationProtobuf *rotation;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
