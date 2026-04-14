@class _MRGameControllerMotionProtobuf, _MRGameControllerDigitizerProtobuf, _MRGameControllerButtonsProtobuf;

@interface _MRGameControllerMessageProtobuf : PBCodable <NSCopying> {
    struct { unsigned char controllerID : 1; } _has;
}

@property (nonatomic) BOOL hasControllerID;
@property (nonatomic) unsigned long long controllerID;
@property (readonly, nonatomic) BOOL hasMotion;
@property (retain, nonatomic) _MRGameControllerMotionProtobuf *motion;
@property (readonly, nonatomic) BOOL hasButtons;
@property (retain, nonatomic) _MRGameControllerButtonsProtobuf *buttons;
@property (readonly, nonatomic) BOOL hasDigitizer;
@property (retain, nonatomic) _MRGameControllerDigitizerProtobuf *digitizer;

- (id)dictionaryRepresentation;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)copyTo:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
