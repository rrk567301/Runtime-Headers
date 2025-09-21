@class _MRGameControllerMotionProtobuf, _MRGameControllerDigitizerProtobuf, _MRGameControllerButtonsProtobuf;

@interface _MRGameControllerMessageProtobuf : PBCodable <NSCopying> {
    struct { unsigned char controllerID : 1; } _has;
}

@property (nonatomic) char hasControllerID;
@property (nonatomic) unsigned long long controllerID;
@property (readonly, nonatomic) char hasMotion;
@property (retain, nonatomic) _MRGameControllerMotionProtobuf *motion;
@property (readonly, nonatomic) char hasButtons;
@property (retain, nonatomic) _MRGameControllerButtonsProtobuf *buttons;
@property (readonly, nonatomic) char hasDigitizer;
@property (retain, nonatomic) _MRGameControllerDigitizerProtobuf *digitizer;

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
