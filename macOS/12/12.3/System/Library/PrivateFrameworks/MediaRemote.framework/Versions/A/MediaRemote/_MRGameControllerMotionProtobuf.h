@class _MRGameControllerAccelerationProtobuf;

@interface _MRGameControllerMotionProtobuf : PBCodable <NSCopying> {
    _MRGameControllerAccelerationProtobuf *_attitude;
    _MRGameControllerAccelerationProtobuf *_gravity;
    _MRGameControllerAccelerationProtobuf *_rotation;
    _MRGameControllerAccelerationProtobuf *_userAcceleration;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
