@interface _MRGameControllerButtonsProtobuf : PBCodable <NSCopying> {
    struct { unsigned char a : 1; unsigned char b : 1; unsigned char dPadX : 1; unsigned char dPadY : 1; unsigned char leftShoulder : 1; unsigned char leftThumbstickX : 1; unsigned char leftThumbstickY : 1; unsigned char leftTrigger : 1; unsigned char pause : 1; unsigned char rightShoulder : 1; unsigned char rightThumbstickX : 1; unsigned char rightThumbstickY : 1; unsigned char rightTrigger : 1; unsigned char x : 1; unsigned char y : 1; } _has;
}

@property (nonatomic) char hasDPadX;
@property (nonatomic) float dPadX;
@property (nonatomic) char hasDPadY;
@property (nonatomic) float dPadY;
@property (nonatomic) char hasA;
@property (nonatomic) float a;
@property (nonatomic) char hasB;
@property (nonatomic) float b;
@property (nonatomic) char hasX;
@property (nonatomic) float x;
@property (nonatomic) char hasY;
@property (nonatomic) float y;
@property (nonatomic) char hasLeftShoulder;
@property (nonatomic) float leftShoulder;
@property (nonatomic) char hasRightShoulder;
@property (nonatomic) float rightShoulder;
@property (nonatomic) char hasLeftThumbstickX;
@property (nonatomic) float leftThumbstickX;
@property (nonatomic) char hasLeftThumbstickY;
@property (nonatomic) float leftThumbstickY;
@property (nonatomic) char hasRightThumbstickX;
@property (nonatomic) float rightThumbstickX;
@property (nonatomic) char hasRightThumbstickY;
@property (nonatomic) float rightThumbstickY;
@property (nonatomic) char hasLeftTrigger;
@property (nonatomic) float leftTrigger;
@property (nonatomic) char hasRightTrigger;
@property (nonatomic) float rightTrigger;
@property (nonatomic) char hasPause;
@property (nonatomic) float pause;

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
