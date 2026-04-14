@class CIImageAccumulator, QCImagePort, QCIndexPort, QCNumberPort, QCBooleanPort;

@interface QCImageAccumulator : QCPatch {
    QCIndexPort *inputWidth;
    QCIndexPort *inputHeight;
    QCBooleanPort *inputAccumulate;
    QCImagePort *inputImage;
    QCNumberPort *inputDirtyOriginX;
    QCNumberPort *inputDirtyOriginY;
    QCNumberPort *inputDirtyWidth;
    QCNumberPort *inputDirtyHeight;
    QCImagePort *outputImage;
    int _accumulatorFormat;
    BOOL _continuous;
    CIImageAccumulator *_accumulator;
    unsigned int _target;
    unsigned long long _mipmapLevels;
}

+ (BOOL)isSafe;
+ (unsigned long long)stateVersionWithIdentifier:(id)a0;
+ (BOOL)allowsSubpatchesWithIdentifier:(id)a0;
+ (Class)inspectorClassWithIdentifier:(id)a0;

- (id)state;
- (id)initWithIdentifier:(id)a0;
- (BOOL)setState:(id)a0;
- (BOOL)isContinuous;
- (void)setIsContinuous:(BOOL)a0;
- (BOOL)setup:(id)a0;
- (BOOL)execute:(id)a0 time:(double)a1 arguments:(id)a2;
- (void)cleanup:(id)a0;
- (void)updateTimebase:(int)a0;
- (void)receiveMessage:(id)a0 name:(id)a1 attributes:(id)a2;
- (int)accumulatorFormat;
- (void)setAccumulatorFormat:(int)a0;
- (BOOL)_updateAccumulator:(id)a0;

@end
