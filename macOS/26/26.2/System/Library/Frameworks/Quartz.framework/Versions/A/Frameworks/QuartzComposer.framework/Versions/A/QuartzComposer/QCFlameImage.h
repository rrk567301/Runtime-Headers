@class QCColorPort, QCImagePort;

@interface QCFlameImage : QCPatch {
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
+ (int)executionModeWithIdentifier:(id)a0;
+ (Class)inspectorClassWithIdentifier:(id)a0;
+ (id)stateKeysWithIdentifier:(id)a0;

- (unsigned long long)height;
- (id)state;
- (unsigned long long)width;
- (id)initWithIdentifier:(id)a0;
- (BOOL)setState:(id)a0;
- (void)setWidth:(unsigned long long)a0 height:(unsigned long long)a1;
- (BOOL)setup:(id)a0;
- (void)cleanup:(id)a0;
- (BOOL)execute:(id)a0 time:(double)a1 arguments:(id)a2;

@end
