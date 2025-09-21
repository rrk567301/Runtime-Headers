@class QCColorPort, QCImagePort;

@interface QCFlameImage : QCPatch {
    QCColorPort *inputColorStart;
    QCColorPort *inputColorMiddle;
    QCColorPort *inputColorEnd;
    QCImagePort *outputImage;
    unsigned long long _width;
    unsigned long long _height;
    char _colorCorrection;
    unsigned int _clut[256];
    char *_bufferAddress;
    unsigned long long _bufferRowBytes;
    unsigned int _target;
    unsigned long long _mipmapLevels;
}

+ (char)isSafe;
+ (char)allowsSubpatchesWithIdentifier:(id)a0;
+ (int)executionModeWithIdentifier:(id)a0;
+ (Class)inspectorClassWithIdentifier:(id)a0;
+ (id)stateKeysWithIdentifier:(id)a0;

- (id)state;
- (id)initWithIdentifier:(id)a0;
- (char)setState:(id)a0;
- (unsigned long long)height;
- (unsigned long long)width;
- (void)setWidth:(unsigned long long)a0 height:(unsigned long long)a1;
- (char)setup:(id)a0;
- (void)cleanup:(id)a0;
- (char)execute:(id)a0 time:(double)a1 arguments:(id)a2;

@end
