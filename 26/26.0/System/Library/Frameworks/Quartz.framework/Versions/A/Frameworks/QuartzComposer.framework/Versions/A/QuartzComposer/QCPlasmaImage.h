@class QCImagePort, QCColorPort, QCNumberPort, QCBooleanPort;

@interface QCPlasmaImage : QCPatch {
    QCBooleanPort *inputSaturate;
    QCNumberPort *inputScale;
    QCNumberPort *inputX;
    QCNumberPort *inputY;
    QCNumberPort *inputAmplitude;
    QCColorPort *inputColorStart;
    QCColorPort *inputColorMiddle;
    QCColorPort *inputColorEnd;
    QCImagePort *outputImage;
    unsigned long long _width;
    unsigned long long _height;
    BOOL _colorCorrection;
    unsigned int _clut[256];
    char *_bufferAddress;
    unsigned long long _bufferRowBytes;
    unsigned int _target;
    unsigned long long _mipmapLevels;
}

+ (BOOL)isSafe;
+ (BOOL)allowsSubpatchesWithIdentifier:(id)a0;
+ (Class)inspectorClassWithIdentifier:(id)a0;
+ (id)stateKeysWithIdentifier:(id)a0;
+ (unsigned long long)stateVersionWithIdentifier:(id)a0;
+ (int)timeModeWithIdentifier:(id)a0;

- (BOOL)setState:(id)a0;
- (id)state;
- (id)initWithIdentifier:(id)a0;
- (unsigned long long)width;
- (unsigned long long)height;
- (void)setWidth:(unsigned long long)a0 height:(unsigned long long)a1;
- (BOOL)setup:(id)a0;
- (void)cleanup:(id)a0;
- (BOOL)execute:(id)a0 time:(double)a1 arguments:(id)a2;

@end
