@class QCNumberPort, QCIndexPort;

@interface QCScreenInfo : QCPatch {
    QCNumberPort *outputWidth;
    QCNumberPort *outputHeight;
    QCIndexPort *outputPixelsWide;
    QCIndexPort *outputPixelsHigh;
    QCNumberPort *outputRatio;
    QCNumberPort *outputResolution;
    char _cleanAperture;
}

+ (char)isSafe;
+ (char)allowsSubpatchesWithIdentifier:(id)a0;
+ (Class)inspectorClassWithIdentifier:(id)a0;

- (id)state;
- (id)initWithIdentifier:(id)a0;
- (char)setState:(id)a0;
- (char)setup:(id)a0;
- (void)receiveMessage:(id)a0 name:(id)a1 attributes:(id)a2;
- (char)execute:(id)a0 time:(double)a1 arguments:(id)a2;
- (void)setUseCleanAperture:(char)a0;
- (char)useCleanAperture;

@end
